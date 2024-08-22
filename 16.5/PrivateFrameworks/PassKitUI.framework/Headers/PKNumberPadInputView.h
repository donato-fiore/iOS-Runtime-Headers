// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKNUMBERPADINPUTVIEW_H
#define PKNUMBERPADINPUTVIEW_H

@class UIInputView, NSNumberFormatter, UIStackView, NSMutableArray, UIColor;



@interface PKNumberPadInputView : UIInputView {
    unsigned char _batchedUpdateCount;
    BOOL _needsReload;
    BOOL _needsUpdate;
    NSNumberFormatter *_formatter;
    UIStackView *_verticalStackView;
    NSMutableArray *_buttons;
}


@property (copy, nonatomic) UIColor *numberPadColor; // ivar: _numberPadColor
@property (nonatomic) BOOL showsDecimalPointButton; // ivar: _showsDecimalPointButton
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor


+(struct CGSize )defaultSizeForInterfaceOrientation:(NSInteger)arg0 ;
-(id)_createBorderedButtonForButtonValue:(NSUInteger)arg0 withBorder:(NSUInteger)arg1 primaryAction:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 configurator:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 inputViewStyle:(NSInteger)arg1 ;
-(void)_numericKeyPressed:(NSUInteger)arg0 ;
-(void)_performDelete;
-(void)_performInsertion:(id)arg0 ;
-(void)_reloadSubviews;
-(void)_updateButtons;
-(void)layoutSubviews;
-(void)performBatchUpdates:(id)arg0 ;


@end


#endif