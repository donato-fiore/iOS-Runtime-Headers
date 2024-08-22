// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFGIPHYACTIONUIKITUSERINTERFACE_H
#define WFGIPHYACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol UIAdaptivePresentationControllerDelegate, WFGiphyActionUserInterface, WFGiphyViewControllerDelegate;



@interface WFGiphyActionUIKitUserInterface : WFEmbeddableActionUserInterface <UIAdaptivePresentationControllerDelegate, WFGiphyActionUserInterface, WFGiphyViewControllerDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithContent:(id)arg0 error:(id)arg1 ;
-(void)giphyViewController:(id)arg0 didSelectObjects:(id)arg1 ;
-(void)giphyViewControllerDidCancel:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)showWithQuery:(id)arg0 selectMultiple:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif