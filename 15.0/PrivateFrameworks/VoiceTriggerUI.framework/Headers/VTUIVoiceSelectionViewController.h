// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTUIVOICESELECTIONVIEWCONTROLLER_H
#define VTUIVOICESELECTIONVIEWCONTROLLER_H

@class UIViewController, SUICVoiceSelectionPresenter, NSLayoutConstraint, AFVoiceInfo, UIBarButtonItem, NSString;
@protocol SUICVoiceSelectionPresenterDelegate, VTUIVoiceSelectionContaining, VTUIVoiceSelectionViewControllerDelegate;


#import "VTUIVoiceSelectionOptionsView.h"
#import "VTUIStyle.h"

@interface VTUIVoiceSelectionViewController : UIViewController <SUICVoiceSelectionPresenterDelegate>

 {
    SUICVoiceSelectionPresenter *_voiceSelectionPresenter;
    VTUIVoiceSelectionOptionsView *_voiceOptionsView;
    NSLayoutConstraint *_voiceOptionsViewHeightConstraint;
    VTUIStyle *_style;
    id<VTUIVoiceSelectionContaining> *_voiceSelectionContainer;
    AFVoiceInfo *_currentVoiceSelection;
    BOOL _allowsRandomSelection;
    UIBarButtonItem *_continueBarButton;
    BOOL shouldReportSelectionOnRandomVoicePlayBackCompletion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<VTUIVoiceSelectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_initWithTitle:(id)arg0 detailText:(id)arg1 recognitionLanguage:(id)arg2 compact:(BOOL)arg3 allowsRandomSelection:(BOOL)arg4 forSelectionStyle:(NSInteger)arg5 barButtonItemForContinue:(id)arg6 dataManager:(id)arg7 customVoicePreviewer:(id)arg8 delegate:(id)arg9 ;
-(id)chooseForMeButton;
-(id)continueButton;
-(id)initCompactWithRecognitionLanguage:(id)arg0 allowsRandomSelection:(BOOL)arg1 customVoicePreviewer:(id)arg2 delegate:(id)arg3 ;
-(id)initCompactWithRecognitionLanguage:(id)arg0 allowsRandomSelection:(BOOL)arg1 dataManager:(id)arg2 customVoicePreviewer:(id)arg3 delegate:(id)arg4 ;
-(id)initCompactWithRecognitionLanguage:(id)arg0 allowsRandomSelection:(BOOL)arg1 dataManager:(id)arg2 customVoicePreviewer:(id)arg3 forSelectionStyle:(NSInteger)arg4 delegate:(id)arg5 ;
-(id)initWithRecognitionLanguage:(id)arg0 allowsRandomSelection:(BOOL)arg1 barButtonItemForContinue:(id)arg2 customVoicePreviewer:(id)arg3 delegate:(id)arg4 ;
-(id)initWithRecognitionLanguage:(id)arg0 allowsRandomSelection:(BOOL)arg1 barButtonItemForContinue:(id)arg2 dataManager:(id)arg3 customVoicePreviewer:(id)arg4 delegate:(id)arg5 ;
-(void)_chooseForMeButtonClicked;
-(void)_continueButtonClicked;
-(void)_dismissButtonClicked;
-(void)_setupButtons;
-(void)_setupContentForRecognitionLanguage:(id)arg0 dataManager:(id)arg1 customVoicePreviewer:(id)arg2 ;
-(void)_setupWithTitle:(id)arg0 detailText:(id)arg1 allowsRandomSelection:(BOOL)arg2 compact:(BOOL)arg3 forSelectionStyle:(NSInteger)arg4 ;
-(void)presenter:(id)arg0 didChangeAudioOutputPowerLevel:(float)arg1 ;
-(void)presenter:(id)arg0 didChangeVoiceSelection:(id)arg1 ;
-(void)setShouldHideCompactBackgroundCardView:(BOOL)arg0 ;
-(void)updateContainerConstraintsForOrientationChangeToSize:(struct CGSize )arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif