// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEKSUBJECTINDICATORVIEW_H
#define CEKSUBJECTINDICATORVIEW_H

@class UIView, UIImageView;



@interface CEKSubjectIndicatorView : UIView

@property (readonly, nonatomic) UIImageView *_bottomLeftCornerView; // ivar: __bottomLeftCornerView
@property (readonly, nonatomic) UIImageView *_bottomRightCornerView; // ivar: __bottomRightCornerView
@property (readonly, nonatomic) UIView *_containerView; // ivar: __containerView
@property (readonly, nonatomic) UIImageView *_fullSizeIndicatorView; // ivar: __fullSizeIndicatorView
@property (readonly, nonatomic) UIImageView *_topLeftCornerView; // ivar: __topLeftCornerView
@property (readonly, nonatomic) UIImageView *_topRightCornerView; // ivar: __topRightCornerView
@property (nonatomic, getter=isInactive) BOOL inactive; // ivar: _inactive
@property (nonatomic, getter=isPulsing) BOOL pulsing;
@property (nonatomic) NSInteger shape; // ivar: _shape


+(struct CGSize )_fixedSubjectIndicatorSizeForReferenceBounds:(struct CGSize )arg0 withScale:(CGFloat)arg1 ;
+(struct CGSize )fixedSizeWithScale:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)startScalingWithExpansionWidth:(CGFloat)arg0 duration:(CGFloat)arg1 repeatCount:(NSUInteger)arg2 ;
-(void)startScalingWithExpansionWidth:(CGFloat)arg0 duration:(CGFloat)arg1 repeatCount:(NSUInteger)arg2 timingFunction:(id)arg3 ;
-(void)stopScalingWithDuration:(CGFloat)arg0 ;


@end


#endif