// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC24REQUESTDISPATCHERBRIDGES31SPEECHRECOGNIZERRESPONSEHANDLER_H
#define _TTC24REQUESTDISPATCHERBRIDGES31SPEECHRECOGNIZERRESPONSEHANDLER_H

@protocol LBLocalSpeechRecognizerClientDelegate;

#import <Foundation/Foundation.h>


@interface _TtC24RequestDispatcherBridges31SpeechRecognizerResponseHandler : NSObject <LBLocalSpeechRecognizerClientDelegate>

 {
    ? requestId;
    ? messagePublisher;
    ? serviceHelper;
    ? instrumentationUtil;
    ? assistantId;
    ? sessionId;
}




-(id)init;
-(void)localSpeechRecognizerClient:(id)arg0 didAcceptedEagerResultWithRequestId:(id)arg1 rcId:(NSUInteger)arg2 mitigationSignal:(BOOL)arg3 featuresToLog:(id)arg4 ;
-(void)localSpeechRecognizerClient:(id)arg0 receivedFinalResultCandidateWithRequestId:(id)arg1 speechPackage:(id)arg2 ;
-(void)localSpeechRecognizerClient:(id)arg0 receivedFinalResultWithRequestId:(id)arg1 speechPackage:(id)arg2 ;
-(void)localSpeechRecognizerClient:(id)arg0 receivedFinalResultWithRequestId:(id)arg1 speechPackage:(id)arg2 metadata:(id)arg3 ;
-(void)localSpeechRecognizerClient:(id)arg0 receivedPartialResultWithRequestId:(id)arg1 language:(id)arg2 tokens:(id)arg3 ;
-(void)localSpeechRecognizerClient:(id)arg0 receivedPartialResultWithRequestId:(id)arg1 language:(id)arg2 tokens:(id)arg3 metadata:(id)arg4 ;
-(void)localSpeechRecognizerClient:(id)arg0 receivedVoiceIdScoreCard:(id)arg1 ;


@end


#endif