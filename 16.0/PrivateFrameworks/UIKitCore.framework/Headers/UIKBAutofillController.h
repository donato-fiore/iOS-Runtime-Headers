// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBAUTOFILLCONTROLLER_H
#define UIKBAUTOFILLCONTROLLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface UIKBAutofillController : NSObject {
    BOOL _didOptOutOfAutofillSignup;
}


@property (readonly, retain, nonatomic) NSMutableDictionary *autofillGroup; // ivar: _autofillGroup
@property (nonatomic) NSInteger delegateNeedsAutofillMode; // ivar: _delegateNeedsAutofillMode
@property (copy, nonatomic) NSMutableDictionary *fallbackAutofillGroup; // ivar: _fallbackAutofillGroup
@property (nonatomic) BOOL shouldSaveAutofill; // ivar: _shouldSaveAutofill
@property (copy, nonatomic) UIColor *textFieldOrigColor; // ivar: _textFieldOrigColor


+(NSInteger)translateToUIAutofillMode:(NSUInteger)arg0 ;
+(NSUInteger)translateToTextInputAutofillMode:(NSInteger)arg0 ;
-(BOOL)_prohibitAutofill:(id)arg0 needASPKeyboard:(BOOL)arg1 ;
-(BOOL)containsUsernamePasswordPairsInAutofillGroup:(id)arg0 ;
-(BOOL)preferFallbackAutofillGroup;
-(BOOL)shouldLoadASPForResponder:(id)arg0 ;
-(BOOL)signupHintForUsername:(id)arg0 password:(id)arg1 responder:(id)arg2 ;
-(NSInteger)_needAutofillCandidate:(id)arg0 delegateAsResponder:(id)arg1 ;
-(NSInteger)contactAutofillModeWithAutofillGroup:(id)arg0 responders:(id)arg1 ;
-(NSInteger)containsIndicationInText:(id)arg0 withAccessibilityHints:(BOOL)arg1 ;
-(NSInteger)doTraits:(id)arg0 matchTextContentType:(id)arg1 ;
-(NSInteger)needAutofillCandidate:(id)arg0 delegateAsResponder:(id)arg1 keyboardState:(id)arg2 ;
-(NSInteger)signUpSignalFromButton:(id)arg0 ;
-(NSInteger)signUpSignalFromNavBarItem:(id)arg0 ;
-(NSInteger)signUpSignalFromViewControllerHierarchy:(id)arg0 ;
-(id)accessibilityLoginKeywordList;
-(id)accessibilitySignupKeywordList;
-(id)addressKeywordSet;
-(id)autofillContextForInputDelegate:(id)arg0 ;
-(id)contactAutoFillKeywordsForKey:(id)arg0 value:(id)arg1 localizedKeywords:(id)arg2 ;
-(id)emailKeywordSet;
-(id)init;
-(id)loginKeywordList;
-(id)phoneKeywordSet;
-(id)processLocalizedString:(id)arg0 ;
-(id)searchKeywordSet;
-(id)signupKeywordList;
-(id)textSignalsForResponder:(id)arg0 ;
-(void)_clearASPInTextField:(id)arg0 ;
-(void)addTemporaryTextColorToTextField:(id)arg0 ;
-(void)clearASPInPasswordFields;
-(void)clearASPVisualEffectsInTextField:(id)arg0 ;
-(void)clearAutofillGroup;
-(void)clearFallbackAutofillGroup;
-(void)didOptOutOfAutofillSignup;
-(void)enumeratePasswordFieldsUsingBlock:(id)arg0 ;
-(void)handleAutofillCredentialSaveIfNeeded:(id)arg0 fromASP:(BOOL)arg1 ;
-(void)handleWebviewCredentialsSaveForResponder:(id)arg0 WebsiteURL:(id)arg1 user:(id)arg2 password:(id)arg3 passwordIsAutoGenerated:(BOOL)arg4 ;
-(void)optOutASPInTextField;
-(void)removeTemporaryTextColorFromTextField:(id)arg0 ;
-(void)showASPInTextField:(id)arg0 isRightToLeft:(BOOL)arg1 ;
-(void)trackResponderForAutofillIfNeeded:(id)arg0 ;
-(void)updateAutofillContextForInputDelegate:(id)arg0 ;


@end


#endif