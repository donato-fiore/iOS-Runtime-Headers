// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYREPLYASSISTANTVIEWCONTROLLER_H
#define PXSHAREDLIBRARYREPLYASSISTANTVIEWCONTROLLER_H

@class OBWelcomeController, UITextView, NSString, OBBoldTrayButton;
@protocol PXChangeObserver, PXAssistantViewController, PXAssistantViewControllerDelegate;


#import "PXSharedLibraryLegacyDevicesFallbackMonitor.h"
#import "PXSharedLibraryAssistantViewModel.h"

@interface PXSharedLibraryReplyAssistantViewController : OBWelcomeController <PXChangeObserver, PXAssistantViewController>

 {
    UITextView *_textView;
}


@property (weak, nonatomic) NSObject<PXAssistantViewControllerDelegate> *assistantViewControllerDelegate; // ivar: assistantViewControllerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXSharedLibraryLegacyDevicesFallbackMonitor *legacyDevicesFallbackMonitor; // ivar: _legacyDevicesFallbackMonitor
@property (retain, nonatomic) OBBoldTrayButton *setupButton; // ivar: _setupButton
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel; // ivar: _viewModel
@property (nonatomic) BOOL wantsToStepForward; // ivar: _wantsToStepForward


-(BOOL)_canStepForward;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)initWithViewModel:(id)arg0 legacyDevicesFallbackMonitor:(id)arg1 ;
-(void)_setIsWaitingToStepForward:(BOOL)arg0 ;
-(void)_stepForward;
-(void)_updateImage;
-(void)_updateTextView;
-(void)acceptAndContinue;
-(void)declineButtonTapped:(id)arg0 ;
-(void)declineInvitation;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)setupButtonTapped:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif