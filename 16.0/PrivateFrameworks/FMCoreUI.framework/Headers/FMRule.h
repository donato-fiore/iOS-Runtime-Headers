// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMRULE_H
#define FMRULE_H

@class UIView, UIColor, UIImageView;



@interface FMRule : UIView

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL leading; // ivar: _leading


+(id)imageWithColor:(id)arg0 leading:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)awakeFromNib;
-(void)commonSetup;
-(void)prepareForInterfaceBuilder;


@end


#endif