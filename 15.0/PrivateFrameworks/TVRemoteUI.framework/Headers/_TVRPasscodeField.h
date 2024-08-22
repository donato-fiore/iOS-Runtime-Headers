// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRPASSCODEFIELD_H
#define _TVRPASSCODEFIELD_H

@class UIControl, TVRCPINEntryAttributes, NSString, NSMutableString, UITextInputPasswordRules;
@protocol UIKeyInput;



@interface _TVRPasscodeField : UIControl <UIKeyInput>



@property (retain, nonatomic) TVRCPINEntryAttributes *PINEntryattributes; // ivar: _PINEntryattributes
@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (retain, nonatomic) NSMutableString *mutablePasscode; // ivar: _mutablePasscode
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textContentType;
@property (nonatomic) BOOL useSystemColors; // ivar: _useSystemColors


-(BOOL)acceptsFloatingKeyboard;
-(BOOL)acceptsSplitKeyboard;
-(BOOL)canBecomeFirstResponder;
-(CGFloat)_contentWidthWithDotSize:(CGFloat)arg0 entrySpacing:(CGFloat)arg1 groupSpacing:(CGFloat)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_contentSize;
-(void)clear;
-(void)deleteBackward;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)insertText:(id)arg0 ;


@end


#endif