// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKCODEENTRYVIEW_H
#define AKCODEENTRYVIEW_H

@class UIView, NSMutableString, UITapGestureRecognizer, NSArray, NSString, UILabel, UITextInputPasswordRules;
@protocol UIKeyInput;



@interface AKCodeEntryView : UIView <UIKeyInput>

 {
    NSMutableString *_stringValue;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _passcodeFieldDisabled;
}


@property (retain, nonatomic) NSArray *activeConstraints; // ivar: _activeConstraints
@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) UILabel *firstGeneratorField;
@property (retain, nonatomic) NSArray *generatorFields; // ivar: _generatorFields
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (copy, nonatomic) NSString *stringValue;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;


+(id)generatorFieldFont;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)_syncStringValueToLabels;
-(void)_updateFonts:(id)arg0 ;
-(void)dealloc;
-(void)deleteBackward;
-(void)emitCodeEnteredNotification;
-(void)insertText:(id)arg0 ;
-(void)passcodeFieldTapped:(id)arg0 ;
-(void)setPasscodeFieldDisabled:(BOOL)arg0 ;
-(void)updateConstraints;


@end


#endif