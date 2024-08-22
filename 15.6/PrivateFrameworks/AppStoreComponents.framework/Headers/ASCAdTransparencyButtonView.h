// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCADTRANSPARENCYBUTTONVIEW_H
#define ASCADTRANSPARENCYBUTTONVIEW_H

@class UIButton;



@interface ASCAdTransparencyButtonView : UIButton



+(id)adButtonTitleLocalized;
+(id)adTransparencyButtonImage;
+(id)buttonFontCompatibleWithTraitColletion:(id)arg0 ;
+(id)selectedTitleColor;
+(id)titleColor;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setLoading:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFont;
-(void)updateInsets;


@end


#endif