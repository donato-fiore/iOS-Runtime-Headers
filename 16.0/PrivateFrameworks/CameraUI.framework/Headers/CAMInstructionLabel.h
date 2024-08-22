// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMINSTRUCTIONLABEL_H
#define CAMINSTRUCTIONLABEL_H

@class UIView, UIActivityIndicatorView, NSAttributedString, UILabel, NSString, UIColor;
@protocol CAMInstructionLabelDelegate;



@interface CAMInstructionLabel : UIView

@property (retain, nonatomic) UIActivityIndicatorView *_activityIndicatorView; // ivar: __activityIndicatorView
@property (copy, nonatomic) NSAttributedString *_attributedText; // ivar: __attributedText
@property (readonly, nonatomic) CGFloat _backgroundAlpha;
@property (readonly, nonatomic) UILabel *_label; // ivar: __label
@property (readonly, nonatomic) NSString *_symbolPrefixName;
@property (readonly, nonatomic) NSString *_symbolSuffixName; // ivar: __symbolSuffixName
@property (readonly, nonatomic) UIColor *_textColor;
@property (readonly, nonatomic) UIEdgeInsets _textInsets;
@property (weak, nonatomic) NSObject<CAMInstructionLabelDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) BOOL useModeDialFontSize; // ivar: _useModeDialFontSize


-(BOOL)_wantsPrefixActivityIndicatorView;
-(CGFloat)_backgroundColorWhiteValue;
-(CGFloat)_defaultCornerRadius;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateAttributedText;
-(void)_updateLabel;
-(void)_updateLayer;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif