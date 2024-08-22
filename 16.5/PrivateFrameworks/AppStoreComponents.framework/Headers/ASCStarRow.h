// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCSTARROW_H
#define ASCSTARROW_H

@class UIView, UIColor, UIImageView, CAReplicatorLayer;



@interface ASCStarRow : UIView

@property (readonly, nonatomic) CGFloat maxNumberOfStars; // ivar: _maxNumberOfStars
@property (nonatomic) CGFloat numberOfStarsInRow; // ivar: _numberOfStarsInRow
@property (readonly, nonatomic) UIColor *starColor; // ivar: _starColor
@property (readonly, nonatomic) UIImageView *starImageView; // ivar: _starImageView
@property (readonly, nonatomic) CAReplicatorLayer *starLayer; // ivar: _starLayer
@property (readonly, nonatomic) NSInteger starSize; // ivar: _starSize


+(id)starForSize:(NSInteger)arg0 withFill:(BOOL)arg1 ;
+(struct CGSize )sizeForStarRowWithSizeOfStar:(NSInteger)arg0 andNumberOfStars:(CGFloat)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStarSize:(NSInteger)arg0 fill:(BOOL)arg1 starColor:(id)arg2 andMaxNumberOfStars:(CGFloat)arg3 ;
-(struct CGRect )frameForCurrentRating:(CGFloat)arg0 andStarSize:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)modifyStarLayerRectToHideOuterPaddingUsing:(id)arg0 ;


@end


#endif