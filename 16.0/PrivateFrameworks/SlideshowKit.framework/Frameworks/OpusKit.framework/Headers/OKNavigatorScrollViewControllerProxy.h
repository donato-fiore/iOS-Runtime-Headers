// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKNAVIGATORSCROLLVIEWCONTROLLERPROXY_H
#define OKNAVIGATORSCROLLVIEWCONTROLLERPROXY_H

@class UIScrollView, NSTimer, NSMutableArray, NSMutableDictionary, NSString;
@protocol OKNavigatorScrollViewControllerProxyExport, UIScrollViewDelegate;


#import "OKNavigatorViewController.h"
#import "OKPageViewController.h"
#import "OKTimerAnimation.h"

@interface OKNavigatorScrollViewControllerProxy : OKNavigatorViewController <OKNavigatorScrollViewControllerProxyExport, UIScrollViewDelegate>

 {
    OKPageViewController *_pageViewController;
    UIScrollView *_scrollView;
    CGFloat _velocityTimestamp;
    CGFloat _currentVelocity;
    CGFloat _currentTilt;
    CGFloat _currentRotationZ;
    NSTimer *_autopanningTimer;
    CGFloat _velocity2;
    NSMutableArray *_registeredObjects;
    NSMutableDictionary *_registeredActions;
    NSString *_viewDidScrollActionScript;
    CGPoint _lastOffset;
    OKTimerAnimation *_scrollingAnimation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat rotationZ; // ivar: _rotationZ
@property (readonly) Class superclass;
@property (nonatomic) CGFloat tilt; // ivar: _tilt
@property (nonatomic) CGFloat velocity; // ivar: _velocity


+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(?)createElementWithObject:(?)arg0 atOffset:(?)arg1 withProbabilitywithLimit;
-(?)createList;
-(BOOL)prepareForDisplay;
-(BOOL)prepareForUnload;
-(BOOL)prepareForWarmup;
-(id)keyForOffset:(struct CGPoint )arg0 ;
-(id)sectorKeysForRect:(struct CGRect )arg0 ;
-(id)settingViewDidScrollActionScript;
-(struct CGPoint )contentOffset;
-(struct CGRect )contentBounds;
-(struct CGRect )visiblePageRect;
-(struct CGSize )contentSize;
-(struct CGSize )layoutFactor;
-(void)applySettings;
-(void)cancelCouchPotatoPlayback;
-(void)cleanupScrollEvents;
-(void)dealloc;
-(void)deleteElement:(struct _OKEventElement *)arg0 inList:(struct _OKEventList *)arg1 ;
-(void)doApplyMotion:(id)arg0 ;
-(void)doMotionAction:(id)arg0 ;
-(void)doPanAction:(id)arg0 ;
-(void)doSwipeAction:(id)arg0 ;
-(void)insertElement:(struct _OKEventElement *)arg0 inList:(struct _OKEventList *)arg1 ;
-(void)navigateToItemAtKeyPath:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)navigateToOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 duration:(CGFloat)arg2 timingFunctionName:(id)arg3 completion:(id)arg4 ;
-(void)navigateToWidgetWithName:(id)arg0 animated:(BOOL)arg1 duration:(CGFloat)arg2 completion:(id)arg3 ;
-(void)registerObject:(id)arg0 forActionAtOffset:(struct CGPoint )arg1 probability:(NSUInteger)arg2 andLimit:(NSUInteger)arg3 ;
-(void)registerObjectOnScrollingEvent:(id)arg0 ;
-(void)removeRegisteredObject:(id)arg0 forActionAtOffset:(struct CGPoint )arg1 continuous:(BOOL)arg2 ;
-(void)scrollViewDidScrollProxy;
-(void)setSettingContentSize:(struct CGSize )arg0 ;
-(void)setSettingViewDidScrollActionScript:(id)arg0 ;
-(void)triggerAction;
-(void)updatePageViewController;
-(void)updateParallax;
-(void)viewDidLoad;


@end


#endif