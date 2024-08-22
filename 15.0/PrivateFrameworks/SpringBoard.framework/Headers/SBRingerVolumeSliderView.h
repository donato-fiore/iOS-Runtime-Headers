// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBRINGERVOLUMESLIDERVIEW_H
#define SBRINGERVOLUMESLIDERVIEW_H

@class UIView;



@interface SBRingerVolumeSliderView : UIView

@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIView *fillView; // ivar: _fillView
@property (nonatomic) CGFloat value; // ivar: _value


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif