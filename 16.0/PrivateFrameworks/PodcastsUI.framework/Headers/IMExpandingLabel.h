// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMEXPANDINGLABEL_H
#define IMEXPANDINGLABEL_H

@class UIView, CAGradientLayer, UIButton, NSString, NSDictionary, UITextView;
@protocol IMExpandingLabelDelegate;



@interface IMExpandingLabel : UIView {
    CAGradientLayer *_gradientLayer;
    id *_gradientClearColor;
    id *_gradientSemiClearColor;
    id *_gradientSolidColor;
}


@property (weak, nonatomic) NSObject<IMExpandingLabelDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (nonatomic) BOOL fitsWithinLineLimit; // ivar: _fitsWithinLineLimit
@property (nonatomic) CGFloat gradientHeight; // ivar: _gradientHeight
@property (nonatomic) BOOL hasGradient; // ivar: _hasGradient
@property (nonatomic) NSUInteger languageDirection; // ivar: _languageDirection
@property (retain, nonatomic) UIButton *moreButton; // ivar: _moreButton
@property (nonatomic) NSUInteger numberOfLines; // ivar: _numberOfLines
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (copy, nonatomic) NSDictionary *textAttributes; // ivar: _textAttributes
@property (nonatomic) NSInteger textMode; // ivar: _textMode
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


-(CGFloat)heightForWidth:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)moreButtonTapped:(id)arg0 ;


@end


#endif