// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFVIEWCONTENTGRAPHACTIONUIKITUSERINTERFACE_H
#define WFVIEWCONTENTGRAPHACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol UIAdaptivePresentationControllerDelegate, WFViewContentGraphActionUserInterface;



@interface WFViewContentGraphActionUIKitUserInterface : WFEmbeddableActionUserInterface <UIAdaptivePresentationControllerDelegate, WFViewContentGraphActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)done;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)showWithContentItems:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif