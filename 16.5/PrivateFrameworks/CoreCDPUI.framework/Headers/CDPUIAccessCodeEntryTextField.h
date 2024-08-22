// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPUIACCESSCODEENTRYTEXTFIELD_H
#define CDPUIACCESSCODEENTRYTEXTFIELD_H

@class UITextView, NSSet, NSString;
@protocol UITextViewDelegate, CDPUIAccessCodeEntryTextFieldDelegate;



@interface CDPUIAccessCodeEntryTextField : UITextView <UITextViewDelegate>

 {
    NSSet *_separatorLocations;
    NSSet *_separatorDeleteLocations;
}


@property (weak, nonatomic) NSObject<CDPUIAccessCodeEntryTextFieldDelegate> *accessCodeInputDelegate; // ivar: _accessCodeInputDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isComplete;
@property (copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (retain, nonatomic) UITextView *placeholderTextView; // ivar: _placeholderTextView
@property (readonly) Class superclass;


+(NSUInteger)accessKeyCharacterCount;
+(NSUInteger)wrappingKeyCharacterCount;
-(BOOL)enablesReturnKeyAutomatically;
-(BOOL)hasText;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(NSUInteger)_numberOfSeparators;
-(NSUInteger)_totalCharacterLimit;
-(id)_sanitizeInputString:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)_handleMultiCharacterStringInput:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)layoutSubviews;
-(void)setFont:(id)arg0 ;
-(void)setText:(id)arg0 ;
-(void)setTextAlignment:(NSInteger)arg0 ;
-(void)setupSeparatorLocations;
-(void)setupUI;
-(void)textViewDidChange:(id)arg0 ;
-(void)updatePlaceholderVisibility;


@end


#endif