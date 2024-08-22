// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUACTIVITYVIEWCONTROLLER_H
#define PUACTIVITYVIEWCONTROLLER_H

@class UIActivityViewController, PLProgressView, UIView, NSOrderedSet, PXCPLStatusProvider, NSString, PHPerson, NSArray;
@protocol PXForcedDismissableViewController, PXChangeObserver, PUActivityItemSourceControllerDelegate, UIActivityViewControllerObjectManipulationDelegate, PUSharingHeaderDataProvider, PXActivityViewController, UIActivityItemLinkPresentationSource, PUActivityViewControllerDelegate, PXDisplayAsset;


#import "PUActivityItemSourceController.h"
#import "PUSharingHeaderController.h"
#import "PUActivitySharingController.h"
#import "PUActivityProgressController.h"
#import "PUActivitySharingViewModel.h"

@interface PUActivityViewController : UIActivityViewController <PXForcedDismissableViewController, PXChangeObserver, PUActivityItemSourceControllerDelegate, UIActivityViewControllerObjectManipulationDelegate, PUSharingHeaderDataProvider, PXActivityViewController>

 {
    PLProgressView *_remakerProgressView;
    UIView *_topBorderView;
    PUActivityItemSourceController *_itemSourceController;
    id<UIActivityItemLinkPresentationSource> *_linkPresentation;
    NSInteger _numberOfAssetsToPrepare;
    NSInteger _numberOfAssetPreparationsCompleted;
    CGFloat _currentAssetPreparationProgress;
    BOOL _isDismissed;
    BOOL _shouldUpdateVisibleItemsWhenReady;
    BOOL _isPreparingAssets;
    BOOL _didSuccessfullyPrepareAssets;
    BOOL _preparedAsCloudLink;
    PUSharingHeaderController *_sharingHeaderController;
    CGRect _lastSelectedActivityFrame;
}


@property (retain, nonatomic) PUActivitySharingController *activitySharingController; // ivar: _activitySharingController
@property (nonatomic) *__CFString aggregateKey; // ivar: _aggregateKey
@property (readonly, nonatomic) PXAssetMediaTypeCount assetTypeCount;
@property (readonly, copy, nonatomic) NSOrderedSet *assets;
@property (retain, nonatomic) PXCPLStatusProvider *cplStatusProvider; // ivar: _cplStatusProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUActivityViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL excludeAccessibilityDescription; // ivar: _excludeAccessibilityDescription
@property (nonatomic) BOOL excludeCaption; // ivar: _excludeCaption
@property (nonatomic) BOOL excludeLiveness; // ivar: _excludeLiveness
@property (nonatomic) BOOL excludeLocation; // ivar: _excludeLocation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isActionSheet;
@property (readonly, copy, nonatomic) NSObject<PXDisplayAsset> *keyAsset;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSOrderedSet *orderedSelectedAssets;
@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) NSArray *photosActivities; // ivar: _photosActivities
@property (copy, nonatomic) id *ppt_readyToInteractHandler; // ivar: _ppt_readyToInteractHandler
@property (retain, nonatomic) PUActivityProgressController *progressController; // ivar: _progressController
@property (nonatomic, getter=isReadyForInteraction) BOOL readyForInteraction; // ivar: _readyForInteraction
@property (copy, nonatomic) id *readyToInteractHandler; // ivar: _readyToInteractHandler
@property (nonatomic) BOOL sendAsOriginals; // ivar: _sendAsOriginals
@property (nonatomic) BOOL shareAsCMM; // ivar: _shareAsCMM
@property (readonly, nonatomic) PUActivitySharingViewModel *sharingViewModel; // ivar: _sharingViewModel
@property (nonatomic) BOOL shouldAutomaticallyUseCMMInMessagesIfThresholdMet; // ivar: _shouldAutomaticallyUseCMMInMessagesIfThresholdMet
@property (readonly, nonatomic) NSInteger sourceOrigin;
@property (readonly) Class superclass;


+(BOOL)cmmAssetCountThresholdIsMetForAssetItems:(id)arg0 ;
+(BOOL)cmmFileSizeThresholdIsMetForAssetItems:(id)arg0 ;
+(BOOL)cmmThresholdIsMetForAssetItems:(id)arg0 ;
+(BOOL)isOutboundShareActivity:(id)arg0 ;
+(BOOL)needsConfidentialityCheckForActivityType:(id)arg0 ;
+(id)actionSheetPhotosApplicationActivities;
+(id)defaultActivityTypeOrder;
+(id)excludedPhotosActivityTypesForPresentationSource:(NSUInteger)arg0 ;
+(id)externalApplicationExcludedPhotosActivityTypes;
+(id)new;
+(id)photosApplicationActivities;
-(BOOL)_canCreateCMMWithCurrentItems;
-(BOOL)_canShowSendAsOriginalsSwitchInObjectManipulationHeader;
-(BOOL)_customizationAvailableForActivityViewController:(id)arg0 ;
-(BOOL)_shouldAutomaticallySendAsCMMForActivity:(id)arg0 ;
-(BOOL)_shouldPresentAirplayAlertForActivity:(id)arg0 ;
-(BOOL)_shouldShowSystemActivityType:(id)arg0 ;
-(BOOL)_shouldSuggestSharingAsCMMForActivity:(id)arg0 ;
-(BOOL)prepareForDismissingForced:(BOOL)arg0 ;
-(id)_customizationGroupsForActivityViewController:(id)arg0 ;
-(id)_generateAnalyticsPayloadForSharingEventsToActivityType:(id)arg0 ;
-(id)_syndicationAssetSavingHelperWithAssets:(id)arg0 ;
-(id)_titleForActivity:(id)arg0 ;
-(id)init;
-(id)initWithAssetItems:(id)arg0 photosApplicationActivities:(id)arg1 linkPresentation:(id)arg2 ;
-(id)initWithAssetItems:(id)arg0 photosApplicationActivities:(id)arg1 linkPresentation:(id)arg2 assetIdentifiers:(id)arg3 sharingViewModel:(id)arg4 ;
-(void)_activity:(id)arg0 category:(NSInteger)arg1 didComplete:(BOOL)arg2 ;
-(void)_adjustPreparationOptionsIfNeededForActivity:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_cancel;
-(void)_cleanUpActivityState;
-(void)_handlePostReadyToInteractUpdatesIfNeeded;
-(void)_handleShareSheetReadyToInteractCompletion;
-(void)_handleUserCancelWithCompletion:(id)arg0 ;
-(void)_performActivity:(id)arg0 ;
-(void)_prepareActivity:(id)arg0 ;
-(void)_prepareAssetsForActivity:(id)arg0 forcePreparationAsMomentShareLink:(BOOL)arg1 ;
-(void)_presentAirPlayAlertIfNeededForActivity:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_presentCMMSuggestionAlertForActivity:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_presentConfidentialityWarningIfNeededForActivity:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_presentUnsavedSyndicatedAssetsAlertIfNeededForActivity:(id)arg0 forcePreparationAsMomentShareLink:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)_removeRemakerProgressView;
-(void)_sendCPAnalyticsAssetExportPreparationEventWithActivityType:(id)arg0 didComplete:(BOOL)arg1 error:(id)arg2 ;
-(void)_sendCPAnalyticsShareEventForMultipleSelectionShare;
-(void)_sendCPAnalyticsShareEventWithActivityType:(id)arg0 category:(NSInteger)arg1 didComplete:(BOOL)arg2 ;
-(void)_sharingManagerDidBeginPublishing:(id)arg0 ;
-(void)_sharingStyleDidChangeToExpanded:(id)arg0 ;
-(void)_showRemakerProgressView:(id)arg0 forMail:(BOOL)arg1 withCancelationHandler:(id)arg2 ;
-(void)_showSharingWasInterruptedForErrors:(id)arg0 withIndividualAssets:(id)arg1 itemSourcesByAssetUUID:(id)arg2 toActivityType:(id)arg3 completion:(id)arg4 ;
-(void)_updateSharingHeaderIfNeeded;
-(void)_updateSourceControllerPreferredPreparationBehavior;
-(void)_updateSourceControllerSharingPreferencesInAllItems;
-(void)_updateTopBorderView;
-(void)activityItemSourceController:(id)arg0 didFinishPreparationForActivityType:(id)arg1 preparationType:(NSUInteger)arg2 withItems:(id)arg3 didCancel:(BOOL)arg4 errors:(id)arg5 completion:(id)arg6 ;
-(void)activityItemSourceController:(id)arg0 willBeginPreparationWithActivityType:(id)arg1 preparationType:(NSUInteger)arg2 ;
-(void)addAssetItem:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)mailActivity:(id)arg0 displayVideoRemakerProgressView:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)ppt_cancelActivity;
-(void)ppt_performActivityOfType:(id)arg0 ;
-(void)removeAssetItem:(id)arg0 ;
-(void)removeProgressUIAnimated:(BOOL)arg0 withDelay:(BOOL)arg1 ;
-(void)replaceAssetItem:(id)arg0 withAssetItem:(id)arg1 ;
-(void)setAssetItems:(id)arg0 ;
-(void)setCompletionWithItemsHandler:(id)arg0 ;
-(void)setExcludedActivityTypes:(id)arg0 ;
-(void)setPhotosCarouselViewController:(id)arg0 ;
-(void)showProgressUIAnimated:(BOOL)arg0 withDelay:(BOOL)arg1 cancellationHandler:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateProgressUITitle;
-(void)updateVisibleShareActionsIfNeeded;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif