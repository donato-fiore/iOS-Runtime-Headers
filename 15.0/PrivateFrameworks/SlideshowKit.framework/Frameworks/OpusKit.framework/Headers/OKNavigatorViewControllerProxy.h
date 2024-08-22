// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKNAVIGATORVIEWCONTROLLERPROXY_H
#define OKNAVIGATORVIEWCONTROLLERPROXY_H

@class OFUIViewController, NSString, NSMutableSet, NSMutableArray, NSRecursiveLock, OFUIView, NSMutableDictionary;
@protocol OKCollectionProxyDataSource, OKSettingsSupport, OKActionResponderPrivate, OKViewControllerAudioSupport, OKAudioPlaylistDelegate, OKPresentationReadinessPrivate, OKNavigatorViewControllerProxyExport, OKActionResponder, OKPresentationReadiness;


#import "OKAudioPlaylist.h"
#import "OKPageViewController.h"
#import "OKPresentationNavigator.h"
#import "OKNavigatorView.h"
#import "OKPresentationViewController.h"

@interface OKNavigatorViewControllerProxy : OFUIViewController <OKCollectionProxyDataSource, OKSettingsSupport, OKActionResponderPrivate, OKViewControllerAudioSupport, OKAudioPlaylistDelegate, OKPresentationReadinessPrivate, OKNavigatorViewControllerProxyExport, OKActionResponder, OKPresentationReadiness>

 {
    NSString *_willAppearActionScript;
    NSString *_didAppearActionScript;
    NSString *_willDisappearActionScript;
    NSString *_didDisappearActionScript;
    BOOL _needsApplySettings;
    BOOL _hasSettingsApplied;
    NSString *_prepareActionScript;
    NSString *_canPerformActionScript;
    NSString *_navigationScript;
    NSMutableSet *_actionBindings;
    float _requiredDuckLevel;
    NSString *_playlistTrackID;
    CGFloat _audioVolume;
    BOOL _audioPlaylistLoops;
    BOOL _isReady;
    NSMutableArray *_readyNotificationBlocks;
    NSRecursiveLock *_readyRecursiveLock;
}


@property (readonly) OFUIView *actionView;
@property (retain, nonatomic) OKAudioPlaylist *audioPlaylist; // ivar: _audioPlaylist
@property (nonatomic) BOOL audioPlaylistEnabled; // ivar: _audioPlaylistEnabled
@property (retain, nonatomic) OKPageViewController *currentPageViewController; // ivar: _currentPageViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) OKPresentationNavigator *navigator; // ivar: _navigator
@property (readonly, retain, nonatomic) OKNavigatorView *navigatorView;
@property (retain, nonatomic) NSMutableDictionary *pageViewControllers; // ivar: _pageViewControllers
@property (nonatomic) OKPageViewController *parentPageViewController; // ivar: _parentPageViewController
@property (readonly, nonatomic) NSUInteger prepareMode; // ivar: _prepareMode
@property (nonatomic) OKPresentationViewController *presentationViewController; // ivar: _presentationViewController
@property (readonly) Class superclass;


+(Class)viewClass;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)canPerformAction:(id)arg0 ;
-(BOOL)interactivityEnabled;
-(BOOL)isReady:(BOOL)arg0 ;
-(BOOL)isRootNavigator;
-(BOOL)performActionScript:(id)arg0 withAction:(id)arg1 ;
-(BOOL)prepareForDisplay;
-(BOOL)prepareForUnload;
-(BOOL)prepareForWarmup;
-(BOOL)sendAction:(id)arg0 toTarget:(id)arg1 ;
-(BOOL)supportsReadiness;
-(CGFloat)readyProgress:(BOOL)arg0 ;
-(CGFloat)requiredDuckLevel;
-(NSUInteger)countOfDictionaryProxy:(id)arg0 ;
-(float)settingAudioVolume;
-(id)actionBindingForAction:(id)arg0 isTouchCountAgnostic:(BOOL)arg1 ;
-(id)allActionBindings;
-(id)allKeysForDictionaryProxy:(id)arg0 ;
-(id)cachedPageViewControllerForPageWithNames:(id)arg0 ;
-(id)cachedPageViewControllers;
-(id)deepestDisplayedPageViewController;
-(id)dictionaryProxy:(id)arg0 objectForKey:(id)arg1 ;
-(id)displayedPageViewControllers;
-(id)dynamicsPushBehaviors;
-(id)initWithNavigator:(id)arg0 ;
-(id)layoutSettingsKeys;
-(id)name;
-(id)pageViewControllerForPageWithName:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)settingBackgroundColor;
-(id)settingObjectForKey:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct CGRect )settingFrame;
-(struct CGRect )visiblePageRect;
-(struct CGSize )layoutFactor;
-(struct CGSize )parentLayoutFactor;
-(void)_playAudioPlaylist;
-(void)_setAudioURLs:(id)arg0 ;
-(void)_stopAudioPlaylist;
-(void)addActionBinding:(id)arg0 scope:(NSUInteger)arg1 ;
-(void)applyLayoutSettings;
-(void)applySettings;
-(void)applySettingsIfNeeded;
-(void)audioFinishedPlayingWithAVAsset:(id)arg0 ;
-(void)audioStartedPlayingWithAVAsset:(id)arg0 ;
-(void)becomeReady;
-(void)beginDuckingToLevel:(CGFloat)arg0 fadeDuration:(CGFloat)arg1 ;
-(void)beginFadingWithDuration:(CGFloat)arg0 ;
-(void)cancelCouchPotatoPlayback;
-(void)commonInit;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)endDucking;
-(void)endFading;
// -(void)evaluateScript:(id)arg0 withInfoDictionary:(id)arg1 andCompletionBlock:(id)arg2 forPageViewController:(unk)arg3 andWidgetView:(id)arg4  ;
-(void)gotoPageWithName:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)instantPause;
-(void)instantResume;
-(void)layoutDidChange;
-(void)navigateToItemAtKeyPath:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)navigateToPageWithName:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)navigatorDidAppear:(BOOL)arg0 ;
-(void)navigatorDidDisappear:(BOOL)arg0 ;
-(void)navigatorWillAppear:(BOOL)arg0 ;
-(void)navigatorWillDisappear:(BOOL)arg0 ;
-(void)networkStatusDidChange:(NSInteger)arg0 ;
-(void)notifyWhenBecomesReady:(id)arg0 ;
-(void)prepareForMode:(NSUInteger)arg0 ;
-(void)prepareForRefresh;
-(void)prepareForReload;
-(void)readinessDidChange:(BOOL)arg0 ;
-(void)removeActionBinding:(id)arg0 ;
-(void)removeAllActionBindings;
-(void)removeAllReadyNotifications;
-(void)resignReady;
-(void)resolutionDidChange;
-(void)rewindAudioPlaylist;
-(void)setNeedsApplySettings;
-(void)setNeedsPrepare;
-(void)setPlaybackAudioVolume:(CGFloat)arg0 ;
-(void)setSettingAudioPlaylist:(id)arg0 ;
-(void)setSettingAudioPlaylistLoops:(BOOL)arg0 ;
-(void)setSettingAudioRequiredDuckLevel:(float)arg0 ;
-(void)setSettingAudioVolume:(float)arg0 ;
-(void)setSettingBackgroundColor:(id)arg0 ;
-(void)setSettingCanPerformActionScript:(id)arg0 ;
-(void)setSettingDidAppearActionScript:(id)arg0 ;
-(void)setSettingDidDisappearActionScript:(id)arg0 ;
-(void)setSettingFrame:(struct CGRect )arg0 ;
-(void)setSettingNavigationScript:(id)arg0 ;
-(void)setSettingPrepareActionScript:(id)arg0 ;
-(void)setSettingWillAppearActionScript:(id)arg0 ;
-(void)setSettingWillDisappearActionScript:(id)arg0 ;
-(void)setUserSettingObject:(id)arg0 forKey:(id)arg1 ;
-(void)uncachePageViewControllerForPageWithNames:(id)arg0 ;
-(void)updateWithMotionTiltRotationX:(CGFloat)arg0 tiltRotationY:(CGFloat)arg1 tiltRotationZ:(CGFloat)arg2 ;
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