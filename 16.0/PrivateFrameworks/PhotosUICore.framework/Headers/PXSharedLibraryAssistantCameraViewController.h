// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYASSISTANTCAMERAVIEWCONTROLLER_H
#define PXSHAREDLIBRARYASSISTANTCAMERAVIEWCONTROLLER_H

@class OBWelcomeController, UITextView, NSString;
@protocol PXAssistantViewController, PXAssistantViewControllerDelegate;



@interface PXSharedLibraryAssistantCameraViewController : OBWelcomeController <PXAssistantViewController>

 {
    UITextView *_textView;
}


@property (weak, nonatomic) NSObject<PXAssistantViewControllerDelegate> *assistantViewControllerDelegate; // ivar: assistantViewControllerDelegate
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_completeWithAutoSharedEnabled:(BOOL)arg0 ;
-(void)_updateTextView;
-(void)primaryButtonTapped:(id)arg0 ;
-(void)secondaryButtonTapped:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif