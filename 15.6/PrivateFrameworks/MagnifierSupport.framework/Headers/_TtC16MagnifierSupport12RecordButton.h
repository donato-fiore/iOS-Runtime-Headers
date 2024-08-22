// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16MAGNIFIERSUPPORT12RECORDBUTTON_H
#define _TTC16MAGNIFIERSUPPORT12RECORDBUTTON_H

@class UIButton;



@interface _TtC16MagnifierSupport12RecordButton : UIButton {
    ? isRecording;
    ? _buttonInnerLayer;
    ? _outerLineWidth;
    ? _animationDuration;
    ? _centerShapeFillColor;
    ? $__lazy_storage_$_squareBezierPath;
    ? $__lazy_storage_$_circleBezierPath;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)awakeFromNib;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif