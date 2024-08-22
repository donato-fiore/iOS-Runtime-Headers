// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT22SHAPEOPACITYSLIDERVIEW_H
#define _TTC8PAPERKIT22SHAPEOPACITYSLIDERVIEW_H

@class UISlider;



@interface _TtC8PaperKit22ShapeOpacitySliderView : UISlider {
    ? gradient;
    ? trackImage;
    ? axis;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )thumbRectForBounds:(struct CGRect )arg0 trackRect:(struct CGRect )arg1 value:(float)arg2 ;
-(struct CGRect )trackRectForBounds:(struct CGRect )arg0 ;
-(void)didMoveToSuperview;
-(void)layoutSubviews;


@end


#endif