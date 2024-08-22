// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFREGLEARNMOREBUTTON_H
#define CNFREGLEARNMOREBUTTON_H

@class UIButton, NSString;



@interface CNFRegLearnMoreButton : UIButton

@property (nonatomic) BOOL alwaysUnderline; // ivar: _alwaysUnderline
@property (copy, nonatomic) NSString *buttonText; // ivar: _buttonText
@property (nonatomic) NSInteger style; // ivar: _style
@property (nonatomic) BOOL usesImage; // ivar: _usesImage


+(id)roundedButtonWithText:(id)arg0 color:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 text:(id)arg2 ;
-(struct CGRect )imageRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setupArrowImageForCurrentStyle;
-(void)_setupLearnMoreTextForCurrentStyle;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif