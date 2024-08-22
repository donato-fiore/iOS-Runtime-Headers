// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRDREQUESTDISPATCHER_H
#define SRDREQUESTDISPATCHER_H

@class NSString;
@protocol AFRequestDispatcher;

#import <Foundation/Foundation.h>

#import "SRDRequestDispatcherInternal.h"

@interface SRDRequestDispatcher : NSObject <AFRequestDispatcher>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SRDRequestDispatcherInternal *underlyingObject; // ivar: _underlyingObject


-(BOOL)implementsCommand:(id)arg0 forDomain:(id)arg1 ;
-(id)commandsForDomain:(id)arg0 ;
-(id)domains;
-(id)initWithMock:(id)arg0 ;
-(id)initWithServiceHelper:(id)arg0 ;
-(id)initWithServiceHelper:(id)arg0 asrBridgeDelegate:(id)arg1 ;
-(void)cancelRequestWithAssistantId:(id)arg0 requestId:(id)arg1 ;
-(void)clearContextWithAssistantId:(id)arg0 ;
-(void)handleCommand:(id)arg0 executionContextInfo:(id)arg1 reply:(id)arg2 ;
-(void)postTestResultCandidateWithAssistantId:(id)arg0 requestId:(id)arg1 rcId:(id)arg2 recognitionSausage:(id)arg3 ;
-(void)postTestResultSelectedWithAssistantId:(id)arg0 requestId:(id)arg1 rcId:(id)arg2 ;
-(void)requestCompletedWithAssistantId:(id)arg0 requestId:(id)arg1 ;
-(void)sendRequestContextWithAssistantId:(id)arg0 requestId:(id)arg1 audioSource:(id)arg2 audioDestination:(id)arg3 isEyesFree:(BOOL)arg4 isVoiceTriggerEnabled:(BOOL)arg5 isTextToSpeechEnabled:(BOOL)arg6 isTriggerlessFollowup:(BOOL)arg7 bargeInModes:(id)arg8 approximatePreviousTTSInterval:(id)arg9 deviceRestrictions:(id)arg10 ;
-(void)startCorrectionSpeechRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 utterance:(id)arg3 previousUtterance:(id)arg4 ;
-(void)startDirectActionRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 directAction:(id)arg3 requestExecutionParameters:(id)arg4 ;
-(void)startLocalRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 ;
-(void)startSessionWithAssistantId:(id)arg0 languageCode:(id)arg1 ;
-(void)startSessionWithAssistantId:(id)arg0 languageCode:(id)arg1 understandingOnDevice:(BOOL)arg2 ;
-(void)startSpeechRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 ;
-(void)startSpeechRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 location:(id)arg3 ;
-(void)startTestSpeechRequestWithAssistantId:(id)arg0 requestId:(id)arg1 enableASR:(BOOL)arg2 inputOrigin:(id)arg3 location:(id)arg4 jitContext:(id)arg5 overrideModelPath:(id)arg6 ;
-(void)startTestSpeechRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 ;
-(void)startTextRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 utterance:(id)arg3 ;
-(void)startUnderstandingOnServerRequestWithAssistantId:(id)arg0 requestId:(id)arg1 inputOrigin:(id)arg2 ;


@end


#endif