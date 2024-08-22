// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCSKELETONLABEL_H
#define ASCSKELETONLABEL_H

@class UILabel, UIColor;


#import "ASCContentSkeleton.h"

@interface ASCSkeletonLabel : UILabel

@property (readonly, nonatomic) NSInteger effectiveSkeletonAlignment;
@property (copy, nonatomic) ASCContentSkeleton *skeleton; // ivar: _skeleton
@property (copy, nonatomic) UIColor *skeletonColor; // ivar: _skeletonColor
@property (nonatomic) BOOL wantsAncesterFocusMarqueeAfterClearingSkeleton; // ivar: _wantsAncesterFocusMarqueeAfterClearingSkeleton


-(CGFloat)_baselineOffsetFromBottom;
-(CGFloat)_firstBaselineOffsetFromTop;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )skeletonRectForBounds:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)drawSkeletonInRect:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif