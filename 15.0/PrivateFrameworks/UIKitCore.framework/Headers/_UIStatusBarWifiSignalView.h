// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARWIFISIGNALVIEW_H
#define _UISTATUSBARWIFISIGNALVIEW_H

@class UIStatusBarSignalView;


#import "_UIStatusBarCycleAnimation.h"

@interface _UIStatusBarWifiSignalView : UIStatusBarSignalView

@property (retain, nonatomic) _UIStatusBarCycleAnimation *cycleAnimation; // ivar: _cycleAnimation
@property (nonatomic) BOOL needsCycleAnimationUpdate; // ivar: _needsCycleAnimationUpdate


+(CGFloat)_barThicknessAtIndex:(NSUInteger)arg0 iconSize:(NSInteger)arg1 ;
+(CGFloat)_interspaceForIconSize:(NSInteger)arg0 ;
+(CGFloat)_totalWidthForIconSize:(NSInteger)arg0 ;
+(id)_barImageWithSize:(struct CGSize )arg0 forScale:(CGFloat)arg1 distance:(CGFloat)arg2 angle:(CGFloat)arg3 centerPoint:(struct CGPoint )arg4 cornerRadius:(CGFloat)arg5 thickness:(CGFloat)arg6 ;
+(struct CGSize )_intrinsicContentSizeForNumberOfBars:(NSInteger)arg0 iconSize:(NSInteger)arg1 ;
-(CGFloat)_barCornerRadius;
-(id)accessibilityHUDRepresentation;
-(struct CGSize )intrinsicContentSize;
-(void)_colorsDidChange;
-(void)_iconSizeDidChange;
-(void)_setNeedsUpdateCycleAnimation;
-(void)_updateActiveBars;
-(void)_updateBars;
-(void)_updateCycleAnimationIfNeeded;
-(void)_updateCycleAnimationNow;
-(void)_updateFromMode:(NSInteger)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;


@end


#endif