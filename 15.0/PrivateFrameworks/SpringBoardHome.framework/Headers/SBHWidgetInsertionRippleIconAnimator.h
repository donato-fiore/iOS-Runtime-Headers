// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHWIDGETINSERTIONRIPPLEICONANIMATOR_H
#define SBHWIDGETINSERTIONRIPPLEICONANIMATOR_H

@class UIView, NSMapTable, _UIPortalView, CADisplayLink, NSString;
@protocol SBIconViewObserver;

#import <Foundation/Foundation.h>

#import "SBIconListView.h"
#import "SBIconView.h"
#import "SBWidgetIcon.h"
#import "SBHWidgetSettings.h"
#import "SBHRippleSimulation.h"

@interface SBHWidgetInsertionRippleIconAnimator : NSObject <SBIconViewObserver>

 {
    SBIconListView *_iconListView;
    SBIconView *_referenceIconView;
    CGPoint _referenceIconViewOriginInWindow;
    SBWidgetIcon *_widgetIcon;
    SBIconView *_widgetIconView;
    BOOL _widgetIconSizeIsLarge;
    SBIconListView *_additionalIconListView;
    UIView *_rippleIconsPortalContainerView;
    UIView *_rippleIconsPortalContainerViewForAdditionalIconListView;
    NSMapTable *_portalViewsForIconViews;
    NSMapTable *_gridCoordinateForIcons;
    UIView *_portalContainerView;
    _UIPortalView *_widgetIconPortalView;
    SBHWidgetSettings *_settings;
    BOOL _startedAnimation;
    SBHRippleSimulation *_rippleSimulation;
    NSUInteger _rowOffset;
    CADisplayLink *_displayLink;
    id *_animationCompletion;
    id *_preludeBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL keepsJumpingIconAboveListViewAsLongAsPossible; // ivar: _keepsJumpingIconAboveListViewAsLongAsPossible
@property (readonly) Class superclass;


-(id)initWithIconListView:(id)arg0 widgetIcon:(id)arg1 referenceLayout:(id)arg2 referenceIconView:(id)arg3 additionalIconListView:(id)arg4 preludeBlock:(id)arg5 ;
-(struct CGPoint )_centerOfIconViewAssumingCenteredAnchorPoint:(id)arg0 ;
-(void)_createPortalViewsForIconViews;
-(void)_createPortalViewsForIconViewsInIconListView:(id)arg0 dropIconListView:(id)arg1 withPortalContainerView:(id)arg2 widgetIconCenter:(struct CGPoint )arg3 ;
-(void)_displayLinkFired:(id)arg0 ;
-(void)_finishRippleAnimation;
-(void)_finishRippleAnimationEarlyForIconView:(id)arg0 ;
-(void)_layoutRippleIconViews;
-(void)_performJumpAnimationWithCompletion:(id)arg0 ;
-(void)_performWidgetIconScaleOvershootAnimation;
-(void)_playImpactHapticAfterDelay:(CGFloat)arg0 ;
-(void)_reparentPortalViewIntoIconListViewAfterDelay:(CGFloat)arg0 ;
-(void)_reparentPortalViewIntoIconListViewNow;
-(void)_startRippleAnimationNow;
-(void)_startRippleAnimationWithDelay:(CGFloat)arg0 ;
-(void)animateWithCompletion:(id)arg0 ;
-(void)iconViewDidBecomeWindowless:(id)arg0 ;
-(void)iconViewWasRecycled:(id)arg0 ;


@end


#endif