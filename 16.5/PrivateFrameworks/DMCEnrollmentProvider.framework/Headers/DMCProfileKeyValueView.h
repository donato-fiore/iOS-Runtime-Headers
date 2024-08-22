// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCPROFILEKEYVALUEVIEW_H
#define DMCPROFILEKEYVALUEVIEW_H

@class UIView, UILabel, UIImageView;



@interface DMCProfileKeyValueView : UIView

@property (retain, nonatomic) UILabel *keyLabel; // ivar: _keyLabel
@property (nonatomic) CGFloat preferredValueLabelOriginX; // ivar: _preferredValueLabelOriginX
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel
@property (retain, nonatomic) UIImageView *verifiedImageView; // ivar: _verifiedImageView
@property (retain, nonatomic) UILabel *verifiedLabel; // ivar: _verifiedLabel


+(CGFloat)defaultPreferredValueLabelOriginX;
-(CGFloat)desiredValueLabelOriginXForSize:(struct CGSize )arg0 ;
-(id)_captionFontBold:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setItemDetail:(id)arg0 ;
-(void)setKey:(id)arg0 value:(id)arg1 ;


@end


#endif