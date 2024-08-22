// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKPAGEVIEWCONTROLLER_H
#define OKPAGEVIEWCONTROLLER_H

@class OFUIViewController, NSString, NSMutableDictionary, NSMutableArray, NSRecursiveLock, OFUIView, NSArray;
@protocol OKSettingsSupport, OKActionResponderPrivate, OKCollectionProxyDataSource, OKPresentationReadinessPrivate, OKActionResponder, OKPresentationReadiness;


#import "OKPresentationViewController.h"
#import "OKNavigatorViewController.h"
#import "OKPresentationPage.h"

@interface OKPageViewController : OFUIViewController <OKSettingsSupport, OKActionResponderPrivate, OKCollectionProxyDataSource, OKPresentationReadinessPrivate, OKActionResponder, OKPresentationReadiness>

 {
    CGFloat _perspective;
    BOOL _motionTiltXEnabled;
    BOOL _motionTiltYEnabled;
    BOOL _motionTiltZEnabled;
    CGSize _motionXMinMax;
    CGSize _motionYMinMax;
    CGSize _motionZMinMax;
    CGFloat _lastMotionRotationX;
    CGFloat _lastMotionRotationY;
    CGFloat _lastMotionRotationZ;
    OKPresentationViewController *_presentationViewController;
    NSString *_prepareActionScript;
    NSString *_canPerformActionScript;
    NSString *_willAppearActionScript;
    NSString *_appearingActionScript;
    NSString *_didAppearActionScript;
    NSString *_willDisappearActionScript;
    NSString *_disappearingActionScript;
    NSString *_didDisappearActionScript;
    NSString *_layoutChangedActionScript;
    NSMutableDictionary *_actionBindings;
    BOOL _isReady;
    NSMutableArray *_readyNotificationBlocks;
    NSRecursiveLock *_readyRecursiveLock;
}


@property (readonly) OFUIView *actionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIEdgeInsets eventsInset; // ivar: _eventsInset
@property (nonatomic) BOOL hasSettingsApplied; // ivar: _hasSettingsApplied
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *layoutSteps; // ivar: _layoutSteps
@property (readonly, nonatomic) BOOL motionEnabled; // ivar: _motionEnabled
@property (readonly, retain, nonatomic) NSArray *musicURLs; // ivar: _musicURLs
@property (nonatomic) OKNavigatorViewController *navigatorViewController; // ivar: _navigatorViewController
@property (nonatomic) BOOL needsApplySettings; // ivar: _needsApplySettings
@property (readonly, retain, nonatomic) OKPresentationPage *page; // ivar: _page
@property (readonly, nonatomic) NSUInteger prepareMode; // ivar: _prepareMode
@property (nonatomic) BOOL prepareWidgetsManually; // ivar: _prepareWidgetsManually
@property (nonatomic) OKPresentationViewController *presentationViewController;
@property (retain, nonatomic) OKNavigatorViewController *subNavigatorViewController; // ivar: _subNavigatorViewController
@property (readonly) Class superclass;


+(Class)viewClass;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)canPerformAction:(id)arg0 ;
-(BOOL)hasWidgetFocused;
-(BOOL)interactivityEnabled;
-(BOOL)isReady:(BOOL)arg0 ;
-(BOOL)performActionScript:(id)arg0 withAction:(id)arg1 ;
-(BOOL)prepareForDisplay;
-(BOOL)prepareForUnload;
-(BOOL)prepareForWarmup;
-(BOOL)sendAction:(id)arg0 toTarget:(id)arg1 ;
-(BOOL)supportsReadiness;
-(CGFloat)readyProgress:(BOOL)arg0 ;
-(NSUInteger)countOfDictionaryProxy:(id)arg0 ;
-(id)actionBindingForAction:(id)arg0 isTouchCountAgnostic:(BOOL)arg1 ;
-(id)actionBindings;
-(id)allActionBindings;
-(id)allKeysForDictionaryProxy:(id)arg0 ;
-(id)currentRemoteWidgets;
-(id)deepestDisplayedPageViewController;
-(id)dictionaryProxy:(id)arg0 objectForKey:(id)arg1 ;
-(id)displayedPageViewControllers;
-(id)initWithPage:(id)arg0 ;
-(id)layoutSettingsKeys;
-(id)mediaURLs;
-(id)name;
-(id)settingObjectForKey:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(id)visibleWidgets;
-(struct CGSize )layoutFactor;
-(struct CGSize )parentLayoutFactor;
-(struct UIEdgeInsets )settingEventsInset;
-(void)addActionBinding:(id)arg0 scope:(NSUInteger)arg1 ;
-(void)applyLayoutSettings;
-(void)applySettings;
-(void)applySettingsIfNeeded;
-(void)becomeReady;
-(void)cancelCouchPotatoPlayback;
-(void)commonInit;
-(void)dealloc;
// -(void)evaluateScript:(id)arg0 withInfoDictionary:(id)arg1 andCompletionBlock:(id)arg2 forWidgetView:(unk)arg3  ;
-(void)instantPause;
-(void)instantResume;
-(void)layoutDidChange;
-(void)networkStatusDidChange:(NSInteger)arg0 ;
-(void)notifyWhenBecomesReady:(id)arg0 ;
-(void)pageAppearingWithProgress:(float)arg0 animated:(BOOL)arg1 ;
-(void)pageDidAppear:(BOOL)arg0 ;
-(void)pageDidDisappear:(BOOL)arg0 ;
-(void)pageDisappearingWithProgress:(float)arg0 animated:(BOOL)arg1 ;
-(void)pageWillAppear:(BOOL)arg0 ;
-(void)pageWillDisappear:(BOOL)arg0 ;
-(void)prepareAllWidgets;
-(void)prepareForMode:(NSUInteger)arg0 ;
-(void)prepareForRefresh;
-(void)prepareForReload;
-(void)prepareWidgetsInRect:(struct CGRect )arg0 ;
-(void)readinessDidChange:(BOOL)arg0 ;
-(void)removeActionBinding:(id)arg0 ;
-(void)removeAllActionBindings;
-(void)removeAllReadyNotifications;
-(void)resignReady;
-(void)resolutionDidChange;
-(void)setNeedsPrepare;
-(void)setSettingActionBindings:(id)arg0 ;
-(void)setSettingAppearingActionScript:(id)arg0 ;
-(void)setSettingCanPerformActionScript:(id)arg0 ;
-(void)setSettingDidAppearActionScript:(id)arg0 ;
-(void)setSettingDidDisappearActionScript:(id)arg0 ;
-(void)setSettingDisappearingActionScript:(id)arg0 ;
-(void)setSettingEventsInset:(struct UIEdgeInsets )arg0 ;
-(void)setSettingLayoutChangedActionScript:(id)arg0 ;
-(void)setSettingLayoutSteps:(id)arg0 ;
-(void)setSettingMotionEnabled:(BOOL)arg0 ;
-(void)setSettingMotionTiltXEnabled:(BOOL)arg0 ;
-(void)setSettingMotionTiltYEnabled:(BOOL)arg0 ;
-(void)setSettingMotionTiltZEnabled:(BOOL)arg0 ;
-(void)setSettingMotionXMinMax:(struct CGSize )arg0 ;
-(void)setSettingMotionYMinMax:(struct CGSize )arg0 ;
-(void)setSettingMotionZMinMax:(struct CGSize )arg0 ;
-(void)setSettingMusic:(id)arg0 ;
-(void)setSettingPerspective:(CGFloat)arg0 ;
-(void)setSettingPrepareActionScript:(id)arg0 ;
-(void)setSettingWillAppearActionScript:(id)arg0 ;
-(void)setSettingWillDisappearActionScript:(id)arg0 ;
-(void)setUserSettingObject:(id)arg0 forKey:(id)arg1 ;
-(void)updateLayoutSteps;
-(void)updateMotion;
-(void)updateWithMotionTiltRotationX:(CGFloat)arg0 tiltRotationY:(CGFloat)arg1 tiltRotationZ:(CGFloat)arg2 ;


@end


#endif