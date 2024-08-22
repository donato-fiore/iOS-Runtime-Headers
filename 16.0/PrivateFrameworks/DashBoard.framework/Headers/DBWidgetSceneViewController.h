// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBWIDGETSCENEVIEWCONTROLLER_H
#define DBWIDGETSCENEVIEWCONTROLLER_H

@class BKSTouchDeliveryPolicyAssertion, NSXPCConnection, NSString, FBSDisplayConfiguration, NSArray, NSXPCListener, UIView, NSTimer, FBScene, UIView<UIScenePresentation>, UITapGestureRecognizer, NSMutableSet, FBApplicationUpdateScenesTransaction;
@protocol CRSUIDashboardWidgetWindowService, DBWidgetFocusableViewDelegate, FBSceneManagerObserver, FBSceneObserver, NSXPCListenerDelegate, BSInvalidatable, DBProcessMonitorObserving, UIScenePresenter;


#import "DBWidgetViewController.h"
#import "DBTodayViewSynchronizedAnimationManager.h"
#import "DBApplicationInfo.h"

@interface DBWidgetSceneViewController : DBWidgetViewController <CRSUIDashboardWidgetWindowService, DBWidgetFocusableViewDelegate, FBSceneManagerObserver, FBSceneObserver, NSXPCListenerDelegate, BSInvalidatable, DBProcessMonitorObserving>



@property (retain, nonatomic) DBTodayViewSynchronizedAnimationManager *animationManager; // ivar: _animationManager
@property (readonly, nonatomic) DBApplicationInfo *applicationInfo;
@property (retain, nonatomic) BKSTouchDeliveryPolicyAssertion *cancelTouchesInIsolatedViewAssertion; // ivar: _cancelTouchesInIsolatedViewAssertion
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (nonatomic) NSUInteger deactivationReasons; // ivar: _deactivationReasons
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL debugSnapshotLabelEnabled; // ivar: _debugSnapshotLabelEnabled
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration; // ivar: _displayConfiguration
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSArray *focusableItemViews; // ivar: _focusableItemViews
@property (nonatomic) BOOL foreground; // ivar: _foreground
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialTouchTimestamp; // ivar: _initialTouchTimestamp
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) UIView *loadingView; // ivar: _loadingView
@property (readonly, nonatomic) DBApplicationInfo *proxiedApplicationInfo;
@property (nonatomic) NSUInteger proxyAppCrashTally; // ivar: _proxyAppCrashTally
@property (nonatomic) BOOL proxySceneContentReady; // ivar: _proxySceneContentReady
@property (copy, nonatomic) NSString *requester; // ivar: _requester
@property (nonatomic) CGFloat retryDelay; // ivar: _retryDelay
@property (retain, nonatomic) NSTimer *retryTimer; // ivar: _retryTimer
@property (retain, nonatomic) FBScene *scene; // ivar: _scene
@property (retain, nonatomic) UIView<UIScenePresentation> *sceneHostView; // ivar: _sceneHostView
@property (readonly, nonatomic) NSString *sceneID;
@property (retain, nonatomic) NSObject<UIScenePresenter> *scenePresenter; // ivar: _scenePresenter
@property (retain, nonatomic) UITapGestureRecognizer *selectTapGestureRecognizer; // ivar: _selectTapGestureRecognizer
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger targetAppCrashTally; // ivar: _targetAppCrashTally
@property (copy, nonatomic) NSString *targetBundleIdentifier; // ivar: _targetBundleIdentifier
@property (retain, nonatomic) NSMutableSet *touchActionDisabledRequesters; // ivar: _touchActionDisabledRequesters
@property (retain, nonatomic) UIView *touchActionView; // ivar: _touchActionView
@property (retain, nonatomic) BKSTouchDeliveryPolicyAssertion *touchDeliveryPolicyAssertion; // ivar: _touchDeliveryPolicyAssertion
@property (retain, nonatomic) UITapGestureRecognizer *touchTapGestureRecognizer; // ivar: _touchTapGestureRecognizer
@property (retain, nonatomic) FBApplicationUpdateScenesTransaction *transaction; // ivar: _transaction
@property (nonatomic) unsigned int widgetContextId; // ivar: _widgetContextId
@property (nonatomic) NSUInteger widgetStyle; // ivar: _widgetStyle


-(BOOL)entireWidgetFocusable;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(NSInteger)_mapStyle;
-(NSInteger)_uiStyle;
-(id)initWithEnvironment:(id)arg0 animationManager:(id)arg1 ;
-(id)linearFocusItems;
-(id)loadingIconImage;
-(id)preferredFocusEnvironments;
-(void)_animateLoadingViewRemovalIfNecessary;
-(void)_beginTouchCancellation;
-(void)_endTouchCancellation;
-(void)_handleTapGesture:(id)arg0 ;
-(void)_invalidateRetryTimer;
-(void)_performSceneUpdateForeground:(BOOL)arg0 ;
-(void)_postTransactionUpdateSceneSettingsForScene:(id)arg0 ;
-(void)_retryTimerFired:(id)arg0 ;
-(void)_scheduleForegroundRetry;
-(void)_scrollViewDidEndDragging:(id)arg0 ;
-(void)_scrollViewWillBeginDragging:(id)arg0 ;
-(void)_setTouchActionDisabled:(BOOL)arg0 forRequester:(id)arg1 ;
-(void)_updateTouchActionDisabled;
-(void)clientSetContentReady;
-(void)clientSetFocusableItems:(id)arg0 ;
-(void)clientSetWantsLargeSize:(BOOL)arg0 fenceHandle:(id)arg1 animationSettings:(id)arg2 ;
-(void)focusableItem:(id)arg0 didChangeFocused:(BOOL)arg1 ;
-(void)focusableItem:(id)arg0 didChangePressed:(BOOL)arg1 ;
-(void)invalidate;
-(void)prepareLoadingViewAnimated:(BOOL)arg0 ;
-(void)processMonitor:(id)arg0 didHandleDeathOfBundleIdentifier:(id)arg1 ;
-(void)processMonitor:(id)arg0 shouldHandleDeathOfBundleIdentifier:(id)arg1 isCrash:(BOOL)arg2 ;
-(void)replaceLoadingViewWithView:(id)arg0 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneDidInvalidate:(id)arg0 ;
-(void)sceneManager:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)selectedFocusableItem:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)updateContextId:(unsigned int)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif