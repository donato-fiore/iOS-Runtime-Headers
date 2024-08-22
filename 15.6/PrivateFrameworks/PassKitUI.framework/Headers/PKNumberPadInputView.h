// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKNUMBERPADINPUTVIEW_H
#define PKNUMBERPADINPUTVIEW_H

@class UIInputView, UIStackView, UIColor;



@interface PKNumberPadInputView : UIInputView {
    UIStackView *_verticalStackView;
}


@property (copy, nonatomic) UIColor *numberPadColor; // ivar: _numberPadColor
@property (nonatomic) BOOL showsDecimalPointButton; // ivar: _showsDecimalPointButton
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor


+(struct CGSize )defaultSizeForInterfaceOrientation:(NSInteger)arg0 ;
-(id)_configuredBorderedButtonForButtonValue:(NSUInteger)arg0 withBorder:(NSUInteger)arg1 primaryAction:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_numericKeyPressed:(NSUInteger)arg0 ;
-(void)_performDelete;
-(void)_performInsertion:(id)arg0 ;
-(void)_reloadSubviews;
-(void)layoutSubviews;


@end


#endif