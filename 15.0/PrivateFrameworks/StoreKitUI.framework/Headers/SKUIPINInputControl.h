// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPININPUTCONTROL_H
#define SKUIPININPUTCONTROL_H

@class UIControl, NSMutableArray, UIColor, NSString, UIFont, UITextInputPasswordRules;
@protocol SKUIViewElementView, UIKeyInput;


#import "SKUIViewElement.h"

@interface SKUIPINInputControl : UIControl <SKUIViewElementView, UIKeyInput>

 {
    NSMutableArray *_labels;
    BOOL _needsLabelReload;
    SKUIViewElement *_viewElement;
}


@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (copy, nonatomic) UIColor *boxBackgroundColor; // ivar: _boxBackgroundColor
@property (copy, nonatomic) UIColor *boxBorderColor; // ivar: _boxBorderColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (copy, nonatomic) UIFont *font; // ivar: _font
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (nonatomic) NSInteger numberOfCharacters; // ivar: _numberOfCharacters
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // ivar: _secureTextEntry
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor
@property (copy, nonatomic) NSString *textContentType;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(CGFloat)_defaultBoxSizeForFont:(id)arg0 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_reloadLabelSubviews;
-(void)_sendValueChangeEvents;
-(void)_setNeedsReloadLayout;
-(void)deleteBackward;
-(void)insertText:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)tintColorDidChange;


@end


#endif