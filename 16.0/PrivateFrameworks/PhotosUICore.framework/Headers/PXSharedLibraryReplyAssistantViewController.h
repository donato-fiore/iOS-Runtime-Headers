// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYREPLYASSISTANTVIEWCONTROLLER_H
#define PXSHAREDLIBRARYREPLYASSISTANTVIEWCONTROLLER_H

@class OBWelcomeController, UITextView, NSString;
@protocol PXAssistantViewController, PXAssistantViewControllerDelegate;


#import "PXSharedLibraryAssistantViewModel.h"

@interface PXSharedLibraryReplyAssistantViewController : OBWelcomeController <PXAssistantViewController>

 {
    UITextView *_textView;
}


@property (weak, nonatomic) NSObject<PXAssistantViewControllerDelegate> *assistantViewControllerDelegate; // ivar: assistantViewControllerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel; // ivar: _viewModel


-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)initWithViewModel:(id)arg0 ;
-(void)_setIsProcessing:(BOOL)arg0 ;
-(void)_updateImage;
-(void)_updateTextView;
-(void)acceptAndContinue;
-(void)declineButtonTapped:(id)arg0 ;
-(void)declineInvitation;
-(void)setupButtonTapped:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif