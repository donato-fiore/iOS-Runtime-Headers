// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC24REQUESTDISPATCHERBRIDGES40DICTATIONSPEECHRECOGNIZERRESPONSEHANDLER_H
#define _TTC24REQUESTDISPATCHERBRIDGES40DICTATIONSPEECHRECOGNIZERRESPONSEHANDLER_H

@class TtC24RequestDispatcherBridges31SpeechRecognizerResponseHandler;



@interface _TtC24RequestDispatcherBridges40DictationSpeechRecognizerResponseHandler : TtC24RequestDispatcherBridges31SpeechRecognizerResponseHandler {
    ? rdServiceHelper;
    ? dictationOptions;
}




-(void)localSpeechRecognizerClient:(id)arg0 didCompletionRecognitionWithStatistics:(id)arg1 requestId:(id)arg2 endpointMode:(NSInteger)arg3 error:(id)arg4 ;
-(void)localSpeechRecognizerClient:(id)arg0 receivedEagerRecognitionCandidateWithRequestId:(id)arg1 rcId:(NSUInteger)arg2 speechPackage:(id)arg3 duration:(CGFloat)arg4 ;
-(void)localSpeechRecognizerClient:(id)arg0 receivedFinalResultWithRequestId:(id)arg1 speechPackage:(id)arg2 ;
-(void)localSpeechRecognizerClient:(id)arg0 receivedPartialResultWithRequestId:(id)arg1 language:(id)arg2 tokens:(id)arg3 ;


@end


#endif