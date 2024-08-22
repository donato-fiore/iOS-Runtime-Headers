// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENUIVERIFICATIONCODEENTRYVIEW_H
#define ENUIVERIFICATIONCODEENTRYVIEW_H

@class UIView, NSMutableString, UITapGestureRecognizer, NSArray, UITextPosition, NSString, UILabel, UITextRange, NSDictionary, UITextInputPasswordRules;
@protocol UITextInput, UITextInputDelegate, UITextInputTokenizer;



@interface ENUIVerificationCodeEntryView : UIView <UITextInput>

 {
    NSMutableString *_stringValue;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _passcodeFieldDisabled;
}


@property (retain, nonatomic) NSArray *activeConstraints; // ivar: _activeConstraints
@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didEnterCode; // ivar: _didEnterCode
@property (copy, nonatomic) id *didEnterDigit; // ivar: _didEnterDigit
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (readonly, nonatomic) UILabel *firstGeneratorField;
@property (retain, nonatomic) NSArray *generatorFields; // ivar: _generatorFields
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<UITextInputDelegate> *inputDelegate; // ivar: _inputDelegate
@property (readonly, nonatomic) id *insertDictationResultPlaceholder;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle; // ivar: _markedTextStyle
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) NSInteger selectionAffinity;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (copy, nonatomic) NSString *stringValue;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) UIView *textInputView;
@property (readonly, nonatomic) NSObject<UITextInputTokenizer> *tokenizer;


+(id)generatorFieldFont;
+(id)maximumContentSizeCategory;
+(id)textStyle;
-(BOOL)canBecomeFirstResponder;
-(NSInteger)baseWritingDirectionForPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(NSInteger)comparePosition:(id)arg0 toPosition:(id)arg1 ;
-(NSInteger)offsetFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(id)characterRangeAtPoint:(struct CGPoint )arg0 ;
-(id)characterRangeByExtendingPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 withinRange:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)positionFromPosition:(id)arg0 inDirection:(NSInteger)arg1 offset:(NSInteger)arg2 ;
-(id)positionFromPosition:(id)arg0 offset:(NSInteger)arg1 ;
-(id)positionWithinRange:(id)arg0 farthestInDirection:(NSInteger)arg1 ;
-(id)selectionRectsForRange:(id)arg0 ;
-(id)textInRange:(id)arg0 ;
-(id)textRangeFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGRect )firstRectForRange:(id)arg0 ;
-(void)_syncStringValueToLabels;
-(void)_updateFonts:(id)arg0 ;
-(void)dealloc;
-(void)deleteBackward;
-(void)emitCodeEnteredNotification;
-(void)insertText:(id)arg0 ;
-(void)passcodeFieldTapped:(id)arg0 ;
-(void)replaceRange:(id)arg0 withText:(id)arg1 ;
-(void)setBaseWritingDirection:(NSInteger)arg0 forRange:(id)arg1 ;
-(void)setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)setPasscodeFieldDisabled:(BOOL)arg0 ;
-(void)unmarkText;
-(void)updateConstraints;


@end


#endif