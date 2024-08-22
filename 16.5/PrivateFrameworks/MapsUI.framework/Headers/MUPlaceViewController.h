// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEVIEWCONTROLLER_H
#define MUPLACEVIEWCONTROLLER_H

@class UIViewController, _MKPlaceViewController, NSArray, CNContact, MUPlaceActionManager, MKETAProvider, CNContactViewController, MKLookAroundContainerView, MKUGCCallToActionViewAppearance, NSUUID, MKPlaceActionEnvironment, GEOAutomobileOptions, GEOCyclingOptions, NSString, _MKPlaceActionButtonController, UILayoutGuide, CLLocation, MKLookAroundView, MKMapItem, MKMapItemIdentifier, UIScrollView, GEOTransitOptions, UIImage, GEOWalkingOptions;
@protocol _MKPlaceViewControllerDelegate, _MKPlaceViewControllerFeedbackDelegate, MKPlaceCardActionControllerDelegate, MUPlaceSectionControllerDelegate, MKTransitDepaturesViewControllerDelegate, MKETAProviderDelegate, _MKPlaceViewControllerFeedbackDelegate, MKETAProviderObserver, MUVisibleItemsProvider, MUPlaceCardAnalyticsProvider, MUContactStoreObserver, MKCollectionCarouselRoutingDelegate, MKPlaceCollectionsDelegate, MUPlaceHeaderButtonsSectionControllerDelegate, MUPlacePictureItemSectionControllerDelegate, MUPlacePhotoSectionControllerDelegate, MUPlacePhotoSectionControllerLookAroundDelegate, MUPersonalGuidesViewProvider, MUBrowseCategorySectionControllerDelegate, MUPlaceDescriptionSectionControllerDelegate, MURatingsAndReviewsSectionControllerDelegate, MUPlaceHeaderSectionControllerDelegate, UIScrollViewDelegate, CNContactViewControllerDelegate, CNContactViewControllerPrivateDelegate, CNContactPickerDelegate, MUShareSheetPresenterDelegate, MUPlaceRibbonSectionControllerDelegate, MUPlaceActionRowMenuProvider, MURelatedPlacesSectionControllerDelegate, MUPlaceCallToActionSectionControllerDelegate, MUPlaceInfoSectionControllerDelegate, MUHeaderButtonMenuActionProvider, MUPlaceUnifiedActionRowSectionControllerDelegate, MUPlaceWebContentSectionControllerDelegate, MUUserInformationProvider, MUExternalActionHandling, MUPlaceEnrichmentSectionControllerDelegate, MUInlineRatingsSectionControllerViewProvider, _MKPlaceCardConforming, MUPlaceCardContentProtocol, _MKPlaceItem, MUPlaceViewControllerMapsAppDelegate, MUPlaceViewControllerDelegate, MUPlaceViewControllerFeedbackDelegate;


#import "MUScrollableStackView.h"
#import "MUShareSheetPresenter.h"
#import "MULoadingOverlayController.h"
#import "MUContactStore.h"
#import "MUTimeExpirableLRUCache.h"
#import "MUPlaceActionRowSectionController.h"
#import "MUAMSResultProvider.h"
#import "MUPlaceCardAnalyticsController.h"
#import "MUPlaceViewControllerConfiguration.h"
#import "MUCuratedGuidesSectionController.h"
#import "MUPlaceHeaderButtonsSectionController.h"
#import "MUPlaceHeaderSectionController.h"
#import "MUImpressionsCalculator.h"
#import "MUPlaceInlineMapSectionController.h"
#import "MUPersonalGuidesSectionController.h"
#import "MUPlacePhotoSectionController.h"
#import "MUPlaceEnrichmentSectionController.h"
#import "MUPlaceInfoSectionController.h"
#import "MUPlaceUnifiedActionRowSectionController.h"

@interface MUPlaceViewController : UIViewController <_MKPlaceViewControllerDelegate, _MKPlaceViewControllerFeedbackDelegate, MKPlaceCardActionControllerDelegate, MUPlaceSectionControllerDelegate, MKTransitDepaturesViewControllerDelegate, MKETAProviderDelegate, _MKPlaceViewControllerFeedbackDelegate, MKETAProviderObserver, MUVisibleItemsProvider, MUPlaceCardAnalyticsProvider, MUContactStoreObserver, MKCollectionCarouselRoutingDelegate, MKPlaceCollectionsDelegate, MUPlaceHeaderButtonsSectionControllerDelegate, MUPlacePictureItemSectionControllerDelegate, MUPlacePhotoSectionControllerDelegate, MUPlacePhotoSectionControllerLookAroundDelegate, MUPersonalGuidesViewProvider, MUBrowseCategorySectionControllerDelegate, MUPlaceDescriptionSectionControllerDelegate, MURatingsAndReviewsSectionControllerDelegate, MUPlaceHeaderSectionControllerDelegate, UIScrollViewDelegate, CNContactViewControllerDelegate, CNContactViewControllerPrivateDelegate, CNContactPickerDelegate, MUShareSheetPresenterDelegate, MUPlaceRibbonSectionControllerDelegate, MUPlaceActionRowMenuProvider, MURelatedPlacesSectionControllerDelegate, MUPlaceCallToActionSectionControllerDelegate, MUPlaceInfoSectionControllerDelegate, MUHeaderButtonMenuActionProvider, MUPlaceUnifiedActionRowSectionControllerDelegate, MUPlaceWebContentSectionControllerDelegate, MUUserInformationProvider, MUExternalActionHandling, MUPlaceEnrichmentSectionControllerDelegate, MUInlineRatingsSectionControllerViewProvider, _MKPlaceCardConforming, MUPlaceCardContentProtocol>

 {
    BOOL _showNewUI;
    _MKPlaceViewController *_legacyPlacecard;
    MUScrollableStackView *_contentStackView;
    NSArray *_sectionControllers;
    id<_MKPlaceItem> *_placeItem;
    CNContact *_contact;
    MUPlaceActionManager *_actionManager;
    MKETAProvider *_etaProvider;
    CGFloat _contentAlpha;
    CGPoint _beginAnalyticsScrollingPoint;
    CNContactViewController *_updatingContactController;
    CNContactViewController *_creatingContactController;
    CNContactViewController *_editingContactController;
    MUShareSheetPresenter *_shareSheetPresenter;
    MULoadingOverlayController *_loadingOverlayController;
    MKLookAroundContainerView *_lookAroundView;
    MUContactStore *_contactStore;
    CNContact *_originalContactCopy;
    MKUGCCallToActionViewAppearance *_submissionStatus;
    NSUInteger _initialAppearanceSignpostID;
    BOOL _active;
    MUTimeExpirableLRUCache *_quickActionTrayArtworkCache;
    MUTimeExpirableLRUCache *_officialAppMediaResultCache;
    NSUUID *_impressionsSessionIdentifier;
    BOOL _needsImpressionsLoggedOnAppearance;
    MKPlaceActionEnvironment *_currentEnvironmentForPresentedViewController;
}


@property (readonly, nonatomic) MUPlaceActionRowSectionController *actionRowSectionController;
@property (readonly, nonatomic) MUAMSResultProvider *amsResultProvider; // ivar: _amsResultProvider
@property (readonly, nonatomic) NSArray *analyticModules;
@property (readonly, nonatomic) MUPlaceCardAnalyticsController *analyticsController; // ivar: _analyticsController
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions; // ivar: _automobileOptions
@property (readonly, nonatomic) MUPlaceViewControllerConfiguration *configuration; // ivar: _configuration
@property (nonatomic) CGFloat contentAlpha;
@property (readonly, nonatomic) MUCuratedGuidesSectionController *curatedGuidesSectionController;
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions; // ivar: _cyclingOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceCaptureRevealEventOnNextBecomeActive; // ivar: _forceCaptureRevealEventOnNextBecomeActive
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _MKPlaceActionButtonController *headerAlternatePrimaryButtonController; // ivar: _headerAlternatePrimaryButtonController
@property (readonly, nonatomic) MUPlaceHeaderButtonsSectionController *headerButtonsSectionController;
@property (retain, nonatomic) _MKPlaceActionButtonController *headerSecondaryButtonController; // ivar: _headerSecondaryButtonController
@property (readonly, nonatomic) CGFloat headerSecondaryNameLabelPadding;
@property (readonly, nonatomic) MUPlaceHeaderSectionController *headerSectionController;
@property (readonly, nonatomic) UILayoutGuide *headerViewTitleLabelToTopLayoutGuide;
@property (readonly, nonatomic) CGFloat heightForContentAboveTitle;
@property (readonly, nonatomic) MUImpressionsCalculator *impressionsCalculator; // ivar: _impressionsCalculator
@property (readonly, nonatomic) MUPlaceInlineMapSectionController *inlineMapSectionController;
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) MKLookAroundView *lookAroundView;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) MKMapItemIdentifier *mapItemIdentifierIntrumentedForReveal; // ivar: _mapItemIdentifierIntrumentedForReveal
@property (weak, nonatomic) NSObject<MUPlaceViewControllerMapsAppDelegate> *mapsAppDelegate; // ivar: _mapsAppDelegate
@property (nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) CNContact *originalContact; // ivar: _originalContact
@property (readonly, nonatomic) MUPersonalGuidesSectionController *personalGuidesSectionController;
@property (readonly, nonatomic) MUPlacePhotoSectionController *photoSectionController;
@property (readonly, nonatomic) MUPlaceEnrichmentSectionController *placeEnrichmentSectionController;
@property (nonatomic) BOOL placeInBookmarks; // ivar: _placeInBookmarks
@property (nonatomic) BOOL placeInCollections; // ivar: _placeInCollections
@property (nonatomic) BOOL placeInShortcuts; // ivar: _placeInShortcuts
@property (readonly, nonatomic) MUPlaceInfoSectionController *placeInfoSectionController;
@property (readonly, nonatomic) NSObject<_MKPlaceItem> *placeItem;
@property (nonatomic) NSUInteger placeNumberOfReportsInReview; // ivar: _placeNumberOfReportsInReview
@property (weak, nonatomic) NSObject<MUPlaceViewControllerDelegate> *placeViewControllerDelegate; // ivar: _placeViewControllerDelegate
@property (copy, nonatomic) id *placeViewFeedbackAppLaunchHandler; // ivar: _placeViewFeedbackAppLaunchHandler
@property (weak, nonatomic) NSObject<MUPlaceViewControllerFeedbackDelegate> *placeViewFeedbackDelegate; // ivar: _placeViewFeedbackDelegate
@property (readonly, nonatomic) NSArray *revealedModules;
@property (nonatomic) BOOL scrollEnabled;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) NSObject<UIScrollViewDelegate> *scrollViewDelegate; // ivar: _scrollViewDelegate
@property (readonly, nonatomic) BOOL shouldBlurChromeHeaderButtons;
@property (readonly, nonatomic) BOOL shouldStubPlacecard;
@property (nonatomic) BOOL showContactActions; // ivar: _showContactActions
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDynamicLayout;
@property (retain, nonatomic) GEOTransitOptions *transitOptions; // ivar: _transitOptions
@property (readonly, nonatomic) MUPlaceUnifiedActionRowSectionController *unifiedActionRowSectionController;
@property (readonly, nonatomic) UIImage *userIcon;
@property (nonatomic) CGFloat verifiedHeaderExpansionProgress; // ivar: _verifiedHeaderExpansionProgress
@property (retain, nonatomic) GEOWalkingOptions *walkingOptions; // ivar: _walkingOptions


+(CGFloat)headerHeightInMinimalMode;
-(BOOL)_canShowWhileLocked;
-(BOOL)_hasSerializedMapItemFile;
-(BOOL)canShowAddPhotosForPlaceCardActionController:(id)arg0 ;
-(BOOL)isLoading;
-(BOOL)shouldMoveLookAroundStorefrontViewForPlacePhotoSectionController:(id)arg0 ;
-(BOOL)transitDeparturesViewController:(id)arg0 canSelectDepartureSequence:(id)arg1 transitMapItem:(id)arg2 transitLine:(id)arg3 fromCell:(id)arg4 ;
-(CGFloat)currentHeight;
-(CGFloat)placeHeaderSectionControllerRequestsTrailingConstant:(id)arg0 ;
-(id)_actionRowSectionControllerClientOverrideWithAvailability:(id)arg0 buttonModuleConfiguration:(id)arg1 ;
-(id)_actionRowSectionControllerWithButtonModuleConfiguration:(id)arg0 ;
-(id)_amenitiesSectionControllerForAvailability:(id)arg0 moduleConfiguration:(id)arg1 ;
-(id)_annotatedItemSectionControllerForAvailability:(id)arg0 ;
-(id)_browseCategorySectionControllerForAvailability:(id)arg0 ;
-(id)_buildBrandCardSectionsWithAvailability:(id)arg0 ;
-(id)_buildForLayoutWithAvailability:(id)arg0 ;
-(id)_buildShortCardSections;
-(id)_buildStaticSectionsWithAvailability:(id)arg0 ;
-(id)_callToActionSuggestionSectionControllerForAvailability:(id)arg0 ;
-(id)_contactForEditOperations;
-(id)_curatedGuidesSectionControllerForAvailability:(id)arg0 ;
-(id)_encyclopedicSectionControllerForAvailability:(id)arg0 ;
-(id)_firstSectionControllerOfClass:(Class)arg0 ;
-(id)_headerButtonsSectionControllerForModuleConfiguration:(id)arg0 ;
-(id)_headerSectionControllerWithAvailability:(id)arg0 ;
-(id)_hoursSectionControllerForAvailability:(id)arg0 ;
-(id)_inlineMapSectionControllerForAvailability:(id)arg0 ;
-(id)_messageHoursSectionControllerForAvailability:(id)arg0 ;
-(id)_officialAppSectionControllerForAvailability:(id)arg0 ;
-(id)_passiveCallToActionSectionControllerForAvailability:(id)arg0 ;
-(id)_photoSectionControllerForAvailability:(id)arg0 ;
-(id)_placeDescriptionSectionControllerForAvailability:(id)arg0 ;
-(id)_placeEnrichmentSectionControllerForAvailability:(id)arg0 ;
-(id)_placeFooterSectionController;
-(id)_placeInfoSectionControllerForAvailability:(id)arg0 moduleConfiguration:(id)arg1 ;
-(id)_placeRibbonSectionControllerForAvailability:(id)arg0 placeRibbonConfiguration:(id)arg1 ;
-(id)_ratingsAndReviewsSectionControllerForAvailability:(id)arg0 ;
-(id)_relatedPlaceConfigurationForRelatedPlaceList:(id)arg0 moduleConfiguration:(id)arg1 ;
-(id)_relatedPlaceSectionControllerForAvailability:(id)arg0 config:(id)arg1 ;
-(id)_relatedPlaceSectionControllerForAvailability:(id)arg0 relatedPlaceList:(id)arg1 ;
-(id)_sectionControllersForClass:(Class)arg0 ;
-(id)_traits;
-(id)_transitDeparturesSectionControllerForAvailability:(id)arg0 ;
-(id)_unifiedActionRowSectionControllerWithButtonModuleConfiguration:(id)arg0 ;
-(id)_venueInfoSectionControllerForAvailability:(id)arg0 ;
-(id)_webContentSectionControllerForConfiguration:(id)arg0 ;
-(id)collectionViews;
-(id)contact;
-(id)contactStore;
-(id)contactsNavigationController;
-(id)createHeaderButtonsMenuWithPresentationOptions:(id)arg0 ;
-(id)createHeaderButtonsMenuWithPromotedSystemActionTypes:(id)arg0 excludedSystemActionTypes:(id)arg1 presentationOptions:(id)arg2 ;
-(id)createHeaderMenuSortOrderWithPromotedActionTypes:(id)arg0 excludedActionTypes:(id)arg1 ;
-(id)createMenuActions;
-(id)createShareSheetFooterActions;
-(id)draggableContent;
-(id)draggableHeaderView;
-(id)footerActivitiesForShareSheetPresenter:(id)arg0 ;
-(id)generateAvailableActionForAnalytics;
-(id)generateUnactionableUIElementsForAnalytics;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithMapItem:(id)arg0 ;
-(id)inlineRatingsSectionControllerRequestsContentViewController:(id)arg0 ;
-(id)lookAroundContainerForPlacePhotoSectionController:(id)arg0 ;
-(id)menuElementForActionItem:(id)arg0 ;
-(id)placeSectionControllerRequestsRootView:(id)arg0 ;
-(id)shareSheetPresenterRequestsOverridenActivityViewController:(id)arg0 ;
-(id)suggestionViewForCallToActionSectionController:(id)arg0 ;
-(id)transitDeparturesViewControllerTraits:(id)arg0 ;
-(id)visibleImpressionElements;
-(int)currentMapViewTargetForAnalytics;
-(int)currentUITargetForAnalytics;
-(int)getPlaceCardTypeForAnalytics;
-(int)mapTypeForETAProvider:(id)arg0 ;
-(struct CGSize )_systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(struct CGSize )preferredContentSize;
-(void)ETAProviderLocationUpdated:(id)arg0 ;
-(void)_activateSections;
-(void)_applyCustomSpacings;
-(void)_authorized_contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)_buildSections;
-(void)_calculateShowingContactActionsWithCompletion:(id)arg0 ;
-(void)_captureRevealEventIfNeeded;
-(void)_commonInitWithConfiguration:(id)arg0 ;
-(void)_deactivateSections;
-(void)_didResolveAttribution:(id)arg0 ;
-(void)_dismissModalViewController;
-(void)_handleRoutingToPlaceWithMapItem:(id)arg0 ;
-(void)_invokeShareActionWithPresentationOptions:(id)arg0 analyticsModuleMetadata:(id)arg1 ;
-(void)_launchAttribution:(id)arg0 withMapItem:(id)arg1 ;
-(void)_launchAttributionURLs:(id)arg0 withAttribution:(id)arg1 mapItem:(id)arg2 completionHandler:(id)arg3 ;
-(void)_openWebURL:(id)arg0 ;
// -(void)_performWithNewUIBlock:(id)arg0 oldUIBlock:(unk)arg1  ;
-(void)_placeSectionController:(id)arg0 didSelectPrimaryType:(NSUInteger)arg1 withPresentationOptions:(id)arg2 ;
-(void)_presentAddNewContactPickerForContact:(id)arg0 withEnvironment:(id)arg1 ;
-(void)_presentModalViewController:(id)arg0 withEnvironment:(id)arg1 ;
-(void)_presentStoreProductScreenWithMapItem:(id)arg0 attribution:(id)arg1 bundleIdentifier:(id)arg2 attributionURLs:(id)arg3 presentingViewController:(id)arg4 ;
-(void)_setupViews;
-(void)_showEditSheet:(id)arg0 ;
-(void)_showShareSheetNoDeviceLockCheckWithEnvironment:(id)arg0 ;
-(void)_showShareSheetWithEnvironment:(id)arg0 ;
-(void)_tearDownContactPickersForCompletionWithViewController:(id)arg0 ;
-(void)_unauthorized_contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)_updateContentAlpha;
-(void)_updateSections;
-(void)_updateSectionsForActionRowInfoChange;
-(void)_updateSectionsForAttributionChange;
-(void)_updateSectionsForSubmissionStatusChange;
-(void)addLoadingView;
-(void)becomeActive;
-(void)browseCategorySectionController:(id)arg0 didTapOnSearchCategory:(id)arg1 ;
-(void)collectionIdentifierSelected:(id)arg0 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)contactStoreDidChange:(id)arg0 ;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)contactViewController:(id)arg0 didDeleteContact:(id)arg1 ;
-(void)contentAboveTitleScrollPositionChanged:(CGFloat)arg0 ;
-(void)dealloc;
-(void)handleAppClip:(id)arg0 options:(id)arg1 ;
-(void)handleMapsExtension:(id)arg0 usingAppStoreApp:(id)arg1 options:(id)arg2 ;
-(void)handleQuickLink:(id)arg0 options:(id)arg1 ;
-(void)hideContentIfLoading;
-(void)hideTitle:(BOOL)arg0 ;
-(void)performAction:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)performShareActionWithPresentationOptions:(id)arg0 ;
-(void)pictureItemSectionController:(id)arg0 requestsSceneActivationWithPhotoGallery:(id)arg1 ;
-(void)placeActionManager:(id)arg0 didSelectAddToContactsUsingEnvironment:(id)arg1 ;
-(void)placeActionManager:(id)arg0 didSelectAddToExistingContactWithEnvironment:(id)arg1 ;
-(void)placeActionManager:(id)arg0 didSelectAddToGuidesWithEnvironment:(id)arg1 ;
-(void)placeActionManager:(id)arg0 didSelectDirectionsWithEnvironment:(id)arg1 ;
-(void)placeActionManager:(id)arg0 didSelectShareWithEnvironment:(id)arg1 ;
-(void)placeCardActionController:(id)arg0 openURL:(id)arg1 fromView:(id)arg2 ;
-(void)placeCardActionControllerDidRequestCopy:(id)arg0 ;
-(void)placeCardActionControllerDidSelectAddPhoto:(id)arg0 presentingViewController:(id)arg1 progressObserver:(id)arg2 sourceView:(id)arg3 ;
-(void)placeCardActionControllerDidSelectAddToMapsHome:(id)arg0 ;
-(void)placeCardActionControllerDidSelectChangeAddress:(id)arg0 ;
-(void)placeCardActionControllerDidSelectOpenInSkyline:(id)arg0 ;
-(void)placeCardActionControllerDidSelectPlaceEnrichementReportAProblem;
-(void)placeCardActionControllerDidSelectRefineLocation:(id)arg0 ;
-(void)placeCardActionControllerDidSelectRemoveFromMapsHome:(id)arg0 ;
-(void)placeCardActionControllerDidSelectRemoveMarker:(id)arg0 ;
-(void)placeCardActionControllerDidSelectReportAProblem:(id)arg0 fromView:(id)arg1 isQuickAction:(BOOL)arg2 ;
-(void)placeCardActionControllerDidSelectReportAProblemAddNewPlace:(id)arg0 isQuickAction:(BOOL)arg1 ;
-(void)placeCardActionControllerDidSelectReportAProblemViewReport:(id)arg0 ;
-(void)placeCardActionControllerDidSelectSimulateLocation:(id)arg0 ;
-(void)placeCardActionControllerDidSelectionOpenBrandCard:(id)arg0 ;
-(void)placeCardActionControllerDidSelectionOpenInPinpoint:(id)arg0 ;
-(void)placeCardWillClose;
-(void)placeCardWillCloseFromClientType:(NSUInteger)arg0 ;
-(void)placeDescriptionSectionControllerDidTapAttribution:(id)arg0 ;
-(void)placeEnrichmentSectionControllerDidStopLoading:(id)arg0 ;
-(void)placeHeaderButtonsSectionController:(id)arg0 didSelectPrimaryType:(NSUInteger)arg1 withPresentationOptions:(id)arg2 ;
-(void)placeHeaderSectionController:(id)arg0 didSelectShareWithPresentationOptions:(id)arg1 ;
-(void)placeHeaderSectionController:(id)arg0 didTapMapItem:(id)arg1 ;
-(void)placeInfoSectionController:(id)arg0 didSelectAddMissingDataOfType:(NSInteger)arg1 ;
-(void)placeInfoSectionController:(id)arg0 didSelectEditPlaceDetailsOfType:(NSInteger)arg1 ;
-(void)placeInfoSectionController:(id)arg0 didTapAttribution:(id)arg1 ;
-(void)placeInfoSectionController:(id)arg0 selectedDirectionsWithMapItem:(id)arg1 options:(id)arg2 ;
-(void)placeInfoSectionController:(id)arg0 selectedViewPlaceWithMapItem:(id)arg1 options:(id)arg2 ;
-(void)placePhotoSectionController:(id)arg0 didSelectPhotoCategoryAtIndex:(NSUInteger)arg1 ;
-(void)placePhotoSectionController:(id)arg0 didSelectPhotoToReport:(id)arg1 withPhotoGalleryViewController:(id)arg2 ;
-(void)placePhotoSectionController:(id)arg0 didSelectViewPhoto:(id)arg1 withID:(id)arg2 presentingViewController:(id)arg3 ;
-(void)placePhotoSectionController:(id)arg0 enterLookAroundForMapItem:(id)arg1 lookAroundView:(id)arg2 ;
-(void)placePhotoSectionController:(id)arg0 requestsAddPhotosToMapsWithEntryPoint:(NSInteger)arg1 options:(id)arg2 ;
-(void)placePhotoSectionController:(id)arg0 requestsSceneActivationForPhotoGalleryViewController:(id)arg1 ;
-(void)placePhotoSectionController:(id)arg0 requestsToOpenPhotoAttribution:(id)arg1 presentationOptions:(id)arg2 ;
-(void)placePhotoSectionControllerDidCloseFullscreenPhotos:(id)arg0 ;
-(void)placePhotoSectionControllerDidOpenFullscreenPhotos:(id)arg0 ;
-(void)placePhotoSectionControllerRequestsToOpenThumbnailGallery:(id)arg0 withStartingIndex:(NSUInteger)arg1 ;
-(void)placeSectionControllerDidUpdateContent:(id)arg0 ;
-(void)placeSectionControllerRequestsLayoutChange:(id)arg0 ;
-(void)placeViewController:(id)arg0 shouldLogFeedbackOfType:(int)arg1 ;
-(void)presentAddPhotosWithPresentationOptions:(id)arg0 entryPoint:(NSInteger)arg1 originTarget:(id)arg2 ;
-(void)presentPOIEnrichmentWithPresentationOptions:(id)arg0 originTarget:(id)arg1 ;
-(void)ratingsAndReviewsSectionController:(id)arg0 didSelectPlaceCollection:(id)arg1 ;
-(void)ratingsAndReviewsSectionController:(id)arg0 didSelectViewReview:(id)arg1 ;
-(void)ratingsAndReviewsSectionControllerDidSelectViewAllReviews:(id)arg0 ;
-(void)relatedPlaceSectionController:(id)arg0 itemSelected:(id)arg1 ;
-(void)relatedPlaceSectionController:(id)arg0 showSeeAllWithTitle:(id)arg1 relatedMapItems:(id)arg2 originalMapItem:(id)arg3 ;
-(void)removeLoadingViewAnimated:(BOOL)arg0 ;
-(void)requestHostToLogFeedbackTypeIfNeeded:(int)arg0 ;
-(void)resetAnalyticsState;
-(void)resignActive;
-(void)ribbonSectionControllerDidTapAddRatings:(id)arg0 initialRatingState:(NSInteger)arg1 withPresentationOptions:(id)arg2 ;
-(void)ribbonSectionControllerDidTapHours:(id)arg0 ;
-(void)routeToCuratedCollection:(id)arg0 ;
-(void)routeToGuidesHomeFromExploreGuides:(id)arg0 ;
-(void)scrollToTopAnimated:(BOOL)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)sectionController:(id)arg0 didSelectPrimaryButtonType:(NSUInteger)arg1 ;
-(void)setContentVisibility:(NSInteger)arg0 ;
-(void)shareSheetPresenter:(id)arg0 postCompletedActivityOfType:(id)arg1 completed:(BOOL)arg2 ;
-(void)shareSheetPresenter:(id)arg0 preCompletedActivityOfType:(id)arg1 completed:(BOOL)arg2 ;
-(void)showAllCollections:(id)arg0 usingTitle:(id)arg1 usingCollectionIds:(id)arg2 ;
-(void)showContentIfLoaded;
-(void)transitDeparturesViewController:(id)arg0 didSelectAttribution:(id)arg1 ;
-(void)transitDeparturesViewController:(id)arg0 didSelectConnectionInformation:(id)arg1 ;
-(void)transitDeparturesViewController:(id)arg0 didSelectDepartureSequence:(id)arg1 transitMapItem:(id)arg2 transitLine:(id)arg3 fromCell:(id)arg4 ;
-(void)transitDeparturesViewController:(id)arg0 didSelectTransitLine:(id)arg1 fromCell:(id)arg2 ;
-(void)transitDeparturesViewController:(id)arg0 showIncidents:(id)arg1 ;
-(void)updateActionRowView;
-(void)updateCollectionViewsAnimated:(BOOL)arg0 ;
-(void)updateCuratedCollectionsView;
-(void)updateHeaderTitle;
-(void)updatePlaceEnrichment;
-(void)updatePlaceInfo;
-(void)updateSuggestionView;
-(void)updateUserSubmissionWithPhotoURL:(id)arg0 photoID:(id)arg1 numberOfPhotos:(NSInteger)arg2 ;
-(void)updateViewsWithSubmissionStatus:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)webContentSectionControllerDidStopLoading:(id)arg0 ;


@end


#endif