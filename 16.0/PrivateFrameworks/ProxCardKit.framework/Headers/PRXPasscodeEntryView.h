// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRXPASSCODEENTRYVIEW_H
#define PRXPASSCODEENTRYVIEW_H

@class UIControl, NSMutableString, NSArray, NSString, UITextInputPasswordRules;
@protocol UIKeyInput, PRXPasscodeEntryViewDelegate;



@interface PRXPasscodeEntryView : UIControl <UIKeyInput>

 {
    NSMutableString *_text;
    NSArray *_wells;
}


@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRXPasscodeEntryViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (readonly, nonatomic) NSInteger numberOfDigits; // ivar: _numberOfDigits
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) BOOL useMonospacedFont; // ivar: _useMonospacedFont


+(CGFloat)interWellSpacingForNumberOfDigits:(NSInteger)arg0 ;
+(CGFloat)wellCornerRadiusForNumberOfDigits:(NSInteger)arg0 ;
+(id)fontForNumberOfDigits:(NSInteger)arg0 useMonospacedFont:(BOOL)arg1 ;
+(struct CGSize )preferredSizeForNumberOfDigits:(NSInteger)arg0 ;
+(struct CGSize )wellSizeForNumberOfDigits:(NSInteger)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)resignFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithNumberOfDigits:(NSInteger)arg0 useMonospacedFont:(BOOL)arg1 delegate:(id)arg2 ;
-(struct CGSize )intrinsicContentSize;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateWells;
-(void)deleteBackward;
-(void)insertText:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif