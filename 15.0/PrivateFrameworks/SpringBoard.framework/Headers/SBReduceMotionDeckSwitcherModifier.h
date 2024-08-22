// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBREDUCEMOTIONDECKSWITCHERMODIFIER_H
#define SBREDUCEMOTIONDECKSWITCHERMODIFIER_H



#import "SBDeckSwitcherModifier.h"

@interface SBReduceMotionDeckSwitcherModifier : SBDeckSwitcherModifier



-(CGFloat)_cardWidth;
-(CGFloat)_switcherCardScale;
-(CGFloat)depthForIndex:(NSUInteger)arg0 displayItemsCount:(NSUInteger)arg1 scrollProgress:(CGFloat)arg2 ;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenScale;
-(CGFloat)leadingOffsetForIndex:(NSUInteger)arg0 displayItemsCount:(NSUInteger)arg1 scrollProgress:(CGFloat)arg2 ;
-(CGFloat)opacityForIndex:(NSUInteger)arg0 scrollProgress:(CGFloat)arg1 ;
-(CGFloat)scrollProgressForIndex:(NSUInteger)arg0 ;
-(CGFloat)scrollProgressForIndex:(NSUInteger)arg0 displayItemsCount:(NSUInteger)arg1 frameOrigin:(CGFloat)arg2 ;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleOpacityForIndex:(NSUInteger)arg0 scrollProgress:(CGFloat)arg1 ;
-(CGFloat)wallpaperScale;
-(NSUInteger)indexForScrollProgress:(CGFloat)arg0 displayItemsCount:(NSUInteger)arg1 frameOrigin:(CGFloat)arg2 ;
-(id)scrollViewAttributes;
-(struct CGPoint )_pagingOrigin;
-(struct CGPoint )adjustedOffsetForOffset:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 startPoint:(struct CGPoint )arg2 locationInView:(struct CGPoint )arg3 horizontalVelocity:(*CGFloat)arg4 verticalVelocity:(*CGFloat)arg5 ;
-(struct CGSize )_interpageSpacingForPaging;
-(void)resetAdjustedScrollingState;


@end


#endif