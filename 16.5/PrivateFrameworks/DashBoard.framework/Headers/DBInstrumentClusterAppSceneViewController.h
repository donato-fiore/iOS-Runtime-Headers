// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBINSTRUMENTCLUSTERAPPSCENEVIEWCONTROLLER_H
#define DBINSTRUMENTCLUSTERAPPSCENEVIEWCONTROLLER_H

@class UIViewController, NSString, NSURL, NSTimer, FBScene, UIView<UIScenePresentation>, FBApplicationUpdateScenesTransaction;
@protocol FBSceneObserver, BSInvalidatable, DBProcessMonitorObserving, DBEnvironment, UIScenePresenter;



@interface DBInstrumentClusterAppSceneViewController : UIViewController <FBSceneObserver, BSInvalidatable, DBProcessMonitorObserving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (retain, nonatomic) NSURL *lastClusterURL; // ivar: _lastClusterURL
@property (nonatomic) CGRect layoutFrame; // ivar: _layoutFrame
@property (nonatomic) NSUInteger proxyAppCrashTally; // ivar: _proxyAppCrashTally
@property (copy, nonatomic) NSString *requester; // ivar: _requester
@property (nonatomic) CGFloat retryDelay; // ivar: _retryDelay
@property (retain, nonatomic) NSTimer *retryTimer; // ivar: _retryTimer
@property (nonatomic) UIEdgeInsets safeAreaInsets; // ivar: _safeAreaInsets
@property (retain, nonatomic) FBScene *scene; // ivar: _scene
@property (retain, nonatomic) UIView<UIScenePresentation> *sceneHostView; // ivar: _sceneHostView
@property (readonly, nonatomic) NSString *sceneID; // ivar: _sceneID
@property (retain, nonatomic) NSObject<UIScenePresenter> *scenePresenter; // ivar: _scenePresenter
@property (readonly, nonatomic) NSString *slotId; // ivar: _slotId
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger targetAppCrashTally; // ivar: _targetAppCrashTally
@property (copy, nonatomic) NSString *targetBundleIdentifier; // ivar: _targetBundleIdentifier
@property (retain, nonatomic) FBApplicationUpdateScenesTransaction *transaction; // ivar: _transaction


-(id)_applicationInfo;
-(id)_applySceneSettingsToSettings:(id)arg0 foreground:(BOOL)arg1 sceneSpecification:(id)arg2 ;
-(id)_proxiedApplicationInfo;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 slotId:(id)arg1 ;
-(struct CGRect )_frame;
-(struct CGRect )_scaleFrameIfNecessary:(struct CGRect )arg0 ;
-(void)_invalidateRetryTimer;
-(void)_invalidateScene;
-(void)_performSceneUpdateForeground:(BOOL)arg0 ;
-(void)_performSceneUpdateForeground:(BOOL)arg0 settings:(id)arg1 ;
-(void)_retryTimerFired:(id)arg0 ;
-(void)_scheduleForegroundRetry;
-(void)_updateSceneHostViewFrameScaleIfNecessary;
-(void)_updateSceneID;
-(void)backgroundScene;
-(void)foregroundSceneWithURL:(id)arg0 ;
-(void)invalidate;
-(void)processMonitor:(id)arg0 didHandleDeathOfBundleIdentifier:(id)arg1 ;
-(void)processMonitor:(id)arg0 shouldHandleDeathOfBundleIdentifier:(id)arg1 isCrash:(BOOL)arg2 ;
-(void)sceneDidInvalidate:(id)arg0 ;
-(void)updateSceneWithAnimationSettings:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif