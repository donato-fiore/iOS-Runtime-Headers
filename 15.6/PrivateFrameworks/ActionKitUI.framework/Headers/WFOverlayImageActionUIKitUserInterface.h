// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFOVERLAYIMAGEACTIONUIKITUSERINTERFACE_H
#define WFOVERLAYIMAGEACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol WFOverlayImageActionUserInterface;



@interface WFOverlayImageActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFOverlayImageActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithFileRepresentations:(id)arg0 error:(id)arg1 ;
-(void)showWithOverlayImage:(id)arg0 images:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif