// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIPROGRESSBARVIEW_H
#define VUIPROGRESSBARVIEW_H

@class UIView, UIColor;



@interface VUIProgressBarView : UIView

@property (retain, nonatomic) UIColor *completeTintColor; // ivar: _completeTintColor
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (retain, nonatomic) UIColor *gradientEndColor; // ivar: _gradientEndColor
@property (retain, nonatomic) UIColor *gradientStartColor; // ivar: _gradientStartColor
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (retain, nonatomic) UIColor *progressTintColor; // ivar: _progressTintColor
@property (nonatomic) BOOL shouldProgressBarUseRoundCorner; // ivar: _shouldProgressBarUseRoundCorner
@property (nonatomic) BOOL useMaterial; // ivar: _useMaterial


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setgradientEndColor:(id)arg0 ;


@end


#endif