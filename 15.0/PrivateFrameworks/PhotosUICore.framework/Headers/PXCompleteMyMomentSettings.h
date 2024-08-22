// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCOMPLETEMYMOMENTSETTINGS_H
#define PXCOMPLETEMYMOMENTSETTINGS_H

@class NSString;
@protocol PXCMMWorkflowCoordinatorDelegate;


#import "PXSettings.h"
#import "PXCMMWorkflowCoordinator.h"

@interface PXCompleteMyMomentSettings : PXSettings <PXCMMWorkflowCoordinatorDelegate>



@property (nonatomic) BOOL allowLayoutTransitionGesture; // ivar: _allowLayoutTransitionGesture
@property (nonatomic) BOOL allowOneUpGesture; // ivar: _allowOneUpGesture
@property (nonatomic) BOOL allowSendBackInGridZero; // ivar: _allowSendBackInGridZero
@property (nonatomic) BOOL allowSwipeSelection; // ivar: _allowSwipeSelection
@property (nonatomic) BOOL alwaysSortAfterAddMore; // ivar: _alwaysSortAfterAddMore
@property (nonatomic) BOOL alwaysTapToRetry; // ivar: _alwaysTapToRetry
@property (nonatomic) BOOL autoAcceptBubbles; // ivar: _autoAcceptBubbles
@property (nonatomic) BOOL cmmFeatureEnabled; // ivar: _cmmFeatureEnabled
@property (nonatomic) NSInteger cmmShareSheetBehavior; // ivar: _cmmShareSheetBehavior
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL directSendMessages; // ivar: _directSendMessages
@property (nonatomic) BOOL disableClickyOrb; // ivar: _disableClickyOrb
@property (nonatomic) BOOL disableCopyAction; // ivar: _disableCopyAction
@property (nonatomic) BOOL disableDescriptiveWaiting; // ivar: _disableDescriptiveWaiting
@property (nonatomic) BOOL disableDetailView; // ivar: _disableDetailView
@property (nonatomic) BOOL disableOneUpDescriptiveAdd; // ivar: _disableOneUpDescriptiveAdd
@property (nonatomic) BOOL disablePrintAction; // ivar: _disablePrintAction
@property (nonatomic) BOOL disableShareAction; // ivar: _disableShareAction
@property (nonatomic) BOOL disableShowInAllPhotosAction; // ivar: _disableShowInAllPhotosAction
@property (nonatomic) BOOL emulatesEmptyMomentShare; // ivar: _emulatesEmptyMomentShare
@property (nonatomic) BOOL enableLightCuration; // ivar: _enableLightCuration
@property (nonatomic) BOOL fakeMomentShareURL; // ivar: _fakeMomentShareURL
@property (nonatomic) BOOL graphSuggestionEnabled; // ivar: _graphSuggestionEnabled
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger initialLayoutType; // ivar: _initialLayoutType
@property (nonatomic) NSInteger invitationsDataSourceType; // ivar: _invitationsDataSourceType
@property (nonatomic) NSInteger overrideNumberOfColumnsInLandscape; // ivar: _overrideNumberOfColumnsInLandscape
@property (nonatomic) NSInteger overrideNumberOfColumnsInPortrait; // ivar: _overrideNumberOfColumnsInPortrait
@property (nonatomic) NSInteger peopleSuggestionsDataSourceType; // ivar: _peopleSuggestionsDataSourceType
@property (nonatomic) CGFloat peopleSuggestionsTimeout; // ivar: _peopleSuggestionsTimeout
@property (nonatomic) BOOL preventNilTitles; // ivar: _preventNilTitles
@property (nonatomic) NSInteger publishTransport; // ivar: _publishTransport
@property (nonatomic) NSInteger reviewFlow; // ivar: _reviewFlow
@property (nonatomic) NSInteger reviewFlowDataSourceType; // ivar: _reviewFlowDataSourceType
@property (nonatomic) BOOL sectionHeadersShouldFloat; // ivar: _sectionHeadersShouldFloat
@property (nonatomic) NSInteger sendBackDataSourceType; // ivar: _sendBackDataSourceType
@property (nonatomic) NSInteger shareSheetLinkAssetCountThreshold; // ivar: _shareSheetLinkAssetCountThreshold
@property (nonatomic) NSUInteger shareSheetLinkTotalFileSizeThresholdMB; // ivar: _shareSheetLinkTotalFileSizeThresholdMB
@property (nonatomic) NSInteger sharingLinkType; // ivar: _sharingLinkType
@property (nonatomic) BOOL shouldBakeInIfAdjustedByThirdParty; // ivar: _shouldBakeInIfAdjustedByThirdParty
@property (nonatomic) BOOL shouldBakeInIfContainsPenultimateResources; // ivar: _shouldBakeInIfContainsPenultimateResources
@property (nonatomic) BOOL shouldBakeInIfCropped; // ivar: _shouldBakeInIfCropped
@property (nonatomic) BOOL shouldBakeInIfLivePhotoMuted; // ivar: _shouldBakeInIfLivePhotoMuted
@property (nonatomic) BOOL shouldBakeInIfLivePhotoPlaybackDisabled; // ivar: _shouldBakeInIfLivePhotoPlaybackDisabled
@property (nonatomic) BOOL shouldBakeInIfPortraitDepthEffectEnabled; // ivar: _shouldBakeInIfPortraitDepthEffectEnabled
@property (nonatomic) BOOL shouldBakeInIfTimelineTrimmed; // ivar: _shouldBakeInIfTimelineTrimmed
@property (nonatomic) BOOL shouldIncludeSpatialOvercaptureResources; // ivar: _shouldIncludeSpatialOvercaptureResources
@property (nonatomic) BOOL shouldShowInlineAddButton; // ivar: _shouldShowInlineAddButton
@property (nonatomic) BOOL showAttachedHeaderView; // ivar: _showAttachedHeaderView
@property (nonatomic) BOOL showCMMInvitationGadgets; // ivar: _showCMMInvitationGadgets
@property (nonatomic) BOOL showCMMSuggestionGadgets; // ivar: _showCMMSuggestionGadgets
@property (nonatomic) BOOL showDebugStatus; // ivar: _showDebugStatus
@property (nonatomic) BOOL showFakeSendBackFooterView; // ivar: _showFakeSendBackFooterView
@property (nonatomic) BOOL showFloatingBanner; // ivar: _showFloatingBanner
@property (nonatomic) BOOL showMergeCandidateSuggestionsAfterBootstrapNaming; // ivar: _showMergeCandidateSuggestionsAfterBootstrapNaming
@property (nonatomic) BOOL showMessage; // ivar: _showMessage
@property (nonatomic) BOOL showMessageTextEntryGadget; // ivar: _showMessageTextEntryGadget
@property (nonatomic) BOOL showOtherTitle; // ivar: _showOtherTitle
@property (nonatomic) BOOL showPeopleSuggestions; // ivar: _showPeopleSuggestions
@property (nonatomic) BOOL showProgressBannerView; // ivar: _showProgressBannerView
@property (nonatomic) BOOL showProgressBannerViewPaused; // ivar: _showProgressBannerViewPaused
@property (nonatomic) BOOL showProgressInGrid; // ivar: _showProgressInGrid
@property (nonatomic) BOOL showSampleGadgets; // ivar: _showSampleGadgets
@property (nonatomic) BOOL showSectionHeaders; // ivar: _showSectionHeaders
@property (nonatomic) BOOL showSendBackFooterView; // ivar: _showSendBackFooterView
@property (nonatomic) BOOL showSenderField; // ivar: _showSenderField
@property (nonatomic) BOOL showStatusFooter; // ivar: _showStatusFooter
@property (nonatomic) BOOL showSubtitle; // ivar: _showSubtitle
@property (nonatomic) BOOL showTitle; // ivar: _showTitle
@property (nonatomic) BOOL showURLInBubble; // ivar: _showURLInBubble
@property (nonatomic) NSInteger sidebarType; // ivar: _sidebarType
@property (nonatomic) BOOL simulateCPLAlertOnPublish; // ivar: _simulateCPLAlertOnPublish
@property (nonatomic) BOOL simulateDelays; // ivar: _simulateDelays
@property (nonatomic) BOOL simulateImport; // ivar: _simulateImport
@property (nonatomic) BOOL simulateImportFailure; // ivar: _simulateImportFailure
@property (nonatomic) BOOL simulateMomentShareBubbleError; // ivar: _simulateMomentShareBubbleError
@property (nonatomic) BOOL simulateMomentShareCreationError; // ivar: _simulateMomentShareCreationError
@property (nonatomic) BOOL simulateShouldPromptUserToIgnoreBudgets; // ivar: _simulateShouldPromptUserToIgnoreBudgets
@property (nonatomic) NSInteger simulatedMomentShareBubbleErrorType; // ivar: _simulatedMomentShareBubbleErrorType
@property (nonatomic) NSInteger simulatedMomentShareCreationErrorType; // ivar: _simulatedMomentShareCreationErrorType
@property (nonatomic) NSInteger suggestionsDataSourceType; // ivar: _suggestionsDataSourceType
@property (nonatomic) NSUInteger suggestionsMatchingStrategy; // ivar: _suggestionsMatchingStrategy
@property (nonatomic) NSInteger suggestionsScrollDirection; // ivar: _suggestionsScrollDirection
@property (readonly) Class superclass;
@property (nonatomic) BOOL useDebugColors; // ivar: _useDebugColors
@property (nonatomic) BOOL useStackBubbleView; // ivar: _useStackBubbleView
@property (retain, nonatomic) PXCMMWorkflowCoordinator *workflowCoordinator;


+(id)_enableAllCmmImprovementsAction;
+(id)_enabledAllCmmImprovementsActionPredicate;
+(id)settingsControllerModule;
+(id)sharedInstance;
+(id)simulatedMomentShareErrorLabels;
+(id)simulatedMomentShareErrorValues;
+(id)transientProperties;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)workflowCoordinator:(id)arg0 workflowViewController:(id)arg1 didFinishSession:(id)arg2 withActivityState:(NSUInteger)arg3 ;


@end


#endif