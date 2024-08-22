// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDICTATIONUTILITIES_H
#define UIDICTATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface UIDictationUtilities : NSObject



+(BOOL)needsLeadingSpaceForPhrases:(id)arg0 secureInput:(BOOL)arg1 ;
+(BOOL)needsLeadingSpaceForText:(id)arg0 secureInput:(BOOL)arg1 ;
+(BOOL)needsLeadingSpaceForText:(id)arg0 secureInput:(BOOL)arg1 previousCharacter:(unsigned short)arg2 selectionStartIsStartOfParagraph:(BOOL)arg3 ;
+(BOOL)needsTrailingSpaceForPhrases:(id)arg0 secureInput:(BOOL)arg1 ;
+(NSInteger)updateCharacterModificationCount:(id)arg0 delta:(int)arg1 ;
+(NSUInteger)characterDeletionCount:(id)arg0 ;
+(NSUInteger)characterInsertionCount:(id)arg0 ;
+(NSUInteger)characterSubstitutionCount:(id)arg0 ;
+(NSUInteger)maxLoggableLengthOfInsertionBySubstitution:(id)arg0 ;
+(NSUInteger)maxLoggableLengthOfInsertionWithDeletion:(id)arg0 ;
+(NSUInteger)maxLoggableLengthOfInsertionWithoutDeletion:(id)arg0 ;
+(NSUInteger)updateCharacterDeletionCount:(id)arg0 delta:(int)arg1 ;
+(NSUInteger)updateCharacterInsertionCount:(id)arg0 delta:(int)arg1 ;
+(NSUInteger)updateCharacterSubstitutionCount:(id)arg0 delta:(int)arg1 ;
+(id)_properNameForString:(id)arg0 ;
+(id)attributedStringForDictationResult:(id)arg0 andCorrectionIdentifier:(id)arg1 ;
+(id)bestInterpretationForDictationResult:(id)arg0 ;
+(id)bestInterpretationForPhrases:(id)arg0 ;
+(id)dictationPhrasesFromPhraseArray:(id)arg0 ;
+(id)dictationPhrasesFromTokenMatrix:(id)arg0 ;
+(id)interpretationFromAFInterpretation:(id)arg0 ;
+(id)interpretationFromAFTokens:(id)arg0 ;
+(id)metadataDictionaryForCorrectionIdentifier:(id)arg0 ;
+(id)phraseFromAFPhrase:(id)arg0 ;
+(id)tokenFromAFToken:(id)arg0 ;
+(void)attributedString:(id)arg0 withIdentifiersBlock:(id)arg1 ;
+(void)logSpeechAlternativeReplacement:(id)arg0 originalText:(id)arg1 replacementText:(id)arg2 index:(NSUInteger)arg3 ;
+(void)selectionStartInfoWithBlock:(id)arg0 ;
+(void)trackDeletion:(id)arg0 text:(id)arg1 range:(struct _NSRange )arg2 ;
+(void)trackInsertion:(id)arg0 text:(id)arg1 range:(struct _NSRange )arg2 ;
+(void)trackSubstitution:(id)arg0 originalText:(id)arg1 originalTextRange:(struct _NSRange )arg2 replacementText:(id)arg3 replacementTextRange:(struct _NSRange )arg4 ;


@end


#endif