// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKPLACEVIEWCONTROLLER_H
#define _MKPLACEVIEWCONTROLLER_H

@class CNContact, CNContactViewController, CNContactStore, NSMapTable, geo_isolater, NSUserActivity, NSTimer, GEOAutomobileOptions, CNContactNavigationController<CNContactViewControllerPrivateDelegate>, GEOCyclingOptions, NSString, CLLocation, RadiosPreferences, UIScrollView, GEOTransitOptions, NSMutableArray;
@protocol MKStackingViewControllerDelegate, MKActivityViewControllerDelegate, RadiosPreferencesDelegate, MKBrowseCategoryViewControllerDelegate, MKPlaceParentInfoViewControllerDelegate, MKPlaceRelatedViewControllerDelegate, MKPlaceQuickLinksViewControllerDelegate, MKUGCCallToActionViewDelegate, MKCollectionViewProvider, CNContactViewControllerDelegate, CNContactViewControllerPrivateDelegate, CNContactPickerDelegate, MKPlaceCollectionsDelegate, MKPlaceViewControllerPresentingProtocol, MKAnnotatedItemListViewControllerDelegate, MKPlaceCardPhotosControllerDelegate, MKPlaceCardReviewsControllerDelegate, MKPlaceCardEncyclopedicControllerDelegate, MKTransitDepaturesViewControllerDelegate, MKPlaceCardHeaderViewControllerDelegate, MKTransitAttributionViewControllerDelegate, GEOLogContextDelegate, MKWebContentViewControllerDelegate, MKETAProviderDelegate, MKETAProviderObserver, MKPlaceHeaderButtonsViewControllerDelegate, MKPlaceServiceHoursViewControllerProtocol, _MKPlaceCardConforming, _MKInfoCardAnalyticsDelegate, MKPlaceCardActionControllerDelegate, OS_dispatch_queue, _MKPlaceItem, _MKPlaceViewControllerDelegate, _MKPlaceViewControllerFeedbackDelegate, UIScrollViewDelegate;


#import "MKLayoutCardViewController.h"
#import "MKPlaceActionManager.h"
#import "MKPlaceCardHeaderViewController.h"
#import "MKPlaceHeaderButtonsViewController.h"
#import "MKPlaceInfoViewController.h"
#import "MKPlaceEncyclopedicViewController.h"
#import "MKPlaceInlineMapViewController.h"
#import "MKPlacePoisInlineMapViewController.h"
#import "MKPlaceCardFooterActionsViewController.h"
#import "MKPlaceCardActionsRowViewController.h"
#import "MKETAProvider.h"
#import "MKOfficialAppViewController.h"
#import "MKPlaceCollectionViewController.h"
#import "MKInfoCardLoadingView.h"
#import "MKUGCCallToActionViewController.h"
#import "MKUGCCallToActionViewAppearance.h"
#import "MKPlaceCuratedCollectionsViewController.h"
#import "MKMuninContainerView.h"
#import "_MXExtensionManager.h"
#import "_MKPlaceActionButtonController.h"
#import "MKMapItem.h"
#import "MKMuninView.h"

@interface _MKPlaceViewController : MKLayoutCardViewController <MKStackingViewControllerDelegate, MKActivityViewControllerDelegate, RadiosPreferencesDelegate, MKBrowseCategoryViewControllerDelegate, MKPlaceParentInfoViewControllerDelegate, MKPlaceRelatedViewControllerDelegate, MKPlaceQuickLinksViewControllerDelegate, MKUGCCallToActionViewDelegate, MKCollectionViewProvider, CNContactViewControllerDelegate, CNContactViewControllerPrivateDelegate, CNContactPickerDelegate, MKPlaceCollectionsDelegate, MKPlaceViewControllerPresentingProtocol, MKAnnotatedItemListViewControllerDelegate, MKPlaceCardPhotosControllerDelegate, MKPlaceCardReviewsControllerDelegate, MKPlaceCardEncyclopedicControllerDelegate, MKTransitDepaturesViewControllerDelegate, MKPlaceCardHeaderViewControllerDelegate, MKTransitAttributionViewControllerDelegate, GEOLogContextDelegate, MKWebContentViewControllerDelegate, MKETAProviderDelegate, MKETAProviderObserver, MKPlaceHeaderButtonsViewControllerDelegate, MKPlaceServiceHoursViewControllerProtocol, _MKPlaceCardConforming, _MKInfoCardAnalyticsDelegate, MKPlaceCardActionControllerDelegate>

 {
    MKPlaceActionManager *_actionManager;
    MKPlaceCardHeaderViewController *_headerViewController;
    MKPlaceHeaderButtonsViewController *_buttonsHeaderController;
    MKPlaceInfoViewController *_infoViewController;
    MKPlaceEncyclopedicViewController *_encyclopedicViewController;
    MKPlaceInlineMapViewController *_inlineMapViewController;
    MKPlacePoisInlineMapViewController *_poisInlineMapViewController;
    MKPlaceCardFooterActionsViewController *_placeActionViewController;
    MKPlaceCardActionsRowViewController *_placeActionRowViewController;
    MKETAProvider *_etaProvider;
    BOOL _attemptedToCreateAddressBook;
    MKOfficialAppViewController *_officialAppViewController;
    MKPlaceCollectionViewController *_collectionViewController;
    MKInfoCardLoadingView *_loadingView;
    MKUGCCallToActionViewController *_callToActionViewController;
    MKUGCCallToActionViewAppearance *_headerCallToActionAppearance;
    MKPlaceCuratedCollectionsViewController *_curatedCollectionsVC;
    CNContact *_originalContactCopy;
    CNContactViewController *_updatingContactController;
    CNContactViewController *_creatingContactController;
    CNContactViewController *_editingContactController;
    CNContactStore *_contactStore;
    MKMuninContainerView *_muninContainerView;
    NSUInteger _muninMissCounter;
    NSMapTable *_additionalViewControllers;
    BOOL _overrideDefaultShowRAP;
    BOOL _hasContactOnlyMapItem;
    BOOL _isUpdatingViewControllers;
    CGPoint _beginAnalyticsScrollingPoint;
    CGFloat _contentAlpha;
    BOOL _extensionDiscoveryInProgress;
    geo_isolater *_extensionDiscoveryInProgressIsolater;
    NSObject<OS_dispatch_queue> *_extensionDiscoveryQueue;
    _MXExtensionManager *_extensionManager;
    NSUserActivity *_donationUserActivity;
    NSTimer *_webContentLoadingTimer;
    NSUInteger _initialAppearanceSignpostID;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue; // ivar: _analyticsQueue
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions; // ivar: _automobileOptions
@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (weak, nonatomic) CNContactNavigationController<CNContactViewControllerPrivateDelegate> *contactsNavigationController; // ivar: _contactsNavigationController
@property (nonatomic) CGFloat contentAlpha;
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions; // ivar: _cyclingOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableReportAProblem;
@property (nonatomic) BOOL hasCheckedDistanceAvailability; // ivar: _hasCheckedDistanceAvailability
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _MKPlaceActionButtonController *headerAlternatePrimaryButtonController; // ivar: _headerAlternatePrimaryButtonController
@property (nonatomic) CGFloat headerHeight; // ivar: headerHeight
@property (retain, nonatomic) _MKPlaceActionButtonController *headerSecondaryButtonController; // ivar: _headerSecondaryButtonController
@property (readonly, nonatomic) CGFloat headerSecondaryNameLabelPadding;
@property (copy, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (nonatomic) BOOL hideDirectionsButtons;
@property (nonatomic) BOOL hideInlineMap;
@property (nonatomic) BOOL inAirplaneModeAndNetworkUnreachable; // ivar: _inAirplaneModeAndNetworkUnreachable
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (retain, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) MKMuninView *muninView;
@property (nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) CNContact *originalContact; // ivar: _originalContact
@property (nonatomic) BOOL placeInBookmarks; // ivar: _placeInBookmarks
@property (nonatomic) BOOL placeInCollections; // ivar: _placeInCollections
@property (nonatomic) BOOL placeInShortcuts; // ivar: _placeInShortcuts
@property (readonly, nonatomic) NSObject<_MKPlaceItem> *placeItem; // ivar: _placeItem
@property (weak, nonatomic) NSObject<_MKPlaceViewControllerDelegate> *placeViewControllerDelegate; // ivar: _placeViewControllerDelegate
@property (copy, nonatomic) id *placeViewFeedbackAppLaunchHandler; // ivar: _placeViewFeedbackAppLaunchHandler
@property (weak, nonatomic) NSObject<_MKPlaceViewControllerFeedbackDelegate> *placeViewFeedbackDelegate; // ivar: _placeViewFeedbackDelegate
@property (retain, nonatomic) RadiosPreferences *radioPreferences; // ivar: _radioPreferences
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) NSObject<UIScrollViewDelegate> *scrollViewDelegate; // ivar: _scrollViewDelegate
@property (nonatomic) BOOL showContactActions; // ivar: _showContactActions
@property (nonatomic) BOOL showEditButton;
@property (nonatomic) BOOL showInlineMapInHeader;
@property (nonatomic) BOOL showNearbyApps;
@property (nonatomic) BOOL showOpenInPinpoint;
@property (nonatomic) BOOL showOpenInSkyline;
@property (nonatomic) BOOL showReportAProblem;
@property (nonatomic) BOOL showShareActionsButton;
@property (nonatomic) BOOL showSimulateLocation;
@property (nonatomic) BOOL showTitleBar;
@property (readonly) Class superclass;
@property (retain, nonatomic) GEOTransitOptions *transitOptions; // ivar: _transitOptions
@property (retain, nonatomic) NSMutableArray *viewDidAppearBlocks; // ivar: _viewDidAppearBlocks


+(void)initialize;
-(BOOL)_canShowExtensionReservationButton;
-(BOOL)_canShowWhileLocked;
-(BOOL)_contactStoredMatchingMapItem:(id)arg0 ;
-(BOOL)_hasContactAccess;
-(BOOL)_hasReservationPlaceCardExtension;
-(BOOL)_isExtensionDiscoveryInProgress;
-(BOOL)_isReservationProviderAppInstalled;
-(BOOL)_shouldShowContactActions;
-(BOOL)_shouldShowSiriReservationController;
-(BOOL)allowTransitLineSelection;
-(BOOL)deviceIsLockedAndNeedsPasscode;
-(BOOL)hasWebContent;
-(BOOL)isGuardianRestrictedCNContainer;
-(BOOL)isLayoutDynamic;
-(BOOL)isLoading;
-(BOOL)isWebContentLoading;
-(BOOL)isWebContentViewControllerParentPlacecardLoading:(id)arg0 ;
-(BOOL)placeCardHeaderViewControllerShouldOverrideCallToAction:(id)arg0 ;
-(BOOL)shouldDisplayBrowseCategoryVC;
-(BOOL)shouldMoveMuninStorefrontViewForPlaceCardPhotosController:(id)arg0 ;
-(BOOL)shouldPresentStoreProductViewControllerWithAttribution:(id)arg0 ;
-(BOOL)showFavoriteButtons;
-(BOOL)stackingViewController:(id)arg0 showsTitleForViewController:(id)arg1 ;
-(BOOL)transitDeparturesViewController:(id)arg0 canSelectDepartureSequence:(id)arg1 transitMapItem:(id)arg2 transitLine:(id)arg3 fromCell:(id)arg4 ;
-(BOOL)useCompactPhotosView;
-(CGFloat)placeCardHeaderViewControllerTrailingConstantForTitle:(id)arg0 ;
-(CGFloat)stackingViewController:(id)arg0 heightForSeparatorBetweenUpperViewController:(id)arg1 andLowerViewController:(id)arg2 ;
-(CGFloat)stackingViewController:(id)arg0 minimumVisibleSurfacePercentForAnalyticsSelection:(id)arg1 ;
-(NSInteger)_sectionPositionForMapTableKey:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)annotatedItemListDisplayStyle;
-(id)_createTableBookingButtonController;
-(id)_createViewControllerForModule:(id)arg0 ;
-(id)_mapTableKeyForSectionPosition:(NSInteger)arg0 ;
-(id)_refetchedContactForCCTV:(id)arg0 error:(*id)arg1 ;
-(id)_removeMapsDataFromContact:(id)arg0 ;
-(id)_traits;
-(id)_viewControllerForClass:(Class)arg0 ;
-(id)additionalViewControllersAtPosition:(NSInteger)arg0 ;
-(id)annotatedItemListViewControllerWithDisplayStyle:(NSUInteger)arg0 ;
-(id)attributionsVC;
-(id)browseCategoryVC;
-(id)businessInfosVC;
-(id)collectionViewController;
-(id)collectionViews;
-(id)createFooterActions;
-(id)createMenuActions;
-(id)createMessageViewController;
-(id)createRowActions;
-(id)curatedCollectionsVC;
-(id)draggableContent;
-(id)draggableHeaderView;
-(id)encyclopedicVC;
-(id)generateAvailableActionForAnalytics;
-(id)generateUnactionableUIElementsForAnalytics;
-(id)hoursVC;
-(id)infosVC;
-(id)init;
-(id)initWithContact:(id)arg0 mapItem:(id)arg1 ;
-(id)initWithContact:(id)arg0 mapItem:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithMapItem:(id)arg0 ;
-(id)initWithMapItem:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithPlaceItem:(id)arg0 options:(NSUInteger)arg1 ;
-(id)inlineMapVC;
-(id)messagesHoursVC;
-(id)muninContainerForPlaceCardPhotosController:(id)arg0 ;
-(id)officialAppsVC;
-(id)overriddenIfNecessaryAppAdamID:(id)arg0 ;
-(id)parentVC;
-(id)parentVenueVC;
-(id)photoVC;
-(id)placeRelatedViewController:(id)arg0 viewsForMapItems:(id)arg1 prefersAddressOverCategory:(BOOL)arg2 ;
-(id)poisInlineMapVC;
-(id)quickLinksVC;
-(id)relatedPlaceListVC;
-(id)reservationVC;
-(id)reviewsVC;
-(id)serviceHoursVC;
-(id)stackingViewController:(id)arg0 scrollViewForViewController:(id)arg1 ;
-(id)transitAttributionVC;
-(id)transitDeparturesViewControllerTraits:(id)arg0 ;
-(id)transitVC;
-(id)ugcCallToActionVC;
-(id)userGeneratedContentVC;
-(id)venueInfoContentsVC;
-(id)webContentVCWithURL:(id)arg0 ;
-(int)_moduleTypeForViewController:(id)arg0 ;
-(int)currentMapViewTargetForAnalytics;
-(int)currentUITargetForAnalytics;
-(int)getPlaceCardTypeForAnalytics;
-(int)mapTypeForETAProvider:(id)arg0 ;
-(void)ETAProviderLocationUpdated:(id)arg0 ;
-(void)_checkDeviceLockStatusWithCompletion:(id)arg0 ;
-(void)_commonInit;
-(void)_createAppClipButtonControllerAppClipLink:(id)arg0 completion:(id)arg1 ;
-(void)_createAppClipButtonControllerWithCompletion:(id)arg0 ;
-(void)_createSecondaryAppClipButtonControllerWithCompletion:(id)arg0 ;
-(void)_createViewControllers:(id)arg0 ;
-(void)_createViewControllersForBrand:(id)arg0 ;
-(void)_createViewControllersForShortPlacecard:(id)arg0 ;
-(void)_didResolveAttribution:(id)arg0 ;
-(void)_discoverRestaurantReservationExtensionWithCompletion:(id)arg0 ;
-(void)_dismissModalViewController;
-(void)_getCanShowAppClipButtonWithCompletion:(id)arg0 ;
-(void)_getCanShowSecondaryAppClipButtonWithCompletion:(id)arg0 ;
-(void)_launchAttributionURLs:(id)arg0 withAttribution:(id)arg1 mapItem:(id)arg2 completionHandler:(id)arg3 ;
-(void)_logClientAndServerLayouts:(id)arg0 ;
-(void)_performWhenViewHasAppeared:(id)arg0 ;
-(void)_presentViewControllerWithInterfaceStyleCheck:(id)arg0 ;
-(void)_setDefaultViewControllers:(id)arg0 ;
-(void)_setExtensionDiscoveryInProgress:(BOOL)arg0 ;
-(void)_showEditSheet:(id)arg0 ;
-(void)_showShareSheet:(id)arg0 ;
-(void)_showShareSheetNoDeviceLockCheck:(id)arg0 ;
-(void)_updateTheme;
-(void)_updateThemeView:(id)arg0 ;
-(void)_updateThemeViewController:(id)arg0 ;
-(void)_updateViewControllerStatesForOffline;
-(void)_updateViewControllers;
-(void)addAdditionalViewController:(id)arg0 atPosition:(NSInteger)arg1 ;
-(void)addLoadingView;
-(void)airplaneModeChanged;
-(void)annotatedItemListViewController:(id)arg0 requestsSceneActivationWithPhotoGallery:(id)arg1 ;
-(void)categoryBrowseViewController:(id)arg0 didTapOnSearchCategory:(id)arg1 ;
-(void)cleanMuninContainerForPlaceCardPhotosController:(id)arg0 ;
-(void)collectionIdentifierSelected:(id)arg0 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)contactViewController:(id)arg0 didDeleteContact:(id)arg1 ;
-(void)dealloc;
-(void)didFinishDismissingViewController:(id)arg0 ;
-(void)hideContentIfLoading;
-(void)hideTitle:(BOOL)arg0 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 eventValue:(id)arg1 feedbackDelegateSelector:(int)arg2 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 actionURL:(id)arg3 photoID:(id)arg4 feedbackDelegateSelector:(int)arg5 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 actionURL:(id)arg3 photoID:(id)arg4 moduleMetadata:(id)arg5 feedbackDelegateSelector:(int)arg6 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 moduleMetadata:(id)arg3 feedbackDelegateSelector:(int)arg4 ;
-(void)infoCardTransitAnalyticsDidSelectionAction:(int)arg0 resultIndex:(NSInteger)arg1 targetID:(NSUInteger)arg2 transitSystem:(id)arg3 transitDepartureSequence:(id)arg4 transitCardCategory:(int)arg5 transitIncident:(id)arg6 feedbackDelegateSelector:(int)arg7 ;
-(void)mapkitActivityViewController:(id)arg0 postCompletedActivityOfType:(id)arg1 completed:(BOOL)arg2 ;
-(void)mapkitActivityViewController:(id)arg0 preCompletedActivityOfType:(id)arg1 completed:(BOOL)arg2 ;
-(void)networkReachableChanged:(id)arg0 ;
-(void)performAction:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)placeActionManager:(id)arg0 didSelectShareFromView:(id)arg1 ;
-(void)placeCardActionControllerDidRequestCopy:(id)arg0 ;
-(void)placeCardActionControllerDidSelectAddPhoto:(id)arg0 presentingViewController:(id)arg1 progressObserver:(id)arg2 sourceView:(id)arg3 ;
-(void)placeCardActionControllerDidSelectAddToCollection:(id)arg0 ;
-(void)placeCardActionControllerDidSelectAddToContacts:(id)arg0 fromView:(id)arg1 ;
-(void)placeCardActionControllerDidSelectAddToExistingContact:(id)arg0 fromView:(id)arg1 ;
-(void)placeCardActionControllerDidSelectAddToMapsHome:(id)arg0 ;
-(void)placeCardActionControllerDidSelectChangeAddress:(id)arg0 ;
-(void)placeCardActionControllerDidSelectOpenInSkyline:(id)arg0 ;
-(void)placeCardActionControllerDidSelectRefineLocation:(id)arg0 ;
-(void)placeCardActionControllerDidSelectRemoveFromMapsHome:(id)arg0 ;
-(void)placeCardActionControllerDidSelectRemoveMarker:(id)arg0 ;
-(void)placeCardActionControllerDidSelectReportAProblem:(id)arg0 fromView:(id)arg1 isQuickAction:(BOOL)arg2 ;
-(void)placeCardActionControllerDidSelectReportAProblemAddNewPlace:(id)arg0 isQuickAction:(BOOL)arg1 ;
-(void)placeCardActionControllerDidSelectSimulateLocation:(id)arg0 ;
-(void)placeCardActionControllerDidSelectViewAllPhotos:(id)arg0 presentingViewController:(id)arg1 ;
-(void)placeCardActionControllerDidSelectionOpenBrandCard:(id)arg0 ;
-(void)placeCardActionControllerDidSelectionOpenInPinpoint:(id)arg0 ;
-(void)placeCardEncyclopedicControllerDidExpandTextBlock:(id)arg0 ;
-(void)placeCardEncyclopedicControllerDidSelectShowArticle:(id)arg0 ;
-(void)placeCardPhotosController:(id)arg0 didSelectPhotoToReport:(id)arg1 withPhotoGalleryViewController:(id)arg2 ;
-(void)placeCardPhotosController:(id)arg0 didSelectViewPhotoWithID:(id)arg1 presentingViewController:(id)arg2 ;
-(void)placeCardPhotosController:(id)arg0 enterMuninForMapItem:(id)arg1 muninView:(id)arg2 ;
-(void)placeCardPhotosController:(id)arg0 requestsSceneActivationForPhotoGalleryViewController:(id)arg1 ;
-(void)placeCardPhotosControllerDidCloseFullscreenPhotos:(id)arg0 ;
-(void)placeCardPhotosControllerDidOpenFullscreenPhotos:(id)arg0 ;
-(void)placeCardReviewsController:(id)arg0 didSelectViewReview:(id)arg1 ;
-(void)placeCardReviewsControllerDidSelectViewAllReviews:(id)arg0 ;
-(void)placeCardWillCloseFromClientType:(NSUInteger)arg0 ;
-(void)placeHeaderButtonsViewController:(id)arg0 didSelectPrimaryType:(NSUInteger)arg1 withView:(id)arg2 ;
-(void)placeParentInfoViewController:(id)arg0 didSelectParent:(id)arg1 ;
-(void)placeQuickLinksViewController:(id)arg0 appClipSelected:(id)arg1 ;
-(void)placeQuickLinksViewController:(id)arg0 getRemainingQuickLinksBlock:(id)arg1 ;
-(void)placeQuickLinksViewController:(id)arg0 quickLinkURLStringSelected:(id)arg1 ;
-(void)placeRelatedViewController:(id)arg0 itemSelected:(id)arg1 ;
-(void)placeRelatedViewController:(id)arg0 showRelatedMapItems:(id)arg1 withTitle:(id)arg2 originalMapItem:(id)arg3 analyticsDelegate:(id)arg4 ;
-(void)placeServiceViewControllerDidTapHeaderButton:(id)arg0 ;
-(void)presentAddPhotosWithCallToActionView:(id)arg0 ;
-(void)presentEditSubmissionWithCallToActionView:(id)arg0 ;
-(void)presentPOIEnrichmentWithCallToActionView:(id)arg0 overallState:(NSInteger)arg1 ;
-(void)presentStoreProductViewControllerWithAppAdamID:(id)arg0 bundleIdentifier:(id)arg1 presentingViewController:(id)arg2 ;
-(void)removeAdditionalViewController:(id)arg0 ;
-(void)removeLoadingViewAnimated:(BOOL)arg0 ;
-(void)removeWebContentViewController:(id)arg0 ;
-(void)requestsDismissingPresentingViewControllerWithCompletion:(id)arg0 ;
-(void)resetWebContentTimer;
-(void)routeToCuratedCollection:(id)arg0 ;
-(void)routeToGuidesHomeFromExploreGuides:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setAllowTransitLineSelection:(BOOL)arg0 ;
-(void)setContentVisibility:(NSInteger)arg0 ;
-(void)setShowFavoriteButtons:(BOOL)arg0 ;
-(void)setUseCompactPhotosView:(BOOL)arg0 ;
-(void)showAllCollections:(id)arg0 usingTitle:(id)arg1 usingCollectionIds:(id)arg2 ;
-(void)showContentIfLoaded;
-(void)stackingViewControllerDidLayoutViewControllers:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitDeparturesViewController:(id)arg0 didSelectConnectionInformation:(id)arg1 ;
-(void)transitDeparturesViewController:(id)arg0 didSelectDepartureSequence:(id)arg1 transitMapItem:(id)arg2 transitLine:(id)arg3 fromCell:(id)arg4 ;
-(void)transitDeparturesViewController:(id)arg0 didSelectTransitLine:(id)arg1 fromCell:(id)arg2 ;
-(void)transitDeparturesViewController:(id)arg0 showIncidents:(id)arg1 ;
-(void)updateActionRowView;
-(void)updateAirplaneModeNetworkUnreachable;
-(void)updateCollectionViewsAnimated:(BOOL)arg0 ;
-(void)updateContentAlpha;
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
-(void)viewWillLayoutSubviews;
// -(void)webContentViewController:(id)arg0 performHeightChangeWithBlock:(id)arg1 animated:(unk)arg2 completion:(BOOL)arg3  ;
-(void)webContentViewControllerDidStopLoading:(id)arg0 ;


@end


#endif