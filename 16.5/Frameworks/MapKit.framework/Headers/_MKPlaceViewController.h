// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKPLACEVIEWCONTROLLER_H
#define _MKPLACEVIEWCONTROLLER_H

@class CNContactStore, NSMapTable, GEOAutomobileOptions, CNContact, CNContactNavigationController<CNContactViewControllerPrivateDelegate>, GEOCyclingOptions, NSString, CLLocation, UIScrollView, GEOTransitOptions, NSMutableArray, GEOWalkingOptions;
@protocol MKStackingViewControllerDelegate, MKPlaceCardPhotosControllerDelegate, MKPlaceCardHeaderViewControllerDelegate, GEOLogContextDelegate, MKETAProviderDelegate, MKETAProviderObserver, MKPlaceHeaderButtonsViewControllerDelegate, _MKPlaceCardConforming, _MKInfoCardAnalyticsDelegate, MKPlaceCardActionControllerDelegate, OS_dispatch_queue, _MKPlaceItem, _MKPlaceViewControllerDelegate, _MKPlaceViewControllerFeedbackDelegate;


#import "MKLayoutCardViewController.h"
#import "MKPlaceActionManager.h"
#import "MKPlaceCardHeaderViewController.h"
#import "MKPlaceHeaderButtonsViewController.h"
#import "MKPlaceInfoViewController.h"
#import "MKPlaceInlineMapViewController.h"
#import "MKPlacePoisInlineMapViewController.h"
#import "MKPlaceCardFooterActionsViewController.h"
#import "MKETAProvider.h"
#import "MKUGCCallToActionViewAppearance.h"
#import "_MKPlaceActionButtonController.h"
#import "MKMapItem.h"

@interface _MKPlaceViewController : MKLayoutCardViewController <MKStackingViewControllerDelegate, MKPlaceCardPhotosControllerDelegate, MKPlaceCardHeaderViewControllerDelegate, GEOLogContextDelegate, MKETAProviderDelegate, MKETAProviderObserver, MKPlaceHeaderButtonsViewControllerDelegate, _MKPlaceCardConforming, _MKInfoCardAnalyticsDelegate, MKPlaceCardActionControllerDelegate>

 {
    MKPlaceActionManager *_actionManager;
    MKPlaceCardHeaderViewController *_headerViewController;
    MKPlaceHeaderButtonsViewController *_buttonsHeaderController;
    MKPlaceInfoViewController *_infoViewController;
    MKPlaceInlineMapViewController *_inlineMapViewController;
    MKPlacePoisInlineMapViewController *_poisInlineMapViewController;
    MKPlaceCardFooterActionsViewController *_placeActionViewController;
    MKETAProvider *_etaProvider;
    MKUGCCallToActionViewAppearance *_headerCallToActionAppearance;
    CNContactStore *_contactStore;
    NSMapTable *_additionalViewControllers;
    BOOL _overrideDefaultShowRAP;
    BOOL _hasContactOnlyMapItem;
    BOOL _isUpdatingViewControllers;
    CGPoint _beginAnalyticsScrollingPoint;
    CGFloat _contentAlpha;
    NSUInteger _initialAppearanceSignpostID;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue; // ivar: _analyticsQueue
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions; // ivar: _automobileOptions
@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (weak, nonatomic) CNContactNavigationController<CNContactViewControllerPrivateDelegate> *contactsNavigationController; // ivar: _contactsNavigationController
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
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) CNContact *originalContact; // ivar: _originalContact
@property (nonatomic) BOOL placeInBookmarks; // ivar: _placeInBookmarks
@property (nonatomic) BOOL placeInCollections; // ivar: _placeInCollections
@property (nonatomic) BOOL placeInShortcuts; // ivar: _placeInShortcuts
@property (readonly, nonatomic) NSObject<_MKPlaceItem> *placeItem; // ivar: _placeItem
@property (weak, nonatomic) NSObject<_MKPlaceViewControllerDelegate> *placeViewControllerDelegate; // ivar: _placeViewControllerDelegate
@property (copy, nonatomic) id *placeViewFeedbackAppLaunchHandler; // ivar: _placeViewFeedbackAppLaunchHandler
@property (weak, nonatomic) NSObject<_MKPlaceViewControllerFeedbackDelegate> *placeViewFeedbackDelegate; // ivar: _placeViewFeedbackDelegate
@property (readonly, nonatomic) UIScrollView *scrollView;
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
@property (retain, nonatomic) GEOWalkingOptions *walkingOptions; // ivar: _walkingOptions


-(BOOL)_canShowWhileLocked;
-(BOOL)_hasContactAccess;
-(BOOL)_shouldShowContactActions;
-(BOOL)allowTransitLineSelection;
-(BOOL)isGuardianRestrictedCNContainer;
-(BOOL)isLayoutDynamic;
-(BOOL)isLoading;
-(BOOL)shouldDisplayBrowseCategoryVC;
-(BOOL)showFavoriteButtons;
-(BOOL)stackingViewController:(id)arg0 showsTitleForViewController:(id)arg1 ;
-(BOOL)useCompactPhotosView;
-(CGFloat)contentAlpha;
-(CGFloat)placeCardHeaderViewControllerTrailingConstantForTitle:(id)arg0 ;
-(CGFloat)stackingViewController:(id)arg0 heightForSeparatorBetweenUpperViewController:(id)arg1 andLowerViewController:(id)arg2 ;
-(CGFloat)stackingViewController:(id)arg0 minimumVisibleSurfacePercentForAnalyticsSelection:(id)arg1 ;
-(NSInteger)_sectionPositionForMapTableKey:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)annotatedItemListDisplayStyle;
-(id)_createViewControllerForModule:(id)arg0 ;
-(id)_mapTableKeyForSectionPosition:(NSInteger)arg0 ;
-(id)_traits;
-(id)_viewControllerForClass:(Class)arg0 ;
-(id)additionalViewControllersAtPosition:(NSInteger)arg0 ;
-(id)attributionsVC;
-(id)collectionViews;
-(id)createFooterActions;
-(id)createMenuActions;
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
-(id)photoVC;
-(id)poisInlineMapVC;
-(id)stackingViewController:(id)arg0 scrollViewForViewController:(id)arg1 ;
-(int)_moduleTypeForViewController:(id)arg0 ;
-(int)currentMapViewTargetForAnalytics;
-(int)currentUITargetForAnalytics;
-(int)getPlaceCardTypeForAnalytics;
-(int)mapTypeForETAProvider:(id)arg0 ;
-(void)ETAProviderLocationUpdated:(id)arg0 ;
-(void)_commonInit;
-(void)_createViewControllers:(id)arg0 ;
-(void)_createViewControllersForBrand:(id)arg0 ;
-(void)_createViewControllersForShortPlacecard:(id)arg0 ;
-(void)_didResolveAttribution:(id)arg0 ;
-(void)_launchAttributionURLs:(id)arg0 withAttribution:(id)arg1 mapItem:(id)arg2 completionHandler:(id)arg3 ;
-(void)_logClientAndServerLayouts:(id)arg0 ;
-(void)_performWhenViewHasAppeared:(id)arg0 ;
-(void)_presentViewControllerWithInterfaceStyleCheck:(id)arg0 ;
-(void)_setDefaultViewControllers:(id)arg0 ;
-(void)_showShareSheet:(id)arg0 ;
-(void)_updateViewControllers;
-(void)addAdditionalViewController:(id)arg0 atPosition:(NSInteger)arg1 ;
-(void)collectionIdentifierSelected:(id)arg0 ;
-(void)dealloc;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 eventValue:(id)arg1 feedbackDelegateSelector:(int)arg2 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 eventValue:(id)arg1 feedbackDelegateSelector:(int)arg2 actionRichProviderId:(id)arg3 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 actionURL:(id)arg3 photoID:(id)arg4 feedbackDelegateSelector:(int)arg5 actionRichProviderId:(id)arg6 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 actionURL:(id)arg3 photoID:(id)arg4 moduleMetadata:(id)arg5 feedbackDelegateSelector:(int)arg6 actionRichProviderId:(id)arg7 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3 actionRichProviderId:(id)arg4 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 moduleMetadata:(id)arg3 feedbackDelegateSelector:(int)arg4 actionRichProviderId:(id)arg5 ;
-(void)infoCardTransitAnalyticsDidSelectionAction:(int)arg0 resultIndex:(NSInteger)arg1 targetID:(NSUInteger)arg2 transitSystem:(id)arg3 transitDepartureSequence:(id)arg4 transitCardCategory:(int)arg5 transitIncident:(id)arg6 feedbackDelegateSelector:(int)arg7 ;
-(void)performAction:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)placeActionManager:(id)arg0 didSelectAddToContactsUsingEnvironment:(id)arg1 ;
-(void)placeActionManager:(id)arg0 didSelectAddToExistingContactWithEnvironment:(id)arg1 ;
-(void)placeActionManager:(id)arg0 didSelectAddToGuidesWithEnvironment:(id)arg1 ;
-(void)placeActionManager:(id)arg0 didSelectDirectionsWithEnvironment:(id)arg1 ;
-(void)placeActionManager:(id)arg0 didSelectShareFromView:(id)arg1 ;
-(void)placeActionManager:(id)arg0 didSelectShareWithEnvironment:(id)arg1 ;
-(void)placeCardActionControllerDidSelectAddPhoto:(id)arg0 presentingViewController:(id)arg1 progressObserver:(id)arg2 sourceView:(id)arg3 ;
-(void)placeCardActionControllerDidSelectReportAProblem:(id)arg0 fromView:(id)arg1 isQuickAction:(BOOL)arg2 ;
-(void)placeCardActionControllerDidSelectViewAllPhotos:(id)arg0 presentingViewController:(id)arg1 ;
-(void)placeCardPhotosController:(id)arg0 didSelectViewPhotoWithID:(id)arg1 presentingViewController:(id)arg2 ;
-(void)placeCardWillCloseFromClientType:(NSUInteger)arg0 ;
-(void)placeHeaderButtonsViewController:(id)arg0 didSelectPrimaryType:(NSUInteger)arg1 withView:(id)arg2 ;
-(void)removeAdditionalViewController:(id)arg0 ;
-(void)setAllowTransitLineSelection:(BOOL)arg0 ;
-(void)setContentAlpha:(CGFloat)arg0 ;
-(void)setContentVisibility:(NSInteger)arg0 ;
-(void)setShowFavoriteButtons:(BOOL)arg0 ;
-(void)setUseCompactPhotosView:(BOOL)arg0 ;
-(void)showContentIfLoaded;
-(void)stackingViewControllerDidLayoutViewControllers:(id)arg0 ;
-(void)updateCollectionViewsAnimated:(BOOL)arg0 ;
-(void)updateContentAlpha;
-(void)updateHeaderTitle;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif