// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC24REQUESTDISPATCHERBRIDGES40DICTATIONSPEECHRECOGNIZERRESPONSEHANDLER_H
#define _TTC24REQUESTDISPATCHERBRIDGES40DICTATIONSPEECHRECOGNIZERRESPONSEHANDLER_H

@class TtC24RequestDispatcherBridges31SpeechRecognizerResponseHandler;



@interface _TtC24RequestDispatcherBridges40DictationSpeechRecognizerResponseHandler : TtC24RequestDispatcherBridges31SpeechRecognizerResponseHandler {
    ? dictationOptions;
}




-(void)localSpeechRecognizerClient:(id)arg0 didCompletionRecognitionWithStatistics:(id)arg1 requestId:(id)arg2 endpointMode:(NSInteger)arg3 error:(id)arg4 ;
-(void)localSpeechRecognizerClient:(id)arg0 receivedEagerRecognitionCandidateWithRequestId:(id)arg1 rcId:(NSUInteger)arg2 speechPackage:(id)arg3 duration:(CGFloat)arg4 ;
-(void)localSpeechRecognizerClient:(id)arg0 receivedEagerRecognitionCandidateWithRequestId:(id)arg1 rcId:(NSUInteger)arg2 speechPackage:(id)arg3 duration:(CGFloat)arg4 metadata:(id)arg5 ;
-(void)localSpeechRecognizerClient:(id)arg0 receivedFinalResultCandidateWithRequestId:(id)arg1 speechPackage:(id)arg2 ;
-(void)localSpeechRecognizerClient:(id)arg0 receivedFinalResultWithRequestId:(id)arg1 speechPackage:(id)arg2 ;
-(void)localSpeechRecognizerClient:(id)arg0 receivedFinalResultWithRequestId:(id)arg1 speechPackage:(id)arg2 metadata:(id)arg3 ;
-(void)localSpeechRecognizerClient:(id)arg0 receivedPartialResultWithRequestId:(id)arg1 language:(id)arg2 tokens:(id)arg3 ;
-(void)localSpeechRecognizerClient:(id)arg0 receivedPartialResultWithRequestId:(id)arg1 language:(id)arg2 tokens:(id)arg3 metadata:(id)arg4 ;


@end


#endif