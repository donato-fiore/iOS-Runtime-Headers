// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CERTUIKEYVALUEVIEW_H
#define CERTUIKEYVALUEVIEW_H

@class UIView, UILabel, UIImageView;



@interface CertUIKeyValueView : UIView

@property (retain, nonatomic) UILabel *keyLabel; // ivar: _keyLabel
@property (nonatomic) CGFloat preferredValueLabelOriginX; // ivar: _preferredValueLabelOriginX
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel
@property (retain, nonatomic) UIImageView *verifiedImageView; // ivar: _verifiedImageView
@property (retain, nonatomic) UILabel *verifiedLabel; // ivar: _verifiedLabel


+(CGFloat)defaultPreferredValueLabelOriginX;
-(id)detailFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)titleFont;
-(id)verifiedColor;
-(id)verifiedFont;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_createVerifiedComponentsIfNeeded;
-(void)layoutSubviews;
-(void)setCheckmarkLabelText:(id)arg0 checkmarkLabelColor:(id)arg1 showCheckmark:(BOOL)arg2 ;
-(void)setHighlightTextColor:(id)arg0 ;
-(void)setItemDetail:(id)arg0 ;
-(void)setKey:(id)arg0 value:(id)arg1 ;


@end


#endif