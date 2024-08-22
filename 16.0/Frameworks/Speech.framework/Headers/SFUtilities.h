// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFUTILITIES_H
#define SFUTILITIES_H


#import <Foundation/Foundation.h>


@interface SFUtilities : NSObject



+(BOOL)canAccessPathAt:(id)arg0 methodName:(id)arg1 error:(*id)arg2 ;
+(BOOL)isCacheDirInternal;
+(BOOL)isSpeechXPCEnabled;
+(id)issueReadSandboxExtensionForFilePath:(id)arg0 error:(*id)arg1 ;
+(id)issueReadWriteSandboxExtensionForDirectoryPath:(id)arg0 error:(*id)arg1 ;
+(id)lsrCacheDirPath;
+(id)recognitionMetadataFromSpeechPhrases:(id)arg0 afAudioAnalytics:(id)arg1 utteranceStart:(CGFloat)arg2 ;
+(id)recognizedResultFromPackage:(id)arg0 ;
+(id)taskNameFromTaskHint:(NSInteger)arg0 ;
+(id)transcriptionFromSpeechPhrases:(id)arg0 afAudioAnalytics:(id)arg1 utteranceStart:(CGFloat)arg2 ;
+(id)transcriptionsWithTokens:(id)arg0 ;
+(void)initialize;
+(void)supportedLocalesWithCompletion:(id)arg0 ;


@end


#endif