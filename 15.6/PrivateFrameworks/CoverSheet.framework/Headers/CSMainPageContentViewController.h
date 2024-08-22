// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSMAINPAGECONTENTVIEWCONTROLLER_H
#define CSMAINPAGECONTENTVIEWCONTROLLER_H

@class CHSWidgetHost, NSString, NSSet, _UILegibilitySettings, NSArray;
@protocol PTSettingsKeyObserver, CSCombinedListViewControllerDelegate, CSUserPresenceMonitorObserver, CSNotificationDestination, CSPageViewControllerProtocol, CSScrollablePageViewControllerProtocol, SBFAuthenticationStatusProvider, CSCoverSheetViewControllerProtocol, CSScrollablePageViewControllerDelegate, CSNotificationDispatcher, CSMainPageContentViewControllerNotificationObserver, UICoordinateSpace, CSCoverSheetViewPresenting, CSTouchEnvironmentStatusProviding, CSUserSessionControlling, CSWallpaperColorProvider, CSWallpaperViewProviding, SBSWidgetMetricsProviding;


#import "CSScrollablePageViewController.h"
#import "CSUserPictureViewController.h"
#import "CSUserPresenceMonitor.h"
#import "CSLogoutButtonViewController.h"
#import "CSLockScreenSettings.h"
#import "CSWidgetMetricsProvider.h"
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
    CSWidgetMetricsProvider *_widgetMetricsProvider;
}


@property (readonly, copy, nonatomic) CSAppearance *activeAppearance;
@property (readonly, copy, nonatomic) CSBehavior *activeBehavior;
@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (readonly, nonatomic) BOOL authenticated;
@property (readonly, nonatomic) CSCombinedListViewController *combinedListViewController; // ivar: _combinedListViewController
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
@property (weak, nonatomic) NSObject<CSWallpaperColorProvider> *wallpaperColorProvider; // ivar: _wallpaperColorProvider
@property (weak, nonatomic) NSObject<CSWallpaperViewProviding> *wallpaperViewProvider; // ivar: _wallpaperViewProvider
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
-(void)_updateSmoothestPermittedPagingStrategy;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)combinedListViewController:(id)arg0 hasContent:(BOOL)arg1 ;
-(void)dealloc;
-(void)notificationsLoadedForSectionIdentifier:(id)arg0 ;
-(void)postNotificationRequest:(id)arg0 ;
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