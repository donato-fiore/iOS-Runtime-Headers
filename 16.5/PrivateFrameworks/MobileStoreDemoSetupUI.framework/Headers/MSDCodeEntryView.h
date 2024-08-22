// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSDCODEENTRYVIEW_H
#define MSDCODEENTRYVIEW_H

@class UIView, NSArray, NSString, UITextInputPasswordRules, NSMutableString, UITapGestureRecognizer;
@protocol CAAnimationDelegate, UIKeyInput, MSDCodeEntryViewDelegate;



@interface MSDCodeEntryView : UIView <CAAnimationDelegate, UIKeyInput>



@property (retain, nonatomic) NSArray *activeConstraints; // ivar: _activeConstraints
@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<MSDCodeEntryViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
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
@property (retain, nonatomic) NSMutableString *stringValue; // ivar: _stringValue
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (copy, nonatomic) NSString *textContentType;


+(id)generatorFieldFont;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(id)initWithDelegate:(id)arg0 ;
-(void)_syncStringValueToLabels;
-(void)clearEntry;
-(void)deleteBackward;
-(void)insertText:(id)arg0 ;
-(void)jiggleAView;
-(void)updateConstraints;


@end


#endif