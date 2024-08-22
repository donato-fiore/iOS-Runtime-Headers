// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKPAGEUXVIEWCONTROLLER_H
#define OKPAGEUXVIEWCONTROLLER_H

@class NSMutableArray, UIGravityBehavior, UICollisionBehavior, NSMutableDictionary, NSString, UIDynamicAnimator, NSArray;
@protocol UIDynamicAnimatorDelegate, UICollisionBehaviorDelegate, OKCollectionProxyDataSource, OKWidgetViewDelegate, OKPageViewControllerProxyExport;


#import "OKPageViewController.h"
#import "OKPageView.h"

@interface OKPageUXViewController : OKPageViewController <UIDynamicAnimatorDelegate, UICollisionBehaviorDelegate, OKCollectionProxyDataSource, OKWidgetViewDelegate, OKPageViewControllerProxyExport>

 {
    NSMutableArray *_newWidgetViews;
    NSMutableArray *_pageViewZones;
    CGSize _pageViewZoneSize;
    UIGravityBehavior *_dynamicsGravityBehavior;
    BOOL _dynamicsGravityBehaviorMotionDriven;
    UICollisionBehavior *_dynamicsPageCollisionBehavior;
    NSMutableDictionary *_dynamicsWidgetCollisionBehaviors;
    NSMutableDictionary *_dynamicsPushBehaviors;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) UIDynamicAnimator *dynamicsAnimator; // ivar: _dynamicsAnimator
@property (readonly, nonatomic) BOOL dynamicsEnabled; // ivar: _dynamicsEnabled
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint lastParallaxOffset; // ivar: _lastParallaxOffset
@property (readonly, retain, nonatomic) OKPageView *pageView; // ivar: _pageView
@property (readonly, nonatomic) BOOL parallaxEnabled; // ivar: _parallaxEnabled
@property (nonatomic) CGFloat parallaxRatioX; // ivar: _parallaxRatioX
@property (nonatomic) CGFloat parallaxRatioY; // ivar: _parallaxRatioY
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSArray *widgetViews; // ivar: _widgetViews


+(Class)viewClass;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)hasWidgetFocused;
-(BOOL)prepareForDisplay;
-(BOOL)prepareForUnload;
-(BOOL)prepareForWarmup;
-(BOOL)settingDynamicsCollisionConfinementEnabled;
-(BOOL)settingDynamicsGravityEnabled;
-(NSUInteger)countOfDictionaryProxy:(id)arg0 ;
-(id)_preparseLayoutString:(id)arg0 targetView:(*id)arg1 anchorView:(*id)arg2 ;
-(id)_remoteWidgetsForWidgetView:(id)arg0 keyPath:(id)arg1 ;
-(id)addWidgetViewWithTemplateName:(id)arg0 name:(id)arg1 andSettings:(id)arg2 ;
-(id)allKeysForDictionaryProxy:(id)arg0 ;
-(id)currentRemoteWidgets;
-(id)dictionaryProxy:(id)arg0 objectForKey:(id)arg1 ;
-(id)mediaURLs;
-(id)newWidgetViewWithTemplateName:(id)arg0 name:(id)arg1 andSettings:(id)arg2 ;
-(id)pageViewForWidgetView:(id)arg0 ;
-(id)pageViewZonesInRect:(struct CGRect )arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(id)visibleWidgets;
-(id)widgetViewForName:(id)arg0 recursively:(BOOL)arg1 ;
-(id)widgetViewNames;
-(id)widgetViewResolution:(id)arg0 ;
-(id)widgetViewsInRect:(struct CGRect )arg0 ;
-(struct CGPoint )convertPointWithMotionAndParallax:(struct CGPoint )arg0 andZPosition:(CGFloat)arg1 ;
-(struct CGPoint )parallaxWithOffsetX:(CGFloat)arg0 offsetY:(CGFloat)arg1 zPosition:(CGFloat)arg2 ;
-(struct CGRect )calculateVisibleRectForWidget:(id)arg0 ;
-(struct CGRect )calculateVisibleRectForWidgetRect:(struct CGRect )arg0 withParallax:(CGFloat)arg1 ;
-(void)addWidgetViewInPageViewZones:(id)arg0 ;
-(void)applySettings;
-(void)collisionBehavior:(id)arg0 beganContactForItem:(id)arg1 withBoundaryIdentifier:(id)arg2 atPoint:(struct CGPoint )arg3 ;
-(void)collisionBehavior:(id)arg0 beganContactForItem:(id)arg1 withItem:(id)arg2 atPoint:(struct CGPoint )arg3 ;
-(void)collisionBehavior:(id)arg0 endedContactForItem:(id)arg1 withBoundaryIdentifier:(id)arg2 ;
-(void)collisionBehavior:(id)arg0 endedContactForItem:(id)arg1 withItem:(id)arg2 ;
-(void)commonInit;
-(void)dealloc;
-(void)dynamicAnimatorDidPause:(id)arg0 ;
-(void)dynamicAnimatorWillResume:(id)arg0 ;
-(void)instantPause;
-(void)instantResume;
-(void)layoutDidChange;
-(void)networkStatusDidChange:(NSInteger)arg0 ;
-(void)prepareAllWidgets;
-(void)prepareForRefresh;
-(void)prepareForReload;
-(void)prepareWidgetsInRect:(struct CGRect )arg0 ;
-(void)reloadDynamics;
-(void)reloadPageViewZones;
-(void)reloadPageViewZonesForSubwidgets:(id)arg0 withParallax:(CGFloat)arg1 ;
-(void)reloadPageViewZonesWithSize:(struct CGSize )arg0 ;
-(void)removeWidgetView:(id)arg0 ;
-(void)removeWidgetViewInPageViewZones:(id)arg0 ;
-(void)resetDynamics;
-(void)resolutionDidChange;
-(void)setSettingDynamicsCollisionConfinementEnabled:(BOOL)arg0 ;
-(void)setSettingDynamicsEnabled:(BOOL)arg0 ;
-(void)setSettingDynamicsGravityAngle:(float)arg0 ;
-(void)setSettingDynamicsGravityEnabled:(BOOL)arg0 ;
-(void)setSettingDynamicsGravityMagnitude:(float)arg0 ;
-(void)setSettingDynamicsGravityMotionDriven:(BOOL)arg0 ;
-(void)setSettingDynamicsPushBehaviors:(id)arg0 ;
-(void)setSettingParallaxEnabled:(BOOL)arg0 ;
-(void)setSettingParallaxRatioX:(CGFloat)arg0 ;
-(void)setSettingParallaxRatioY:(CGFloat)arg0 ;
-(void)updateDynamics;
-(void)updateLayoutSteps;
-(void)updateMotion;
-(void)updateMotionForWidgetView:(id)arg0 ;
-(void)updateParallax;
-(void)updateParallaxForWidgetView:(id)arg0 ;
-(void)updateParallaxWithOffsetX:(CGFloat)arg0 offsetY:(CGFloat)arg1 ;
-(void)updateWidgetViewInPageViewZones:(id)arg0 ;
-(void)updateWithMotionTiltRotationX:(CGFloat)arg0 tiltRotationY:(CGFloat)arg1 tiltRotationZ:(CGFloat)arg2 ;
-(void)viewDidLoad;
-(void)widgetView:(id)arg0 addHighSpeedOperations:(id)arg1 andConsumingOperations:(id)arg2 ;
-(void)widgetViewCancelAllOperations:(id)arg0 ;
-(void)widgetViewCancelAllOperations:(id)arg0 withIdentifier:(id)arg1 ;
-(void)widgetViewsInDisplayRect:(struct CGRect )arg0 displaySet:(id)arg1 andWarmupRect:(struct CGRect )arg2 warmupSet:(id)arg3 ;


@end


#endif