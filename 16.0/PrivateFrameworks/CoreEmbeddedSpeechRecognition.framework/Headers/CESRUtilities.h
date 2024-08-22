// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CESRUTILITIES_H
#define CESRUTILITIES_H


#import <Foundation/Foundation.h>


@interface CESRUtilities : NSObject



+(BOOL)hasRecognizedAnythingInAFSpeechPackage:(id)arg0 ;
+(NSInteger)calculateDiffInDaysFromTimestamp:(id)arg0 ;
+(id)AFSpeechInfoPackageForEARSpeechRecognitionResult:(id)arg0 ;
+(id)AFSpeechInfoPackageForEARSpeechRecognitionResultPackage:(id)arg0 ;
+(id)afRecognitionForEARSausage:(id)arg0 processedAudioDuration:(CGFloat)arg1 ;
+(id)afSpeechPackageForEARPackage:(id)arg0 processedAudioDuration:(CGFloat)arg1 speechProfileUsed:(BOOL)arg2 ;
+(id)afTokensForEARTokens:(id)arg0 removeSpaceBefore:(BOOL)arg1 ;
+(id)afVoiceCommandGrammarParseResultForEARTokenString:(id)arg0 withEARVoiceCommandInterpretations:(id)arg1 ;
+(id)earTokensForAFTokens:(id)arg0 appendedAutoPunctuation:(BOOL)arg1 ;
+(id)earTokensToString:(id)arg0 ;
+(id)languageStringForLocaleString:(id)arg0 ;
+(id)localeStringForLanguageString:(id)arg0 ;
+(id)mapContextOptionToString:(NSUInteger)arg0 ;
+(id)speechProfilePathsWithLanguage:(id)arg0 ;
+(id)speechProfileRootDirectories;
+(id)voiceCommandsParamKeyBuilder:(NSUInteger)arg0 ;
+(void)loadSpeechProfiles:(id)arg0 language:(id)arg1 ;


@end


#endif