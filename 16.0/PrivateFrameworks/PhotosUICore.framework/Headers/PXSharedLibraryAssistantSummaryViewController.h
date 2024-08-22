// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYASSISTANTSUMMARYVIEWCONTROLLER_H
#define PXSHAREDLIBRARYASSISTANTSUMMARYVIEWCONTROLLER_H

@class OBWelcomeController, UILabel, OBBoldTrayButton, OBTrayButton, NSLayoutConstraint, NSString, NSProgress;
@protocol PXChangeObserver, PXAssistantViewController, PXAssistantViewControllerDelegate;


#import "PXRoundProgressView.h"
#import "PXSharedLibraryAssistantViewModel.h"

@interface PXSharedLibraryAssistantSummaryViewController : OBWelcomeController <PXChangeObserver, PXAssistantViewController>

 {
    UILabel *_progressLabel;
    PXRoundProgressView *_progressView;
    OBBoldTrayButton *_previewButton;
    OBTrayButton *_skipPreviewButton;
    NSLayoutConstraint *_progressHeightConstraint;
}


@property (weak, nonatomic) NSObject<PXAssistantViewControllerDelegate> *assistantViewControllerDelegate; // ivar: assistantViewControllerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSProgress *previewProgress; // ivar: _previewProgress
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel; // ivar: _viewModel


-(id)_presentationEnvironment;
-(id)initWithViewModel:(id)arg0 ;
-(void)_createPreviewAndCompleteAssistant;
-(void)_previewInvitationAndCompleteAssistant;
-(void)_setIsProcessing:(BOOL)arg0 ;
-(void)cancelShareIfInProgress;
-(void)createPreviewAndCompleteAssistant;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prepareUIForProcessing:(BOOL)arg0 ;
-(void)primaryButtonTapped:(id)arg0 ;
-(void)secondaryButtonTapped:(id)arg0 ;
-(void)skipAndContinue;
-(void)updateProgress;
-(void)viewDidLoad;


@end


#endif