// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRDREQUESTDISPATCHERINTERNAL_H
#define SRDREQUESTDISPATCHERINTERNAL_H


#import <Foundation/Foundation.h>


@interface SRDRequestDispatcherInternal : NSObject {
    ? rdmbQueue;
    ? broker;
    ? messagePublisher;
    ? sessionsManager;
    ? aceCommandDispatcher;
    ? serviceHelper;
    ? instrumentationUtil;
    ? assetLogger;
    ? sessionUserId;
}




-(BOOL)implementsCommand:(id)arg0 forDomain:(id)arg1 ;
-(BOOL)sessionExistsForAssistantId:(id)arg0 ;
-(id)commandsForDomain:(id)arg0 ;
-(id)domains;
-(id)init;
-(id)initWithRequestDispatcherServiceHelper:(id)arg0 ;
-(void)cancelRequestWithAssistantId:(id)arg0 requestId:(id)arg1 ;
-(void)endDictationSessionWithAssistantId:(id)arg0 ;
-(void)endSessionWithAssistantId:(id)arg0 withDelay:(BOOL)arg1 ;
-(void)handleCommand:(id)arg0 executionContextInfo:(id)arg1 reply:(id)arg2 ;
-(void)pauseDictationRecognitionWithAssistantId:(id)arg0 requestId:(id)arg1 ;
-(void)postTestResultCandidateWithAssistantId:(id)arg0 requestId:(id)arg1 rcId:(id)arg2 recognitionSausage:(id)arg3 ;
-(void)postTestResultSelectedWithAssistantId:(id)arg0 requestId:(id)arg1 rcId:(id)arg2 ;
-(void)prewarmWithAssistantId:(id)arg0 languageCode:(id)arg1 prewarmOptions:(NSUInteger)arg2 sharedUserId:(id)arg3 ;
-(void)requestCompletedWithAssistantId:(id)arg0 requestId:(id)arg1 ;
-(void)resumeDictationRecognitionWithAssistantId:(id)arg0 requestId:(id)arg1 prefixText:(id)arg2 postfixText:(id)arg3 selectedText:(id)arg4 ;
-(void)sendMultiUserInfoWithDeviceAssistantId:(id)arg0 multiUserInfo:(id)arg1 isRMVEnabled:(BOOL)arg2 ;
-(void)sendRequestContextWithAssistantId:(id)arg0 requestId:(id)arg1 audioSource:(id)arg2 audioDestination:(id)arg3 responseMode:(id)arg4 isEyesFree:(BOOL)arg5 isVoiceTriggerEnabled:(BOOL)arg6 isTextToSpeechEnabled:(BOOL)arg7 isTriggerlessFollowup:(BOOL)arg8 bargeInModes:(id)arg9 approximatePreviousTTSInterval:(id)arg10 deviceRestrictions:(id)arg11 voiceTriggerEventInfo:(id)arg12 voiceAudioSessionId:(unsigned int)arg13 ;
-(void)startCorrectionSpeechRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 utterance:(id)arg3 previousUtterance:(id)arg4 ;
-(void)startDirectActionRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 directAction:(id)arg3 requestExecutionParameters:(id)arg4 ;
-(void)startLocalRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 ;
-(void)startSessionWithAssistantId:(id)arg0 languageCode:(id)arg1 ;
-(void)startSessionWithAssistantId:(id)arg0 languageCode:(id)arg1 understandingOnDevice:(BOOL)arg2 ;
-(void)startSessionWithAssistantId:(id)arg0 languageCode:(id)arg1 understandingOnDevice:(BOOL)arg2 sharedUserId:(id)arg3 ;
-(void)startSpeechDictationRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 dictationOptions:(id)arg3 ;
-(void)startSpeechDictationSessionWithAssistantId:(id)arg0 languageCode:(id)arg1 recognitionOnDevice:(BOOL)arg2 ;
-(void)startSpeechRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 ;
-(void)startSpeechRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 location:(id)arg3 ;
-(void)startSpeechRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 location:(id)arg3 asrOnServer:(BOOL)arg4 ;
-(void)startTestSpeechRequestWithAssistantId:(id)arg0 requestId:(id)arg1 enableASR:(BOOL)arg2 inputOrigin:(id)arg3 location:(id)arg4 jitContext:(id)arg5 overrideModelPath:(id)arg6 ;
-(void)startTestSpeechRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 ;
-(void)startTextRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 utterance:(id)arg3 ;
-(void)startUnderstandingDictationRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 dictationOptions:(id)arg3 ;
-(void)startUnderstandingDictationSessionWithAssistantId:(id)arg0 languageCode:(id)arg1 understandingOnDevice:(BOOL)arg2 ;
-(void)startUnderstandingOnServerRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 ;
-(void)startUnderstandingOnServerTextRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 utterance:(id)arg3 ;


@end


#endif