// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIREFRESHCONTROL_H
#define UIREFRESHCONTROL_H

@class NSAttributedString;
@protocol _UIRefreshControlHosting;


#import "UIControl.h"
#import "_UIRefreshControlContentView.h"
#import "UIColor.h"

@interface UIRefreshControl : UIControl {
    NSInteger _style;
    _UIRefreshControlContentView *_contentView;
    CGFloat _refreshControlHeight;
    CGFloat _visibleHeight;
    CGFloat _snappingHeight;
    CGFloat _additionalTopInset;
    BOOL _insetsApplied;
    BOOL _adjustingInsets;
    UIEdgeInsets _appliedInsets;
    id<_UIRefreshControlHosting> *_host;
}


@property (readonly, nonatomic) BOOL _areInsetsBeingApplied;
@property (weak, nonatomic, getter=_host, setter=_setHost:) NSObject<_UIRefreshControlHosting> *_host;
@property (readonly, nonatomic) BOOL _hostAdjustsContentOffset;
@property (readonly, nonatomic) CGFloat _refreshControlHeight;
@property (readonly, nonatomic) CGFloat _snappingHeight;
@property (readonly, nonatomic) CGFloat _visibleHeight;
@property (readonly, nonatomic, getter=_appliedInsets) UIEdgeInsets appliedInsets;
@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) NSInteger refreshControlState; // ivar: _refreshControlState
@property (readonly, nonatomic, getter=isRefreshing) BOOL refreshing;
@property (readonly, nonatomic) NSInteger style;
@property (retain, nonatomic) UIColor *tintColor;


+(BOOL)_allowsUnsupportedMacIdiomBehavior;
+(Class)_contentViewClassForStyle:(NSInteger)arg0 ;
+(id)_defaultColor;
+(void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)arg0 ;
-(BOOL)_canTransitionFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(BOOL)_isApplyingInsets;
-(CGFloat)_impactIntensityForVelocity:(CGFloat)arg0 ;
-(CGFloat)_scrollViewHeight;
-(CGFloat)_stiffnessForVelocity:(CGFloat)arg0 ;
-(CGFloat)_visibleHeightForContentOffset:(struct CGPoint )arg0 origin:(struct CGPoint )arg1 ;
-(CGFloat)revealedFraction;
-(NSInteger)_recomputeNewState;
-(NSUInteger)_controlEventsForActionTriggered;
-(id)_contentView;
-(id)_scrollView;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(struct CGPoint )_originForContentOffset:(struct CGPoint )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addInsetHeight:(CGFloat)arg0 ;
-(void)_addInsets;
-(void)_didScroll;
-(void)_endRefreshingAnimated:(BOOL)arg0 ;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_removeInsetHeight:(CGFloat)arg0 ;
-(void)_removeInsets;
-(void)_resizeToFitContents;
-(void)_setVisibleHeight:(CGFloat)arg0 ;
-(void)_update;
-(void)_updateConcealingMask;
-(void)_updateHiddenStateIfNeeded;
-(void)_updateSnappingHeight;
-(void)beginRefreshing;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endRefreshing;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)sizeToFit;


@end


#endif