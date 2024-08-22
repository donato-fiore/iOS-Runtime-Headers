// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSEPARATORLINEVIEW_H
#define HKSEPARATORLINEVIEW_H

@class UIView, UIColor;



@interface HKSeparatorLineView : UIView

@property (copy, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) NSInteger dashStyle; // ivar: _dashStyle
@property (nonatomic) CGFloat leadingMargin; // ivar: _leadingMargin
@property (nonatomic) CGFloat separatorThickness; // ivar: _separatorThickness
@property (nonatomic) CGFloat trailingMargin; // ivar: _trailingMargin


+(id)_hkecg_separatorView;
-(BOOL)_isVertical;
-(BOOL)isOpaque;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_applyStyleToContext:(struct CGContext *)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif