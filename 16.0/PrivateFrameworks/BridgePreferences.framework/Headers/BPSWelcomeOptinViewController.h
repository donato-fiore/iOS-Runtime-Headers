// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSWELCOMEOPTINVIEWCONTROLLER_H
#define BPSWELCOMEOPTINVIEWCONTROLLER_H

@class OBWelcomeController, OBTrayButton, NSString, OBHeaderAccessoryButton, NSUserActivity, NSLayoutConstraint;
@protocol BPSBuddyController, BPSBuddyControllerDelegate;


#import "BPSIllustratedWatchView.h"
#import "BPSWatchView.h"

@interface BPSWelcomeOptinViewController : OBWelcomeController <BPSBuddyController>



@property (retain, nonatomic) OBTrayButton *alternateChoiceButton; // ivar: _alternateChoiceButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BPSBuddyControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasDetailText; // ivar: _hasDetailText
@property (nonatomic) BOOL hasFinishedLoadingView; // ivar: _hasFinishedLoadingView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BPSIllustratedWatchView *illustratedWatchView; // ivar: _illustratedWatchView
@property (nonatomic) BOOL isDisplayingInSkippedMiniFlow; // ivar: _isDisplayingInSkippedMiniFlow
@property (retain, nonatomic) OBHeaderAccessoryButton *learnMoreButton; // ivar: _learnMoreButton
@property (retain, nonatomic) OBTrayButton *okayButton; // ivar: _okayButton
@property (nonatomic) BOOL showAlternateButton; // ivar: _showAlternateButton
@property (nonatomic) BOOL showOkayButton; // ivar: _showOkayButton
@property (nonatomic) BOOL showSuggestedButton; // ivar: _showSuggestedButton
@property (nonatomic) NSUInteger style; // ivar: _style
@property (retain, nonatomic) OBTrayButton *suggestedChoiceButton; // ivar: _suggestedChoiceButton
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUserActivity *tapToRadarActivity; // ivar: _tapToRadarActivity
@property (retain, nonatomic) BPSWatchView *watchView; // ivar: _watchView
@property (retain, nonatomic) NSLayoutConstraint *watchViewBottomConstraint; // ivar: _watchViewBottomConstraint


+(id)expressModeSettingsItem:(id)arg0 ;
-(BOOL)wantsAlternateChoicePillButton;
-(BOOL)wantsAlternateChoiceSystemButton;
-(BOOL)wantsFollowUpNotification;
-(BOOL)wantsInternalFPOLabel;
-(BOOL)wantsLearnMoreButton;
-(BOOL)wantsLightenBlendedScreen;
-(BOOL)wantsOkayPillButton;
-(BOOL)wantsSuggestedChoiceLinkButton;
-(BOOL)wantsSuggestedChoicePillButton;
-(BOOL)wantsToShowWatchHW;
-(id)_baseIdentifier;
-(id)alternateButtonTitle;
-(id)captionText;
-(id)detailAtrributedString;
-(id)detailString;
-(id)detailTitleString;
-(id)followUpActions;
-(id)followUpIdentifier;
-(id)imageResource;
-(id)imageResourceBundleIdentifier;
-(id)imageTintColor;
-(id)init;
-(id)localizedInformativeNotificationText;
-(id)localizedInformativeText;
-(id)localizedNotificationTitle;
-(id)localizedTitle;
-(id)optinLocalizationBundle;
-(id)optinLocalizationStringsFile;
-(id)privacyBundles;
-(id)suggestedButtonTitle;
-(id)tapToRadarMetadata;
-(id)titleAttributedString;
-(id)titleString;
-(void)_addButtonObservers;
-(void)_didTapPrivacyAccept:(id)arg0 ;
-(void)_endTapToRadarActivity;
-(void)_refreshButtonTray;
-(void)_removeButtonObservers;
-(void)_startTapToRadarActivity;
-(void)addFollowUpForPageAndDevice:(id)arg0 withCompletion:(id)arg1 ;
-(void)addFollowUpForPageWithCompletion:(id)arg0 ;
-(void)alternateButtonPressed:(id)arg0 ;
-(void)applyConfirmedOptin:(BOOL)arg0 ;
-(void)dealloc;
-(void)learnMoreButtonPressed:(id)arg0 ;
-(void)markPaneAsSkipped;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)okayButtonPressed:(id)arg0 ;
-(void)openTapToRadar;
-(void)refreshViews;
-(void)removeFollowupForPageWithCompletion:(id)arg0 ;
-(void)showOptinConfirmationAlert:(id)arg0 optinChoice:(BOOL)arg1 ;
-(void)suggestedButtonPressed:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif