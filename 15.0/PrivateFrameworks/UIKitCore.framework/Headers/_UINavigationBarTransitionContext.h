// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UINAVIGATIONBARTRANSITIONCONTEXT_H
#define _UINAVIGATIONBARTRANSITIONCONTEXT_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "_UINavigationBarContentViewLayout.h"
#import "_UINavigationBarLargeTitleViewLayout.h"
#import "_UIBarBackground.h"
#import "_UINavigationBarContentView.h"
#import "_UINavigationBarLayout.h"
#import "_UINavigationBarLargeTitleView.h"
#import "UINavigationBar.h"
#import "_UINavigationBarModernPromptView.h"
#import "_UINavigationBarItemStack.h"
#import "UIView.h"

@interface _UINavigationBarTransitionContext : NSObject {
    _UINavigationBarContentViewLayout *_fromContentLayout;
    _UINavigationBarContentViewLayout *_toContentLayout;
    _UINavigationBarLargeTitleViewLayout *_fromLargeTitleLayout;
    _UINavigationBarLargeTitleViewLayout *_toLargeTitleLayout;
    int _largeTitleTransitionType;
    ? _navigationBarTransitionContextFlags;
    NSMutableSet *_clippingViews;
}


@property (nonatomic) BOOL allowLargeTitles;
@property (nonatomic) NSInteger apiVersion; // ivar: _apiVersion
@property (nonatomic) CGFloat backgroundAlpha; // ivar: _backgroundAlpha
@property (retain, nonatomic) _UIBarBackground *backgroundView; // ivar: _backgroundView
@property (nonatomic) BOOL beginWithLargeTitle;
@property (nonatomic) BOOL beginWithTransparencyAllowed;
@property (nonatomic) BOOL compact;
@property (retain, nonatomic) _UINavigationBarContentView *contentView; // ivar: _contentView
@property (readonly, nonatomic) CGFloat contentViewFittingHeight;
@property (readonly, nonatomic) CGFloat contentViewMaxY;
@property (nonatomic) BOOL endWithLargeTitle;
@property (nonatomic) BOOL endWithTransparencyAllowed;
@property (retain, nonatomic) _UINavigationBarLayout *fromLayout; // ivar: _fromLayout
@property (nonatomic, setter=setRTL:) BOOL isRTL;
@property (retain, nonatomic) _UINavigationBarLargeTitleView *largeTitleView; // ivar: _largeTitleView
@property (nonatomic) UINavigationBar *navigationBar; // ivar: _navigationBar
@property (nonatomic) BOOL observedScrollViewOffsetIsApplicable;
@property (retain, nonatomic) _UINavigationBarModernPromptView *promptView; // ivar: _promptView
@property (nonatomic) BOOL sharesContentViewLayouts;
@property (retain, nonatomic) _UINavigationBarItemStack *stack; // ivar: _stack
@property (nonatomic) CGPoint startingContentOffsetForObservedScrollView; // ivar: _startingContentOffsetForObservedScrollView
@property (retain, nonatomic) _UINavigationBarLayout *toLayout; // ivar: _toLayout
@property (readonly, nonatomic) int transition;
@property (nonatomic) BOOL twoPart;
@property (readonly, nonatomic) UIView *viewFadingInFromCustomAlpha;
@property (readonly, nonatomic) UIView *viewUsingEaseInCurve;
@property (readonly, nonatomic) UIView *viewUsingEaseOutCurve;


+(id)contextForTransition:(int)arg0 ;
-(BOOL)shouldPerformTwoPartCrossfadeTransition;
-(id)description;
-(void)_addClippingView:(id)arg0 ;
// -(void)_animateAsTwoPartsWithOverlap:(CGFloat)arg0 partOne:(id)arg1 partTwo:(unk)arg2  ;
// -(void)_animateAsTwoPartsWithOverlapIfNecessaryPartOne:(id)arg0 partTwo:(unk)arg1  ;
// -(void)_animateAsTwoPartsWithoutOverlap:(id)arg0 partTwo:(unk)arg1  ;
-(void)_animateBackgroundView;
-(void)_animateFromBottomPaletteAtEdge:(NSUInteger)arg0 ;
-(void)_prepareToBottomPaletteAtEdge:(NSUInteger)arg0 ;
-(void)_removeAllClippingViews;
-(void)_resetContentAndLargeTitleViewCompleted:(BOOL)arg0 ;
-(void)_updateIncomingLayoutWidthToMatchOutgoingLayout;
-(void)animate;
-(void)cancel;
-(void)complete;
-(void)prepare;
-(void)recordUpdates:(id)arg0 ;
-(void)setAllLargeTitleLayoutsVisible;


@end


#endif