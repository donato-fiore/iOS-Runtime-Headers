// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBINSTRUMENTCLUSTERROOTVIEWCONTROLLER_H
#define DBINSTRUMENTCLUSTERROOTVIEWCONTROLLER_H

@class UIViewController, NSString, FBSDisplayConfiguration, NSURL, NSTimer, FBScene, UIView<UIScenePresentation>, FBApplicationUpdateScenesTransaction;
@protocol DBEnvironmentConfigurationObserving, FBSceneObserver, BSInvalidatable, DBProcessMonitorObserving, FBSceneManagerObserver, DBEnvironment, UIScenePresenter;



@interface DBInstrumentClusterRootViewController : UIViewController <DBEnvironmentConfigurationObserving, FBSceneObserver, BSInvalidatable, DBProcessMonitorObserving, FBSceneManagerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration; // ivar: _displayConfiguration
@property (weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (retain, nonatomic) NSURL *lastClusterURL; // ivar: _lastClusterURL
@property (nonatomic) NSUInteger proxyAppCrashTally; // ivar: _proxyAppCrashTally
@property (copy, nonatomic) NSString *requester; // ivar: _requester
@property (nonatomic) CGFloat retryDelay; // ivar: _retryDelay
@property (retain, nonatomic) NSTimer *retryTimer; // ivar: _retryTimer
@property (retain, nonatomic) FBScene *scene; // ivar: _scene
@property (retain, nonatomic) UIView<UIScenePresentation> *sceneHostView; // ivar: _sceneHostView
@property (readonly, nonatomic) NSString *sceneID; // ivar: _sceneID
@property (retain, nonatomic) NSObject<UIScenePresenter> *scenePresenter; // ivar: _scenePresenter
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger targetAppCrashTally; // ivar: _targetAppCrashTally
@property (retain, nonatomic) NSString *targetBundleIdentifier; // ivar: _targetBundleIdentifier
@property (retain, nonatomic) FBApplicationUpdateScenesTransaction *transaction; // ivar: _transaction


-(id)_applySceneSettingsToSettings:(id)arg0 foreground:(BOOL)arg1 sceneSpecification:(id)arg2 ;
-(id)_bundleIdentifier;
-(id)applicationInfo;
-(id)initWithEnvironment:(id)arg0 ;
-(id)proxiedApplicationInfo;
-(struct CGRect )_frame;
-(void)_invalidateRetryTimer;
-(void)_invalidateScene;
-(void)_performSceneUpdateForeground:(BOOL)arg0 ;
-(void)_performSceneUpdateForeground:(BOOL)arg0 settings:(id)arg1 ;
-(void)_retryTimerFired:(id)arg0 ;
-(void)_scheduleForegroundRetry;
-(void)_updateSceneID;
-(void)backgroundScene;
-(void)dealloc;
-(void)foregroundSceneWithURL:(id)arg0 ;
-(void)invalidate;
-(void)processMonitor:(id)arg0 didHandleDeathOfBundleIdentifier:(id)arg1 ;
-(void)processMonitor:(id)arg0 shouldHandleDeathOfBundleIdentifier:(id)arg1 isCrash:(BOOL)arg2 ;
-(void)sceneDidInvalidate:(id)arg0 ;
-(void)sceneManager:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)updateSceneWithAnimationSettings:(id)arg0 ;


@end


#endif