// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKSOLARDISKVIEW_H
#define NTKSOLARDISKVIEW_H

@class UIView, CLKDevice;



@interface NTKSolarDiskView : UIView

@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (nonatomic) CGFloat horizonLine; // ivar: _horizonLine
@property (retain, nonatomic) UIView *sunDownView; // ivar: _sunDownView
@property (retain, nonatomic) UIView *sunUpView; // ivar: _sunUpView


-(id)initWithSize:(CGFloat)arg0 forDevice:(id)arg1 ;
-(void)layoutSubviews;
-(void)setCenter:(struct CGPoint )arg0 ;


@end


#endif