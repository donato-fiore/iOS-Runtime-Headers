// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUIKEYLINE_H
#define SIRIUIKEYLINE_H

@class UIView, UIColor;



@interface SiriUIKeyline : UIView {
    UIView *_keyLineView;
}


@property (retain, nonatomic) UIColor *customBackgroundColor; // ivar: _customBackgroundColor
@property (nonatomic) CGFloat customLeftPadding; // ivar: _customLeftPadding
@property (nonatomic) CGFloat customRightPadding; // ivar: _customRightPadding
@property (nonatomic) NSInteger keylineType; // ivar: _keylineType
@property (nonatomic, getter=_isVeritical, setter=_setVertical:) BOOL veritical; // ivar: _veritical


+(id)keyline;
+(id)keylineForSelectableRow;
+(id)keylineWithDefaultInsets;
+(id)keylineWithKeylineType:(NSInteger)arg0 ;
+(id)keylineWithKeylineType:(NSInteger)arg0 platterStyling:(BOOL)arg1 ;
+(id)verticalKeyline;
-(CGFloat)_keylineThicknessForType:(NSInteger)arg0 ;
-(id)_keylineColorForType:(NSInteger)arg0 platterStyling:(BOOL)arg1 ;
-(id)initWithKeylineType:(NSInteger)arg0 ;
-(id)initWithKeylineType:(NSInteger)arg0 platterStyling:(BOOL)arg1 ;
-(struct CGSize )_sizeThatFits:(struct CGSize )arg0 useAutolayout:(BOOL)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif