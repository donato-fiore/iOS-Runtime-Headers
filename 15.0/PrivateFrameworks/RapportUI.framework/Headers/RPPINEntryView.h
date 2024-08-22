// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPPINENTRYVIEW_H
#define RPPINENTRYVIEW_H

@class UIView, NSMutableString, NSString, UILabel, NSArray, UITextInputPasswordRules, UIColor;
@protocol UIKeyInput, UITextInputTraits;



@interface RPPINEntryView : UIView <UIKeyInput, UITextInputTraits>

 {
    NSMutableString *_text;
}


@property (nonatomic) BOOL alphaNumeric; // ivar: _alphaNumeric
@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disabled; // ivar: _disabled
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (retain, nonatomic) UILabel *label1; // ivar: _label1
@property (retain, nonatomic) UILabel *label2; // ivar: _label2
@property (retain, nonatomic) UILabel *label3; // ivar: _label3
@property (retain, nonatomic) UILabel *label4; // ivar: _label4
@property (retain, nonatomic) UILabel *label5; // ivar: _label5
@property (retain, nonatomic) UILabel *label6; // ivar: _label6
@property (retain, nonatomic) UILabel *label7; // ivar: _label7
@property (retain, nonatomic) UILabel *label8; // ivar: _label8
@property (retain, nonatomic) NSArray *labels; // ivar: _labels
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) id *textChangedHandler; // ivar: _textChangedHandler
@property (copy, nonatomic) NSString *textContentType;
@property (retain, nonatomic) UIView *well1; // ivar: _well1
@property (retain, nonatomic) UIView *well2; // ivar: _well2
@property (retain, nonatomic) UIView *well3; // ivar: _well3
@property (retain, nonatomic) UIView *well4; // ivar: _well4
@property (retain, nonatomic) UIView *well5; // ivar: _well5
@property (retain, nonatomic) UIView *well6; // ivar: _well6
@property (retain, nonatomic) UIView *well7; // ivar: _well7
@property (retain, nonatomic) UIView *well8; // ivar: _well8
@property (retain, nonatomic) UIColor *wellFocusColor; // ivar: _wellFocusColor
@property (retain, nonatomic) NSArray *wells; // ivar: _wells


-(BOOL)canBecomeFirstResponder;
-(void)_updateFields;
-(void)awakeFromNib;
-(void)deleteBackward;
-(void)insertText:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif