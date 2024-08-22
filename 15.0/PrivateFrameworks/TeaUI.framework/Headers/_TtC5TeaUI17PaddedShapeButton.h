// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC5TEAUI17PADDEDSHAPEBUTTON_H
#define _TTC5TEAUI17PADDEDSHAPEBUTTON_H

@class UIButton;



@interface _TtC5TeaUI17PaddedShapeButton : UIButton {
    ? onTap;
    ? onMenuPresentation;
    ? _backgroundColor;
}


@property (nonatomic) CGPoint contentOffset; // ivar: contentOffset
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL highlighted;


-(BOOL)isEnabled;
-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif