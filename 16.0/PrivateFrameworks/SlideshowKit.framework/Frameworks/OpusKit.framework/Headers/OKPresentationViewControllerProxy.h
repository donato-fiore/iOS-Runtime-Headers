// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKPRESENTATIONVIEWCONTROLLERPROXY_H
#define OKPRESENTATIONVIEWCONTROLLERPROXY_H

@class OFUIViewController, NSMutableArray, NSString, NSMutableDictionary, NSRecursiveLock, NSOperationQueue, OFReachability, OFUIView, NSArray, OFNSOperationQueue;
@protocol OKCollectionProxyDataSource, OKProducerDelegate, OKSynopsisViewDelegate, OKCouchControllerDelegate, OKClickWheelViewDelegate, OKActionResponderPrivate, OKPresentationViewControllerProxyExport, OKActionResponder, OS_dispatch_queue, OKPresentationViewControllerDelegate, OKPresentationViewControllerEditingDelegate, NSObject;


#import "OKProducerSettings.h"
#import "OKJavaScriptContext.h"
#import "OKClickWheelView.h"
#import "OKCouchController.h"
#import "OKPageViewController.h"
#import "OKNavigatorViewController.h"
#import "OKPresentation.h"
#import "OKPresentationView.h"
#import "OKProducer.h"
#import "OKResourceManager.h"
#import "OKSynopsisView.h"

@interface OKPresentationViewControllerProxy : OFUIViewController <OKCollectionProxyDataSource, OKProducerDelegate, OKSynopsisViewDelegate, OKCouchControllerDelegate, OKClickWheelViewDelegate, OKActionResponderPrivate, OKPresentationViewControllerProxyExport, OKActionResponder>

 {
    BOOL _hasStartedCouchBefore;
    BOOL _rootNavigatorIsReady;
    NSMutableArray *_producerPlugins;
    NSString *_mainNavigatorName;
    OKProducerSettings *_producerSettings;
    NSMutableDictionary *_navigatorViewControllers;
    OKJavaScriptContext *_jsContext;
    NSRecursiveLock *_jsEvaluationInitRecursiveLock;
    NSObject<OS_dispatch_queue> *_jsEvaluationScriptQueue;
    BOOL _jsEvaluationInit;
    NSMutableArray *_audioDuckingStack;
    NSMutableDictionary *_controllerAudioTrackIDs;
    BOOL _isPaused;
    BOOL _isFinished;
    BOOL _hasAppeared;
    BOOL _shouldCleanup;
    id<OKPresentationViewControllerDelegate> *_delegate;
    id<OKPresentationViewControllerEditingDelegate> *_editingDelegate;
    id<NSObject> *_activityLatency;
    CGPoint _arrowKeyMaxPanVelocity;
    CGPoint _arrowKeyPanAcceleration;
    CGPoint _arrowKeyCurrentPanVelocity;
    CGFloat _lastArrowKeyTimestamp;
    BOOL _arrowKeyIsRepeating;
    NSOperationQueue *_preparationOperationQueue;
    OFReachability *_reachability;
    BOOL _isRenderLoggingActive;
}


@property (readonly) OFUIView *actionView;
@property (nonatomic) BOOL allowsResizing; // ivar: _allowsResizing
@property (nonatomic) BOOL arrowKeysSendSwipeAndPan; // ivar: _arrowKeysSendSwipeAndPan
@property (nonatomic) CGFloat audioFadeOutDuration; // ivar: _audioFadeOutDuration
@property (retain, nonatomic) NSArray *audioURLs; // ivar: _audioURLs
@property (nonatomic) CGFloat audioVolume; // ivar: _audioVolume
@property (readonly, nonatomic) OKClickWheelView *clickWheelView; // ivar: _clickWheelView
@property (readonly, retain, nonatomic) OFNSOperationQueue *consumingOperationQueue; // ivar: _consumingOperationQueue
@property (readonly) OKCouchController *couchController; // ivar: _couchController
@property (nonatomic) CGFloat couchInitialDelay; // ivar: _couchInitialDelay
@property (nonatomic) CGFloat couchModeDefaultStepDuration; // ivar: _couchModeDefaultStepDuration
@property (nonatomic) CGFloat couchModeIsReadySpinnerDelay; // ivar: _couchModeIsReadySpinnerDelay
@property (nonatomic) BOOL couchModeLoops; // ivar: _couchModeLoops
@property (readonly) OKPageViewController *currentPageViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<OKPresentationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGSize displaySize; // ivar: _displaySize
@property (nonatomic) BOOL downloadIndicatorEnabled; // ivar: _downloadIndicatorEnabled
@property (nonatomic) NSObject<OKPresentationViewControllerEditingDelegate> *editingDelegate;
@property (readonly, nonatomic) BOOL hasBeenHidden; // ivar: _hasBeenHidden
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) OFNSOperationQueue *highSpeedOperationQueue; // ivar: _highSpeedOperationQueue
@property (nonatomic) CGFloat interactiveTransitionProgressThreshold; // ivar: _interactiveTransitionProgressThreshold
@property (nonatomic) CGFloat interactiveTransitionTrackingBoxRadius; // ivar: _interactiveTransitionTrackingBoxRadius
@property (nonatomic) CGFloat interactiveTransitionVelocityThreshold; // ivar: _interactiveTransitionVelocityThreshold
@property (nonatomic) BOOL interactivityEnabled; // ivar: _interactivityEnabled
@property (nonatomic) BOOL isExporting; // ivar: _isExporting
@property (readonly, retain, nonatomic) OKJavaScriptContext *jsContext;
@property (readonly, nonatomic) BOOL keepAspectRatio; // ivar: _keepAspectRatio
@property (nonatomic) BOOL logRenderingTimes; // ivar: _logRenderingTimes
@property (retain, nonatomic) OKNavigatorViewController *mainNavigatorViewController; // ivar: _mainNavigatorViewController
@property (nonatomic) BOOL muted; // ivar: _muted
@property (nonatomic) NSUInteger playbackMode; // ivar: _playbackMode
@property (readonly, retain, nonatomic) OKPresentation *presentation; // ivar: _presentation
@property (readonly, retain, nonatomic) OKPresentationView *presentationView; // ivar: _presentationView
@property (readonly, retain, nonatomic) OKProducer *producer; // ivar: _producer
@property (readonly, nonatomic) NSInteger reachabilityStatus; // ivar: _reachabilityStatus
@property (readonly, retain, nonatomic) NSString *resolution; // ivar: _resolution
@property (readonly, nonatomic) CGSize resolutionSize; // ivar: _resolutionSize
@property (readonly, retain, nonatomic) OKResourceManager *resourceManager; // ivar: _resourceManager
@property (nonatomic) BOOL rewindAudioOnCouchPotatoLoop; // ivar: _rewindAudioOnCouchPotatoLoop
@property (readonly) Class superclass;
@property (readonly, nonatomic) OKSynopsisView *synopsisView; // ivar: _synopsisView


+(Class)viewClass;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)_hasAppeared;
// -(BOOL)_prepareNavigationOffscreenWithProgressBlock:(id)arg0 colorSpace:(unk)arg1 error:(id)arg2  ;
-(BOOL)_registerProducerPlugin:(id)arg0 ;
-(BOOL)canEditTextInWidget:(id)arg0 ;
-(BOOL)canPanMediaInWidget:(id)arg0 ;
-(BOOL)canPerformAction:(id)arg0 ;
-(BOOL)canStartCouchPotatoPlayback;
-(BOOL)couchController:(id)arg0 thingsAreReadyForNextStep:(id)arg1 withProgress:(*CGFloat)arg2 ;
-(BOOL)couchControllerCanStartPlayback:(id)arg0 ;
-(BOOL)isActivityIndicatorVisible;
-(BOOL)isEditable;
-(BOOL)isFinished;
-(BOOL)isPaused;
-(BOOL)performActionScript:(id)arg0 withAction:(id)arg1 ;
// -(BOOL)prepareWithProgressBlock:(id)arg0 error:(unk)arg1  ;
-(BOOL)sendAction:(id)arg0 toTarget:(id)arg1 ;
-(BOOL)shouldShowPlayIcon;
-(BOOL)shouldShowSynopsisView;
-(BOOL)thingsAreReadyInCurrentPageForCouchController:(id)arg0 ;
-(BOOL)validateChangingTextInWidget:(id)arg0 toSettings:(id)arg1 ;
-(BOOL)validatePanningMediaInWidget:(id)arg0 toState:(id)arg1 ;
-(NSUInteger)countOfDictionaryProxy:(id)arg0 ;
-(id)_registeredProducerPluginWithIdentifier:(id)arg0 ;
-(id)actionBindingForAction:(id)arg0 isTouchCountAgnostic:(BOOL)arg1 ;
-(id)allActionBindings;
-(id)allKeysForDictionaryProxy:(id)arg0 ;
-(id)beginAudioForController:(id)arg0 withAVAsset:(id)arg1 andVolume:(float)arg2 ;
-(id)cachedNavigatorPageViewControllers;
-(id)colorSpace;
-(id)deepestDisplayedPageViewController;
-(id)dictionaryProxy:(id)arg0 objectForKey:(id)arg1 ;
-(id)displayedPageViewControllers;
-(id)dynamicsPushBehaviors;
-(id)evaluateScript:(id)arg0 ;
-(id)evaluateScript:(id)arg0 withCompletionBlock:(id)arg1 ;
// -(id)evaluateScript:(id)arg0 withInfoDictionary:(id)arg1 andCompletionBlock:(id)arg2 forNavigatorViewController:(unk)arg3 pageViewController:(id)arg4 andWidgetView:(id)arg5  ;
-(id)initWithPresentation:(id)arg0 ;
-(id)initWithPresentation:(id)arg0 andMainNavigatorName:(id)arg1 ;
-(id)initWithPreset:(id)arg0 guidelines:(id)arg1 mediaFeeder:(id)arg2 ;
-(id)navigatorViewControllerForNavigatorWithName:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(id)visibleItemKeyPaths;
-(id)visibleMediaItems;
-(id)visibleMediaItemsForProducer:(id)arg0 ;
-(id)visibleMediaObjects;
-(id)visibleWidgets;
-(id)widgetViewFromWidget:(id)arg0 ;
-(struct CGPoint )convertLocationInWindow:(struct CGPoint )arg0 toPage:(id)arg1 ;
-(struct CGPoint )convertLocationInWindow:(struct CGPoint )arg0 toWidget:(id)arg1 ;
-(struct CGPoint )convertPointToBackingLayout:(struct CGPoint )arg0 fromPage:(id)arg1 ;
-(struct CGPoint )convertPointToBackingLayout:(struct CGPoint )arg0 fromWidget:(id)arg1 ;
-(struct CGSize )_fitDisplaySizeForRenderSize:(struct CGSize )arg0 ;
-(struct CGSize )layoutFactor;
-(void)_addSubWidgetViewsFromSubWidgets:(id)arg0 toWidgetView:(id)arg1 ;
-(void)_beginCARenderLogging;
-(void)_cleanupIfNecessary;
-(void)_delayedPrepareForRefresh;
-(void)_doArrowKeyDownForDirection:(NSUInteger)arg0 atTimestamp:(CGFloat)arg1 ;
-(void)_doArrowKeyUpForDirection:(NSUInteger)arg0 atTimestamp:(CGFloat)arg1 ;
-(void)_endCARenderLogging;
-(void)_loadMainNavigatorIfNeeded;
-(void)_prepareInitialCouchPotatoPlayback;
-(void)_reachabilityChanged:(id)arg0 ;
-(void)_repeatArrowKeyForDirection:(id)arg0 ;
-(void)_rootNavigatorDidAppear:(BOOL)arg0 ;
-(void)_rootNavigatorPrepareForDisplay;
-(void)_rootNavigatorWillAppear:(BOOL)arg0 ;
-(void)_startActivityIndicator;
-(void)_startActivityIndicatorWithDelay;
-(void)_startPresentation;
-(void)_stopActivityIndicator:(id)arg0 ;
-(void)_stopActivityIndicatorWithCompletionBlock:(id)arg0 ;
-(void)_stopPresentation;
-(void)_unloadContent;
-(void)addActionBinding:(id)arg0 scope:(NSUInteger)arg1 ;
-(void)allowCouchPlayback;
-(void)audioFinishedPlayingForTrackID:(id)arg0 ;
-(void)audioStartedPlayingForTrackID:(id)arg0 withAVAsset:(id)arg1 andVolume:(float)arg2 ;
-(void)beginEditingTextInWidget:(id)arg0 ;
-(void)beginPanningMediaInWidget:(id)arg0 ;
-(void)cancelCouchPotatoIfNeededWithAction:(id)arg0 ;
-(void)cancelCouchPotatoPlayback;
-(void)clickWheelViewClosePressed:(id)arg0 ;
-(void)clickWheelViewMenuButtonPressed:(id)arg0 ;
-(void)clickWheelViewWillAppear:(id)arg0 ;
-(void)clickWheelViewWillDisappear:(id)arg0 ;
-(void)commonInit;
-(void)couchControllerDidStopPlayback:(id)arg0 ;
-(void)couchControllerPlaybackCompleted:(id)arg0 ;
-(void)couchControllerPlaybackLooped:(id)arg0 ;
-(void)couchControllerStartsWaitingForReadiness:(id)arg0 ;
-(void)couchControllerStopsWaitingForReadiness:(id)arg0 ;
-(void)couchControllerWaitingForReadiness:(id)arg0 withProgress:(CGFloat)arg1 ;
-(void)couchControllerWillStartPlayback:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)displayPresentation:(BOOL)arg0 withCompletionBlock:(id)arg1 ;
-(void)endAudioForController:(id)arg0 andTrackID:(id)arg1 ;
-(void)endEditingTextInWidget:(id)arg0 finalSettings:(id)arg1 ;
-(void)endPanningMediaInWidget:(id)arg0 finalState:(id)arg1 ;
-(void)fadeAllAudioTracksWithDuration:(CGFloat)arg0 ;
-(void)fadeMainNavigatorTracksWithDuration:(CGFloat)arg0 ;
-(void)forceCleanup;
-(void)initSynopsisView;
-(void)initWheelController;
-(void)instantPause;
-(void)instantPlay;
-(void)instantResume;
-(void)navigateToItemAtKeyPath:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)prepareCouchPotatoPlayback;
-(void)prepareForRefreshWithDelay:(CGFloat)arg0 ;
-(void)preventCouchPlayback;
-(void)producer:(id)arg0 didProcessLiveAuthoringKeyPaths:(id)arg1 ;
-(void)removeActionBinding:(id)arg0 ;
-(void)removeAllActionBindings;
-(void)renderingTimeLogMessage:(id)arg0 withTimestamp:(CGFloat)arg1 ;
-(void)restart;
-(void)setActivityIndicatorVisible:(BOOL)arg0 ;
-(void)setPropertyWithValue:(id)arg0 forKey:(id)arg1 inJSObject:(struct OpaqueJSValue *)arg2 ;
-(void)startCouchPotatoPlayback;
-(void)synopsisView:(id)arg0 didSelectItem:(id)arg1 ;
-(void)synopsisViewDidBegin:(id)arg0 ;
-(void)synopsisViewDidEnd:(id)arg0 ;
-(void)synopsisViewUpdated:(id)arg0 withProgress:(CGFloat)arg1 ;
-(void)synopsisViewWillBegin:(id)arg0 ;
-(void)updateActivityIndicatorWithProgress:(CGFloat)arg0 ;
-(void)updateDisplayResolution;
-(void)updateMotion;
-(void)updateTimeLeft;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif