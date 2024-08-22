// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCSTARRATINGVIEW_H
#define ASCSTARRATINGVIEW_H

@class UIView, UIColor;


#import "ASCStarRow.h"

@interface ASCStarRatingView : UIView

@property (readonly, nonatomic) ASCStarRow *filledStarRowView; // ivar: _filledStarRowView
@property (readonly, nonatomic) ASCStarRow *hollowStarRowView; // ivar: _hollowStarRowView
@property (readonly, nonatomic) NSInteger maxNumberOfStars; // ivar: _maxNumberOfStars
@property (nonatomic) CGFloat rating; // ivar: _rating
@property (readonly, nonatomic) UIColor *starColor; // ivar: _starColor
@property (readonly, nonatomic) NSInteger starSize; // ivar: _starSize


+(id)greyFill;
-(id)accessibilityLabel;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithMaxNumberOfStars:(NSInteger)arg0 starSize:(NSInteger)arg1 andFill:(BOOL)arg2 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeWithStarSize:(NSInteger)arg0 andNumberOfStars:(NSInteger)arg1 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif