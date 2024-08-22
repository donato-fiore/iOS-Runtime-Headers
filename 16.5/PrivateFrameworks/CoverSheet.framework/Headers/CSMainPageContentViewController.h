// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSMAINPAGECONTENTVIEWCONTROLLER_H
#define CSMAINPAGECONTENTVIEWCONTROLLER_H

@class CHSWidgetHost, PRWidgetMetricsProvider, NSArray, UITapGestureRecognizer, NSString, NSSet, _UILegibilitySettings;
@protocol PTSettingsKeyObserver, CSCombinedListViewControllerDelegate, CSUserPresenceMonitorObserver, CSNotificationDestination, CSPageViewControllerProtocol, CSScrollablePageViewControllerProtocol, SBFAuthenticationStatusProvider, CSMainPageInlineContentViewControllerDelegate><CSAppearanceProviding><CSBehaviorProviding, CSCoverSheetViewControllerProtocol, CSScrollablePageViewControllerDelegate, CSNotificationDispatcher, CSMainPageContentViewControllerMediaControlsObserver, CSMainPageContentViewControllerNotificationObserver, UICoordinateSpace, CSCoverSheetViewPresenting, CSTouchEnvironmentStatusProviding, CSUserSessionControlling, CSWallpaperColorProvider, CSWallpaperProviding, SBSWidgetMetricsProviding;


#import "CSScrollablePageViewController.h"
#import "CSUserPictureViewController.h"
#import "CSUserPresenceMonitor.h"
#import "CSLogoutButtonViewController.h"
#import "CSLockScreenSettings.h"
#import "CSAppearance.h"
#import "CSBehavior.h"
#import "CSCombinedListViewController.h"
#import "CSPresentation.h"
#import "CSLayoutStrategy.h"

@interface CSMainPageContentViewController : CSScrollablePageViewController <PTSettingsKeyObserver, CSCombinedListViewControllerDelegate, CSUserPresenceMonitorObserver, CSNotificationDestination, CSPageViewControllerProtocol, CSScrollablePageViewControllerProtocol>

 {
    CSUserPictureViewController *_userPictureViewController;
    CSUserPresenceMonitor *_userPresenceMontior;
    CSLogoutButtonViewController *_logoutButtonViewController;
    id<SBFAuthenticationStatusProvider> *_authenticationProvider;
    CSLockScreenSettings *_testSettings;
    NSInteger _smoothestPermittedStrategy;
    CHSWidgetHost *_widgetHost;
    PRWidgetMetricsProvider *_widgetMetricsProvider;
    NSArray *_viewsPreferringProminentPresentationAndDismissal;
    UITapGestureRecognizer *_inlineContentGestureRecognizer;
    id<CSMainPageInlineContentViewControllerDelegate><CSAppearanceProviding><CSBehaviorProviding> *_inlineContentViewControllerDelegate;
}


@property (readonly, copy, nonatomic) CSAppearance *activeAppearance;
@property (readonly, copy, nonatomic) CSBehavior *activeBehavior;
@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (readonly, nonatomic) BOOL authenticated;
@property (retain, nonatomic) CSCombinedListViewController *combinedListViewController; // ivar: _combinedListViewController
@property (readonly, copy, nonatomic) NSSet *components;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (weak, nonatomic) NSObject<CSCoverSheetViewControllerProtocol> *coverSheetViewController;
@property (readonly, nonatomic) CGFloat customIdleExpirationTimeout;
@property (readonly, nonatomic) CGFloat customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSScrollablePageViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CSNotificationDispatcher> *dispatcher;
@property (readonly, copy, nonatomic) CSPresentation *externalPresentation;
@property (readonly, nonatomic) BOOL hasVisibleBreakthroughContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger idleTimerDuration;
@property (readonly, nonatomic) NSInteger idleTimerMode;
@property (readonly, nonatomic) NSInteger idleWarnMode;
@property (retain, nonatomic) CSLayoutStrategy *layoutStrategy; // ivar: _layoutStrategy
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (weak, nonatomic) NSObject<CSMainPageContentViewControllerMediaControlsObserver> *mediaControlsObserver; // ivar: _mediaControlsObserver
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (weak, nonatomic) NSObject<CSMainPageContentViewControllerNotificationObserver> *notificationObserver; // ivar: _notificationObserver
@property (readonly, copy, nonatomic) NSString *pageRole;
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly, nonatomic) NSInteger presentationAltitude;
@property (readonly, weak, nonatomic) NSObject<UICoordinateSpace> *presentationCoordinateSpace;
@property (readonly, nonatomic) unsigned int presentationFrameRateRangeReason;
@property (readonly, nonatomic) CAFrameRateRange presentationPreferredFrameRateRange;
@property (readonly, nonatomic) NSInteger presentationPriority;
@property (readonly, copy, nonatomic) NSArray *presentationRegions;
@property (readonly, nonatomic) NSInteger presentationStyle;
@property (readonly, nonatomic) NSInteger presentationTransition;
@property (readonly, nonatomic) NSInteger presentationType;
@property (weak, nonatomic) NSObject<CSCoverSheetViewPresenting> *presenter;
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (readonly, nonatomic, getter=isShowingMediaControls) BOOL showingMediaControls;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<CSTouchEnvironmentStatusProviding> *touchEnvironmentStatusProvider; // ivar: _touchEnvironmentStatusProvider
@property (nonatomic, getter=isTransitioning) BOOL transitioning;
@property (nonatomic) BOOL useFakeBlur; // ivar: _useFakeBlur
@property (retain, nonatomic) CSUserPresenceMonitor *userPresenceMonitor; // ivar: _userPresenceMonitor
@property (weak, nonatomic) NSObject<CSUserSessionControlling> *userSessionController; // ivar: _userSessionController
@property (readonly, nonatomic) NSArray *viewsPreferringProminentPresentationAndDismissal;
@property (weak, nonatomic) NSObject<CSWallpaperColorProvider> *wallpaperColorProvider; // ivar: _wallpaperColorProvider
@property (weak, nonatomic) NSObject<CSWallpaperProviding> *wallpaperProvider; // ivar: _wallpaperProvider
@property (readonly, nonatomic) NSObject<SBSWidgetMetricsProviding> *widgetMetricsProvider;


+(BOOL)isAvailableForConfiguration;
+(CGFloat)_phoneListWidth;
+(Class)viewClass;
+(NSUInteger)requiredCapabilities;
-(BOOL)_isPortrait;
-(BOOL)_listBelowDateTime;
-(BOOL)_pagingStyleRequiresUserPresenceDetection;
-(BOOL)dismissNotificationInLongLookAnimated:(BOOL)arg0 ;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)isNotificationContentExtensionVisible:(id)arg0 ;
-(BOOL)isPresentingNotificationInLongLook;
-(CGFloat)customListWidth;
-(CGFloat)dateTimeInsetX;
-(CGFloat)listInsetX;
-(CGFloat)minimumDateToListSpacing;
-(NSUInteger)dateTimeLayout;
-(NSUInteger)listLayout;
-(NSUInteger)listWidthStrategy;
-(id)_mainPageView;
-(id)init;
-(id)initWithAuthenticationProvider:(id)arg0 ;
-(id)notificationSectionSettingsForCombinedListViewController:(id)arg0 ;
-(void)_addOrRemoveLogoutButtonViewController;
-(void)_addOrRemoveNotificationsListIfNecessaryAnimated:(BOOL)arg0 ;
-(void)_addOrRemoveUserPictureViewController;
-(void)_addOrRemoveViewsAsAppropriate;
-(void)_inlineContentGestureRecognizerDidTap:(id)arg0 ;
-(void)_removeInlineContentGestureRecognizer;
-(void)_setupInlineContentGestureRecognizer;
-(void)_updateSmoothestPermittedPagingStrategy;
-(void)addInlineContentSupportForDelegate:(id)arg0 ;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)combinedListViewController:(id)arg0 hasContent:(BOOL)arg1 ;
-(void)combinedListViewController:(id)arg0 isShowingMediaControls:(BOOL)arg1 ;
-(void)combinedListViewController:(id)arg0 updatedViewsPreferringProminentPresentationOrDismissal:(id)arg1 ;
-(void)combinedListViewControllerWillExpandNotificationListCount:(id)arg0 ;
-(void)dealloc;
-(void)inlineContentDidChange;
-(void)notificationsLoadedForSectionIdentifier:(id)arg0 ;
-(void)postNotificationRequest:(id)arg0 ;
-(void)removeInlineContentSupport;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)updateForPresentation:(id)arg0 ;
-(void)updateNotificationRequest:(id)arg0 ;
-(void)updateNotificationSectionSettings:(id)arg0 previousSectionSettings:(id)arg1 ;
-(void)updateNotificationSystemSettings:(id)arg0 previousSystemSettings:(id)arg1 ;
-(void)userPresenceDetectedSinceWakeDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)withdrawNotificationRequest:(id)arg0 ;


@end


#endif