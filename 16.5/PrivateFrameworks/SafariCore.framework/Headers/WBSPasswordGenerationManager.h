// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPASSWORDGENERATIONMANAGER_H
#define WBSPASSWORDGENERATIONMANAGER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface WBSPasswordGenerationManager : NSObject {
    *_LXLexicon _lexiconForEnglish;
    *_LXLexicon _lexiconForUserLocale;
}


@property (copy, nonatomic) NSDictionary *passwordRequirementsByDomain; // ivar: _passwordRequirementsByDomain


+(BOOL)passwordLooksLikePasswordManagerGeneratedMoreTypablePassword:(id)arg0 ;
+(BOOL)passwordLooksLikePasswordManagerGeneratedPassword:(id)arg0 ;
+(NSUInteger)minimumPasswordLength;
+(id)requirementsForPasswordRuleSet:(id)arg0 respectingMinLength:(id)arg1 maxLength:(id)arg2 ;
-(BOOL)_tokensContainUnwantedWords:(id)arg0 ;
-(BOOL)manualPasswordGenerationIsDisallowedByRequirements:(id)arg0 ;
-(BOOL)passwordGenerationIsDisallowedByRequirements:(id)arg0 ;
-(id)_generated15CharacterAlphanumericPasswordRejectingUnwantedWords:(BOOL)arg0 ;
-(id)_generatedPasswordMatchingRequirements:(id)arg0 rejectUnwantedWords:(BOOL)arg1 ;
-(id)_moreTypeablePassword;
-(id)defaultRequirementsForDomain:(id)arg0 ;
-(id)defaultRequirementsForURL:(id)arg0 ;
-(id)generated15CharacterAlphanumericPassword;
-(id)generatedPasswordMatchingRequirements:(id)arg0 ;
-(id)init;
-(id)initWithPasswordRequirementsByDomain:(id)arg0 ;
-(id)protectionSpaceForGeneratedPasswordsInProtectionSpace:(id)arg0 ;
-(id)updatedRequirements:(id)arg0 respectingMaxLength:(NSUInteger)arg1 ;
-(void)_lexiconEnumerateEntries:(struct _LXLexicon *)arg0 forString:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;


@end


#endif