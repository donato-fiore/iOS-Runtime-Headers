// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCOLORSLIDERTHUMBVIEW_H
#define NTKCOLORSLIDERTHUMBVIEW_H

@class UIView, UIColor;



@interface NTKColorSliderThumbView : UIView {
    UIView *_border;
    UIView *_content;
}


@property (retain, nonatomic) UIColor *color; // ivar: _color


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif