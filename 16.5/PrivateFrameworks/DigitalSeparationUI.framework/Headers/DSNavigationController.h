// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSNAVIGATIONCONTROLLER_H
#define DSNAVIGATIONCONTROLLER_H

@class OBNavigationController, LAContext, NSDictionary, UINavigationController, NSString, DSSharingPermissions, UIViewController, UIWindow, NSArray, NSMutableSet, NSMutableDictionary;
@protocol DSNavigationDelegate, UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate;


#import "DSRemoteUILoader.h"

@interface DSNavigationController : OBNavigationController <DSNavigationDelegate, UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate>



@property (retain, nonatomic) LAContext *authContext; // ivar: _authContext
@property (retain, nonatomic) NSDictionary *cachedPanes; // ivar: _cachedPanes
@property (retain, nonatomic) UINavigationController *connectionErrorNavigation; // ivar: _connectionErrorNavigation
@property (nonatomic) NSInteger currentChapter; // ivar: _currentChapter
@property (nonatomic) NSInteger currentChapterForAnalytics; // ivar: _currentChapterForAnalytics
@property (nonatomic) NSInteger currentFlowType; // ivar: _currentFlowType
@property (nonatomic) Class currentPaneType; // ivar: _currentPaneType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) DSSharingPermissions *fetchedSharingPermissions; // ivar: fetchedSharingPermissions
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isShowingNetworkError; // ivar: _isShowingNetworkError
@property (retain, nonatomic) UIViewController *networkErrorController; // ivar: _networkErrorController
@property (retain, nonatomic) UIWindow *obfuscationWindow; // ivar: _obfuscationWindow
@property (retain, nonatomic) NSArray *panesRequiringNetwork; // ivar: _panesRequiringNetwork
@property (retain, nonatomic) DSRemoteUILoader *remoteUILoader; // ivar: _remoteUILoader
@property (retain, nonatomic) NSDictionary *safetyResetChapters; // ivar: _safetyResetChapters
@property (retain, nonatomic) NSArray *safetyResetNavigationOrder; // ivar: _safetyResetNavigationOrder
@property (retain, nonatomic) NSDictionary *sharingActivityChapters; // ivar: _sharingActivityChapters
@property (retain, nonatomic) NSArray *sharingActivityNavigationOrder; // ivar: _sharingActivityNavigationOrder
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableSet *unsharedApps; // ivar: _unsharedApps
@property (retain, nonatomic) NSMutableSet *unsharedPeople; // ivar: _unsharedPeople
@property (retain, nonatomic) NSMutableSet *unsharedPermissions; // ivar: _unsharedPermissions
@property (retain, nonatomic) NSMutableDictionary *unsharedResourcesBySource; // ivar: _unsharedResourcesBySource


+(void)initialize;
-(BOOL)isNetworkReachable;
-(BOOL)shouldFinishFlow;
-(id)flowTypeForAnalytics;
-(id)init;
-(id)initStartingWithEmergencyReset;
-(id)initStartingWithMangeSharing;
-(id)paneBeforePane:(id)arg0 ;
-(id)paneInstanceForType:(Class)arg0 ;
-(id)popViewControllerAnimated:(BOOL)arg0 ;
-(void)_reachabilityChanged:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)didEnterBackground:(id)arg0 ;
-(void)displayNetworkError;
-(void)finishFlow;
-(void)goToCustomizeSharing;
-(void)hideNetworkError;
-(void)learnMorePressedForController:(id)arg0 withURL:(id)arg1 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)popToPreviousPane:(id)arg0 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)pushNextPane;
-(void)pushPaneAfterPaneType:(Class)arg0 ;
-(void)pushPaneType:(Class)arg0 ;
-(void)pushPaneType:(Class)arg0 loadRemoteUI:(BOOL)arg1 ;
-(void)pushPaneWithController:(id)arg0 paneType:(Class)arg1 shouldShow:(BOOL)arg2 ;
-(void)quickExit;
-(void)resetRemoteUI;
-(void)sendSummaryAnalyticsWithQuickExit:(BOOL)arg0 finalScreen:(BOOL)arg1 ;
-(void)setupCancelButtonWithController:(id)arg0 ;
-(void)setupChapterIndicatorWithController:(id)arg0 ;
-(void)setupConnectionError;
-(void)setupQuickExitButtonWithController:(id)arg0 ;
-(void)startFlowWithType:(NSInteger)arg0 ;
-(void)updateCurrentChapterWithPaneType:(Class)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willEnterForeground:(id)arg0 ;


@end


#endif