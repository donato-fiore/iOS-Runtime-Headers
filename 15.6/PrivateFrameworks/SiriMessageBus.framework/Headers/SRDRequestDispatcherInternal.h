// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SRDREQUESTDISPATCHERINTERNAL_H
#define SRDREQUESTDISPATCHERINTERNAL_H


#import <Foundation/Foundation.h>


@interface SRDRequestDispatcherInternal : NSObject {
    ? rdmbQueue;
    ? broker;
    ? messagePublisher;
    ? conversationSessionsManager;
    ? aceCommandDispatcher;
    ? serviceHelper;
    ? instrumentationUtil;
    ? assetLogger;
}




-(BOOL)implementsCommand:(id)arg0 forDomain:(id)arg1 ;
-(id)commandsForDomain:(id)arg0 ;
-(id)domains;
-(id)init;
-(id)initWithRequestDispatcherServiceHelper:(id)arg0 ;
-(void)cancelRequestWithAssistantId:(id)arg0 requestId:(id)arg1 ;
-(void)handleCommand:(id)arg0 executionContextInfo:(id)arg1 reply:(id)arg2 ;
-(void)postTestResultCandidateWithAssistantId:(id)arg0 requestId:(id)arg1 rcId:(id)arg2 recognitionSausage:(id)arg3 ;
-(void)postTestResultSelectedWithAssistantId:(id)arg0 requestId:(id)arg1 rcId:(id)arg2 ;
-(void)requestCompletedWithAssistantId:(id)arg0 requestId:(id)arg1 ;
-(void)sendRequestContextWithAssistantId:(id)arg0 requestId:(id)arg1 audioSource:(id)arg2 audioDestination:(id)arg3 isEyesFree:(BOOL)arg4 isVoiceTriggerEnabled:(BOOL)arg5 isTextToSpeechEnabled:(BOOL)arg6 isTriggerlessFollowup:(BOOL)arg7 bargeInModes:(id)arg8 approximatePreviousTTSInterval:(id)arg9 deviceRestrictions:(id)arg10 ;
-(void)sendRequestContextWithAssistantId:(id)arg0 requestId:(id)arg1 audioSource:(id)arg2 audioDestination:(id)arg3 responseMode:(id)arg4 isEyesFree:(BOOL)arg5 isVoiceTriggerEnabled:(BOOL)arg6 isTextToSpeechEnabled:(BOOL)arg7 isTriggerlessFollowup:(BOOL)arg8 bargeInModes:(id)arg9 approximatePreviousTTSInterval:(id)arg10 deviceRestrictions:(id)arg11 ;
-(void)startCorrectionSpeechRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 utterance:(id)arg3 previousUtterance:(id)arg4 ;
-(void)startDirectActionRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 directAction:(id)arg3 requestExecutionParameters:(id)arg4 ;
-(void)startLocalRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 ;
-(void)startSessionWithAssistantId:(id)arg0 languageCode:(id)arg1 ;
-(void)startSessionWithAssistantId:(id)arg0 languageCode:(id)arg1 understandingOnDevice:(BOOL)arg2 ;
-(void)startSpeechDictationRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 dictationOptions:(id)arg3 ;
-(void)startSpeechDictationSessionWithAssistantId:(id)arg0 languageCode:(id)arg1 recognitionOnDevice:(BOOL)arg2 ;
-(void)startSpeechRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 ;
-(void)startSpeechRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 location:(id)arg3 ;
-(void)startTestSpeechRequestWithAssistantId:(id)arg0 requestId:(id)arg1 enableASR:(BOOL)arg2 inputOrigin:(id)arg3 location:(id)arg4 jitContext:(id)arg5 overrideModelPath:(id)arg6 ;
-(void)startTestSpeechRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 ;
-(void)startTextRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 utterance:(id)arg3 ;
-(void)startUnderstandingOnServerRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 ;
-(void)startUnderstandingOnServerTextRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 utterance:(id)arg3 ;


@end


#endif