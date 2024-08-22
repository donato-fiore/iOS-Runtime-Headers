// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACEVIEWCONTROLLER_H
#define MUPLACEVIEWCONTROLLER_H

@class UIViewController, _MKPlaceViewController, NSArray, CNContact, MUPlaceActionManager, MKETAProvider, geo_isolater, _MXExtensionManager, CNContactViewController, MKMuninContainerView, CNContactStore, MKUGCCallToActionViewAppearance, GEOAutomobileOptions, GEOCyclingOptions, NSString, _MKPlaceActionButtonController, CLLocation, MKMapItem, MKMuninView, UIScrollView, GEOTransitOptions;
@protocol _MKPlaceViewControllerDelegate, _MKPlaceViewControllerFeedbackDelegate, MKPlaceCardActionControllerDelegate, MUPlaceSectionControllerDelegate, MKTransitDepaturesViewControllerDelegate, MUPlaceWebContentSectionControllerDelegate, MKETAProviderDelegate, MUInfoCardAnalyticsDelegate, _MKPlaceViewControllerFeedbackDelegate, MKETAProviderObserver, MKCollectionCarouselRoutingDelegate, MKPlaceCollectionsDelegate, MUPlaceHeaderButtonsSectionControllerDelegate, MUPlacePictureItemSectionControllerDelegate, MUPlacePhotoSectionControllerDelegate, MUPersonalGuidesViewProvider, MUBrowseCategorySectionControllerDelegate, MUPlaceDescriptionSectionControllerDelegate, MURatingsAndReviewsSectionControllerDelegate, MUPlaceHeaderSectionControllerDelegate, UIScrollViewDelegate, CNContactViewControllerDelegate, CNContactViewControllerPrivateDelegate, CNContactPickerDelegate, MUShareSheetPresenterDelegate, MUPlaceRibbonSectionControllerDelegate, MUPlaceActionRowMenuProvider, MURelatedPlacesSectionControllerDelegate, MUPlaceCallToActionSectionControllerDelegate, MUPlaceInfoSectionControllerDelegate, MUHeaderButtonMenuActionProvider, MUPlaceQuickLinksSectionControllerDelegate, MUPlaceQuickLinkMenuElementCoordinatorDataSource, _MKPlaceCardConforming, _MKInfoCardAnalyticsDelegate, _MKPlaceItem, OS_dispatch_queue, MUPlaceViewControllerMapsAppDelegate, MUPlaceViewControllerDelegate, MUPlaceViewControllerFeedbackDelegate;


#import "MUScrollableStackView.h"
#import "MUShareSheetPresenter.h"
#import "MULoadingOverlayController.h"
#import "MUPlaceQuickLinkMenuElementCoordinator.h"
#import "MUPlaceActionRowSectionController.h"
#import "MUPlaceViewControllerConfiguration.h"
#import "MUCuratedGuidesSectionController.h"
#import "MUPlaceHeaderButtonsSectionController.h"
#import "MUPlaceHeaderSectionController.h"
#import "MUPlaceInlineMapSectionController.h"
#import "MUPersonalGuidesSectionController.h"

@interface MUPlaceViewController : UIViewController <_MKPlaceViewControllerDelegate, _MKPlaceViewControllerFeedbackDelegate, MKPlaceCardActionControllerDelegate, MUPlaceSectionControllerDelegate, MKTransitDepaturesViewControllerDelegate, MUPlaceWebContentSectionControllerDelegate, MKETAProviderDelegate, MUInfoCardAnalyticsDelegate, _MKPlaceViewControllerFeedbackDelegate, MKETAProviderObserver, MKCollectionCarouselRoutingDelegate, MKPlaceCollectionsDelegate, MUPlaceHeaderButtonsSectionControllerDelegate, MUPlacePictureItemSectionControllerDelegate, MUPlacePhotoSectionControllerDelegate, MUPersonalGuidesViewProvider, MUBrowseCategorySectionControllerDelegate, MUPlaceDescriptionSectionControllerDelegate, MURatingsAndReviewsSectionControllerDelegate, MUPlaceHeaderSectionControllerDelegate, UIScrollViewDelegate, CNContactViewControllerDelegate, CNContactViewControllerPrivateDelegate, CNContactPickerDelegate, MUShareSheetPresenterDelegate, MUPlaceRibbonSectionControllerDelegate, MUPlaceActionRowMenuProvider, MURelatedPlacesSectionControllerDelegate, MUPlaceCallToActionSectionControllerDelegate, MUPlaceInfoSectionControllerDelegate, MUHeaderButtonMenuActionProvider, MUPlaceQuickLinksSectionControllerDelegate, MUPlaceQuickLinkMenuElementCoordinatorDataSource, _MKPlaceCardConforming, _MKInfoCardAnalyticsDelegate>

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
    BOOL _extensionDiscoveryInProgress;
    geo_isolater *_extensionDiscoveryInProgressIsolater;
    NSObject<OS_dispatch_queue> *_extensionDiscoveryQueue;
    _MXExtensionManager *_extensionManager;
    CNContactViewController *_updatingContactController;
    CNContactViewController *_creatingContactController;
    CNContactViewController *_editingContactController;
    MUShareSheetPresenter *_shareSheetPresenter;
    MULoadingOverlayController *_loadingOverlayController;
    MKMuninContainerView *_muninView;
    CNContactStore *_contactStore;
    CNContact *_originalContactCopy;
    MKUGCCallToActionViewAppearance *_submissionStatus;
    MKUGCCallToActionViewAppearance *_proactiveStatus;
    NSUInteger _initialAppearanceSignpostID;
    BOOL _active;
    MUPlaceQuickLinkMenuElementCoordinator *_quickLinkMenuElementCoordinator;
}


@property (readonly, nonatomic) MUPlaceActionRowSectionController *actionRowSectionController;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue; // ivar: _analyticsQueue
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions; // ivar: _automobileOptions
@property (readonly, nonatomic) MUPlaceViewControllerConfiguration *configuration; // ivar: _configuration
@property (nonatomic) CGFloat contentAlpha;
@property (readonly, nonatomic) MUCuratedGuidesSectionController *curatedGuidesSectionController;
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions; // ivar: _cyclingOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _MKPlaceActionButtonController *headerAlternatePrimaryButtonController; // ivar: _headerAlternatePrimaryButtonController
@property (readonly, nonatomic) MUPlaceHeaderButtonsSectionController *headerButtonsSectionController;
@property (retain, nonatomic) _MKPlaceActionButtonController *headerSecondaryButtonController; // ivar: _headerSecondaryButtonController
@property (readonly, nonatomic) CGFloat headerSecondaryNameLabelPadding;
@property (readonly, nonatomic) MUPlaceHeaderSectionController *headerSectionController;
@property (readonly, nonatomic) MUPlaceInlineMapSectionController *inlineMapSectionController;
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (retain, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) NSObject<MUPlaceViewControllerMapsAppDelegate> *mapsAppDelegate; // ivar: _mapsAppDelegate
@property (readonly, nonatomic) MKMuninView *muninView;
@property (nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) CNContact *originalContact; // ivar: _originalContact
@property (readonly, nonatomic) MUPersonalGuidesSectionController *personalGuidesSectionController;
@property (nonatomic) BOOL placeInBookmarks; // ivar: _placeInBookmarks
@property (nonatomic) BOOL placeInCollections; // ivar: _placeInCollections
@property (nonatomic) BOOL placeInShortcuts; // ivar: _placeInShortcuts
@property (weak, nonatomic) NSObject<MUPlaceViewControllerDelegate> *placeViewControllerDelegate; // ivar: _placeViewControllerDelegate
@property (copy, nonatomic) id *placeViewFeedbackAppLaunchHandler; // ivar: _placeViewFeedbackAppLaunchHandler
@property (weak, nonatomic) NSObject<MUPlaceViewControllerFeedbackDelegate> *placeViewFeedbackDelegate; // ivar: _placeViewFeedbackDelegate
@property (nonatomic) BOOL scrollEnabled;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) NSObject<UIScrollViewDelegate> *scrollViewDelegate; // ivar: _scrollViewDelegate
@property (readonly, nonatomic) BOOL shouldStubPlacecard;
@property (nonatomic) BOOL showContactActions; // ivar: _showContactActions
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDynamicLayout;
@property (retain, nonatomic) GEOTransitOptions *transitOptions; // ivar: _transitOptions


+(CGFloat)headerHeightInMinimalMode;
-(BOOL)_canShowExtensionReservationButton;
-(BOOL)_canShowWhileLocked;
-(BOOL)_contactStoredMatchingMapItem:(id)arg0 ;
-(BOOL)_hasContactAccess;
-(BOOL)_hasReservationPlaceCardExtension;
-(BOOL)_hasSerializedMapItemFile;
-(BOOL)_isExtensionDiscoveryInProgress;
-(BOOL)_isReservationProviderAppInstalled;
-(BOOL)_shouldShowContactActions;
-(BOOL)_shouldShowSiriReservationController;
-(BOOL)isGuardianRestrictedCNContainer;
-(BOOL)isLoading;
-(BOOL)quickLinkMenuElementCoordinatorShouldLoadQuickLinks:(id)arg0 ;
-(BOOL)transitDeparturesViewController:(id)arg0 canSelectDepartureSequence:(id)arg1 transitMapItem:(id)arg2 transitLine:(id)arg3 fromCell:(id)arg4 ;
-(CGFloat)currentHeight;
-(CGFloat)placeHeaderSectionControllerRequestsTrailingConstant:(id)arg0 ;
-(id)_actionRowSectionControllerClientOverrideWithAvailability:(id)arg0 ;
-(id)_amenitiesSectionControllerForAvailability:(id)arg0 moduleConfiguration:(id)arg1 ;
-(id)_annotatedItemSectionControllerForAvailability:(id)arg0 ;
-(id)_browseCategorySectionControllerForAvailability:(id)arg0 ;
-(id)_buildBrandCardSections;
-(id)_buildForLayout;
-(id)_buildShortCardSections;
-(id)_buildStaticSections;
-(id)_contactForEditOperations;
-(id)_contactStore;
-(id)_createTableBookingButtonController;
-(id)_curatedGuidesSectionControllerForAvailability:(id)arg0 ;
-(id)_encyclopedicSectionControllerForAvailability:(id)arg0 ;
-(id)_firstSectionControllerOfClass:(Class)arg0 ;
-(id)_headerButtonsSectionControllerForModuleConfiguration:(id)arg0 ;
-(id)_hoursSectionControllerForAvailability:(id)arg0 ;
-(id)_inlineMapSectionControllerForAvailability:(id)arg0 ;
-(id)_messageHoursSectionControllerForAvailability:(id)arg0 ;
-(id)_officialAppSectionControllerForAvailability:(id)arg0 ;
-(id)_passiveCallToActionSectionControllerForAvailability:(id)arg0 ;
-(id)_photoSectionControllerForAvailability:(id)arg0 ;
-(id)_placeAttributionSectionControllerForAvailability:(id)arg0 ;
-(id)_placeDescriptionSectionControllerForAvailability:(id)arg0 ;
-(id)_placeFooterSectionController;
-(id)_placeInfoSectionControllerForAvailability:(id)arg0 moduleConfiguration:(id)arg1 ;
-(id)_placeRibbonSectionControllerForAvailability:(id)arg0 placeRibbonConfiguration:(id)arg1 ;
-(id)_proactivePhotoCallToActionSectionControllerForAvailability:(id)arg0 ;
-(id)_quickLinksSectionController;
-(id)_ratingsAndReviewsSectionControllerForAvailability:(id)arg0 ;
-(id)_refetchedContactForCCTV:(id)arg0 error:(*id)arg1 ;
-(id)_relatedPlaceConfigurationForRelatedPlaceList:(id)arg0 moduleConfiguration:(id)arg1 ;
-(id)_relatedPlaceSectionControllerForAvailability:(id)arg0 config:(id)arg1 ;
-(id)_relatedPlaceSectionControllerForAvailability:(id)arg0 relatedPlaceList:(id)arg1 ;
-(id)_removeMapsDataFromContact:(id)arg0 ;
-(id)_sectionControllersForClass:(Class)arg0 ;
-(id)_traits;
-(id)_transitDeparturesSectionControllerForAvailability:(id)arg0 ;
-(id)_venueInfoSectionControllerForAvailability:(id)arg0 ;
-(id)_webContentSectionControllerForConfiguration:(id)arg0 ;
-(id)collectionViews;
-(id)contact;
-(id)contactsNavigationController;
-(id)createHeaderButtonsMenuWithPresentationOptions:(id)arg0 ;
-(id)createMenuActions;
-(id)draggableContent;
-(id)draggableHeaderView;
-(id)generateAvailableActionForAnalytics;
-(id)generateUnactionableUIElementsForAnalytics;
-(id)headerMenuSortOrderByActionType;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithMapItem:(id)arg0 ;
-(id)menuElementForActionItem:(id)arg0 ;
-(id)muninContainerForPlacePhotoSectionController:(id)arg0 ;
-(id)placeItem;
-(id)shareSheetPresenterRequestsOverridenActivityViewController:(id)arg0 ;
-(id)transitDeparturesViewControllerTraits:(id)arg0 ;
-(int)currentMapViewTargetForAnalytics;
-(int)currentUITargetForAnalytics;
-(int)getPlaceCardTypeForAnalytics;
-(int)mapTypeForETAProvider:(id)arg0 ;
-(struct CGSize )_systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(struct CGSize )preferredContentSize;
-(void)ETAProviderLocationUpdated:(id)arg0 ;
-(void)_activateSections;
-(void)_buildSections;
-(void)_captureRevealEvent;
-(void)_commonInitWithConfiguration:(id)arg0 ;
-(void)_createAppClipButtonControllerAppClipLink:(id)arg0 completion:(id)arg1 ;
-(void)_createAppClipButtonControllerWithCompletion:(id)arg0 ;
-(void)_createSecondaryAppClipButtonControllerWithCompletion:(id)arg0 ;
-(void)_deactivateSections;
-(void)_didResolveAttribution:(id)arg0 ;
-(void)_discoverRestaurantReservationExtensionWithCompletion:(id)arg0 ;
-(void)_dismissModalViewController;
-(void)_getCanShowAppClipButtonWithCompletion:(id)arg0 ;
-(void)_getCanShowSecondaryAppClipButtonWithCompletion:(id)arg0 ;
-(void)_handleRoutingToPlaceWithMapItem:(id)arg0 ;
-(void)_infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 actionURL:(id)arg3 photoID:(id)arg4 feedbackDelegateSelector:(int)arg5 modules:(id)arg6 ;
-(void)_launchAttributionURLs:(id)arg0 withAttribution:(id)arg1 mapItem:(id)arg2 completionHandler:(id)arg3 ;
// -(void)_performWithNewUIBlock:(id)arg0 oldUIBlock:(unk)arg1  ;
-(void)_presentModalViewController:(id)arg0 ;
-(void)_presentStoreProductScreenWithMapItem:(id)arg0 attribution:(id)arg1 bundleIdentifier:(id)arg2 presentingViewController:(id)arg3 ;
-(void)_setExtensionDiscoveryInProgress:(BOOL)arg0 ;
-(void)_setPlaceItem:(id)arg0 updateOriginalContact:(BOOL)arg1 ;
-(void)_setupViews;
-(void)_showEditSheet:(id)arg0 ;
-(void)_showShareSheet:(id)arg0 ;
-(void)_showShareSheetNoDeviceLockCheckWithView:(id)arg0 ;
-(void)_updateContentAlpha;
-(void)_updateSections;
-(void)_updateSectionsForActionRowInfoChange;
-(void)_updateSectionsForAttributionChange;
-(void)_updateSectionsForSubmissionStatusChange;
-(void)_updateTheme;
-(void)_updateThemeView:(id)arg0 ;
-(void)_updateThemeViewController:(id)arg0 ;
-(void)_updateViewControllerStatesForOffline;
-(void)addLoadingView;
-(void)airplaneModeChanged;
-(void)becomeActive;
-(void)browseCategorySectionController:(id)arg0 didTapOnSearchCategory:(id)arg1 ;
-(void)collectionIdentifierSelected:(id)arg0 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)contactViewController:(id)arg0 didDeleteContact:(id)arg1 ;
-(void)dealloc;
-(void)fetchQuickLinksForMenuElementCoordinator:(id)arg0 completion:(id)arg1 ;
-(void)hideContentIfLoading;
-(void)hideTitle:(BOOL)arg0 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 eventValue:(id)arg1 feedbackDelegateSelector:(int)arg2 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 actionURL:(id)arg3 photoID:(id)arg4 moduleMetadata:(id)arg5 feedbackDelegateSelector:(int)arg6 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 moduleMetadata:(id)arg3 feedbackDelegateSelector:(int)arg4 ;
-(void)infoCardTransitAnalyticsDidSelectionAction:(int)arg0 resultIndex:(NSInteger)arg1 targetID:(NSUInteger)arg2 transitSystem:(id)arg3 transitDepartureSequence:(id)arg4 transitCardCategory:(int)arg5 transitIncident:(id)arg6 feedbackDelegateSelector:(int)arg7 ;
-(void)networkReachableChanged:(id)arg0 ;
-(void)performAction:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)pictureItemSectionController:(id)arg0 requestsSceneActivationWithPhotoGallery:(id)arg1 ;
-(void)placeActionManager:(id)arg0 didSelectShareFromView:(id)arg1 ;
-(void)placeCardActionControllerDidRequestCopy:(id)arg0 ;
-(void)placeCardActionControllerDidSelectAddToCollection:(id)arg0 ;
-(void)placeCardActionControllerDidSelectAddToContacts:(id)arg0 fromView:(id)arg1 ;
-(void)placeCardActionControllerDidSelectAddToExistingContact:(id)arg0 fromView:(id)arg1 ;
-(void)placeCardActionControllerDidSelectAddToMapsHome:(id)arg0 ;
-(void)placeCardActionControllerDidSelectChangeAddress:(id)arg0 ;
-(void)placeCardActionControllerDidSelectDirections:(id)arg0 ;
-(void)placeCardActionControllerDidSelectOpenInSkyline:(id)arg0 ;
-(void)placeCardActionControllerDidSelectRefineLocation:(id)arg0 ;
-(void)placeCardActionControllerDidSelectRemoveFromMapsHome:(id)arg0 ;
-(void)placeCardActionControllerDidSelectRemoveMarker:(id)arg0 ;
-(void)placeCardActionControllerDidSelectReportAProblem:(id)arg0 fromView:(id)arg1 isQuickAction:(BOOL)arg2 ;
-(void)placeCardActionControllerDidSelectReportAProblemAddNewPlace:(id)arg0 isQuickAction:(BOOL)arg1 ;
-(void)placeCardActionControllerDidSelectSimulateLocation:(id)arg0 ;
-(void)placeCardActionControllerDidSelectionOpenBrandCard:(id)arg0 ;
-(void)placeCardActionControllerDidSelectionOpenInPinpoint:(id)arg0 ;
-(void)placeCardWillClose;
-(void)placeCardWillCloseFromClientType:(NSUInteger)arg0 ;
-(void)placeDescriptionSectionControllerDidTapAttribution:(id)arg0 ;
-(void)placeHeaderButtonsSectionController:(id)arg0 didSelectPrimaryType:(NSUInteger)arg1 withPresentationOptions:(id)arg2 ;
-(void)placeHeaderSectionController:(id)arg0 didTapMapItem:(id)arg1 ;
-(void)placeInfoSectionController:(id)arg0 selectedDirectionsWithMapItem:(id)arg1 options:(id)arg2 ;
-(void)placeInfoSectionController:(id)arg0 selectedViewPlaceWithMapItem:(id)arg1 options:(id)arg2 ;
-(void)placePhotoSectionController:(id)arg0 didSelectPhotoCategoryAtIndex:(NSUInteger)arg1 ;
-(void)placePhotoSectionController:(id)arg0 didSelectPhotoToReport:(id)arg1 withPhotoGalleryViewController:(id)arg2 ;
-(void)placePhotoSectionController:(id)arg0 didSelectViewPhoto:(id)arg1 withID:(id)arg2 presentingViewController:(id)arg3 ;
-(void)placePhotoSectionController:(id)arg0 enterMuninForMapItem:(id)arg1 muninView:(id)arg2 ;
-(void)placePhotoSectionController:(id)arg0 requestsAddPhotosToMapsWithOptions:(id)arg1 ;
-(void)placePhotoSectionController:(id)arg0 requestsSceneActivationForPhotoGalleryViewController:(id)arg1 ;
-(void)placePhotoSectionController:(id)arg0 requestsToOpenPhotoAttribution:(id)arg1 presentationOptions:(id)arg2 ;
-(void)placePhotoSectionControllerDidCloseFullscreenPhotos:(id)arg0 ;
-(void)placePhotoSectionControllerDidOpenFullscreenPhotos:(id)arg0 ;
-(void)placePhotoSectionControllerRequestsToOpenThumbnailGallery:(id)arg0 withStartingIndex:(NSUInteger)arg1 ;
-(void)placeQuickLinksViewController:(id)arg0 getRemainingQuickLinksBlock:(id)arg1 ;
-(void)placeSectionControllerDidUpdateContent:(id)arg0 ;
-(void)placeViewController:(id)arg0 shouldLogFeedbackOfType:(int)arg1 ;
-(void)presentAddPhotosWithPresentationOptions:(id)arg0 skipToAddFromLibrary:(BOOL)arg1 ;
-(void)presentPOIEnrichmentWithPresentationOptions:(id)arg0 ;
-(void)quickLinkMenuElementCoordinator:(id)arg0 didSelectQuickLink:(id)arg1 ;
-(void)ratingsAndReviewsSectionController:(id)arg0 didSelectPlaceCollection:(id)arg1 ;
-(void)ratingsAndReviewsSectionController:(id)arg0 didSelectViewReview:(id)arg1 ;
-(void)ratingsAndReviewsSectionControllerDidSelectViewAllReviews:(id)arg0 ;
-(void)relatedPlaceSectionController:(id)arg0 itemSelected:(id)arg1 ;
-(void)relatedPlaceSectionController:(id)arg0 showSeeAllWithTitle:(id)arg1 relatedMapItems:(id)arg2 originalMapItem:(id)arg3 ;
-(void)removeLoadingViewAnimated:(BOOL)arg0 ;
-(void)resignActive;
-(void)ribbonSectionControllerDidTapAddRatings:(id)arg0 initialRatingState:(NSInteger)arg1 withPresentationOptions:(id)arg2 ;
-(void)routeToCuratedCollection:(id)arg0 ;
-(void)routeToGuidesHomeFromExploreGuides:(id)arg0 ;
-(void)scrollToTopAnimated:(BOOL)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setInAirplaneModeAndNetworkUnreachable:(BOOL)arg0 ;
-(void)setPlaceItem:(id)arg0 updateOriginalContact:(BOOL)arg1 ;
-(void)shareSheetPresenter:(id)arg0 postCompletedActivityOfType:(id)arg1 completed:(BOOL)arg2 ;
-(void)shareSheetPresenter:(id)arg0 preCompletedActivityOfType:(id)arg1 completed:(BOOL)arg2 ;
-(void)showAllCollections:(id)arg0 usingTitle:(id)arg1 usingCollectionIds:(id)arg2 ;
-(void)showContentIfLoaded;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitDeparturesViewController:(id)arg0 didSelectConnectionInformation:(id)arg1 ;
-(void)transitDeparturesViewController:(id)arg0 didSelectDepartureSequence:(id)arg1 transitMapItem:(id)arg2 transitLine:(id)arg3 fromCell:(id)arg4 ;
-(void)transitDeparturesViewController:(id)arg0 didSelectTransitLine:(id)arg1 fromCell:(id)arg2 ;
-(void)transitDeparturesViewController:(id)arg0 showIncidents:(id)arg1 ;
-(void)updateActionRowView;
-(void)updateAirplaneModeNetworkUnreachable;
-(void)updateCollectionViewsAnimated:(BOOL)arg0 ;
-(void)updateCuratedCollectionsView;
-(void)updateFooterViews;
-(void)updateHeaderTitle;
-(void)updateMaskAlpha:(CGFloat)arg0 onHeight:(CGFloat)arg1 withOffset:(CGFloat)arg2 ;
-(void)updateUGCViewsWithHeaderAppearance:(id)arg0 rowInfoAppearances:(id)arg1 userSubmissionStatus:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)webContentSectionControllerDidStopLoading:(id)arg0 ;


@end


#endif