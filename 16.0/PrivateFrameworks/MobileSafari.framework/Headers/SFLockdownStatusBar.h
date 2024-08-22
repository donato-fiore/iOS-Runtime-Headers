// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFLOCKDOWNSTATUSBAR_H
#define SFLOCKDOWNSTATUSBAR_H

@class UIView, UILabel, NSString, NSArray;
@protocol SFNavigationBarItemObserver, SFUnifiedBarContentView;


#import "_SFFluidProgressView.h"
#import "SFUnifiedBarMetrics.h"
#import "SFUnifiedBarTheme.h"
#import "SFNavigationBarItem.h"

@interface SFLockdownStatusBar : UIView <SFNavigationBarItemObserver, SFUnifiedBarContentView>

 {
    UILabel *_lockdownModeStatusLabel;
    _SFFluidProgressView *_progressView;
    NSInteger _currentLockdownStatus;
}


@property (nonatomic) CGFloat barBackgroundAlpha;
@property (readonly, nonatomic) SFUnifiedBarMetrics *barMetrics;
@property (retain, nonatomic) SFUnifiedBarTheme *barTheme;
@property (readonly, nonatomic, getter=isContentHidden) BOOL contentHidden;
@property (nonatomic) NSDirectionalEdgeInsets contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCurrentlyScrollable;
@property (nonatomic) CGPoint midpointForCenteredContent;
@property (retain, nonatomic) SFNavigationBarItem *navigationBarItem; // ivar: _navigationBarItem
@property (nonatomic) BOOL pinsScrollPositionToTrailingEdgeDuringResize;
@property (readonly, nonatomic) CGFloat preferredBottomSpacing;
@property (readonly, nonatomic) CGSize preferredSize;
@property (readonly, nonatomic) CGFloat preferredSquishedBottomSpacing;
@property (readonly, nonatomic) CGFloat preferredTopSpacing;
@property (nonatomic) BOOL shouldAnimateNavigationBarItemChanges; // ivar: _shouldAnimateNavigationBarItemChanges
@property (nonatomic) BOOL showsSquishedAccessoryViews;
@property (readonly, nonatomic) BOOL showsSquishedContent;
@property (nonatomic) NSUInteger sizeClass;
@property (nonatomic) CGFloat squishTransformFactor;
@property (readonly, nonatomic) NSArray *squishedAccessoryViews;
@property (nonatomic) UIEdgeInsets squishedContentInset;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat themeColorVisibility;
@property (readonly, nonatomic) CGFloat titleBaselineInsetFromBottom;
@property (readonly, nonatomic) CGFloat titleCapHeightInsetFromTop;
@property (readonly, nonatomic) CGFloat topSquishedSpacingAdjustment;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateLabelWithLockdownStatus:(NSInteger)arg0 ;
-(void)_updateLockdownStatusLabel;
-(void)_updateLockdownStatusLabelAnimated:(BOOL)arg0 ;
-(void)navigationBarItemDidUpdateLockdownModeAnnotation:(id)arg0 ;


@end


#endif