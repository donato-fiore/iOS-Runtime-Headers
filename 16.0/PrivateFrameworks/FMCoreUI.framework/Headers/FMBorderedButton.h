// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMBORDEREDBUTTON_H
#define FMBORDEREDBUTTON_H

@class Button, UIColor;



@interface FMBorderedButton : Button

@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (nonatomic) CGFloat borderWidth;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) BOOL hairlineBorder; // ivar: _hairlineBorder


-(void)_bbUpdateLayer;
-(void)awakeFromNib;
-(void)prepareForInterfaceBuilder;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)tintColorDidChange;


@end


#endif