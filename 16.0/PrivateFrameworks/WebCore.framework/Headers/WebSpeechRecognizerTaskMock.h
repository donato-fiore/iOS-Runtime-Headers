// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBSPEECHRECOGNIZERTASKMOCK_H
#define WEBSPEECHRECOGNIZERTASKMOCK_H



#import "WebSpeechRecognizerTask.h"

@interface WebSpeechRecognizerTaskMock : WebSpeechRecognizerTask {
    ObjectIdentifier<WebCore::SpeechRecognitionConnectionClientIdentifierType> _identifier;
    BlockPtr<void (const WebCore::SpeechRecognitionUpdate &)> _delegateCallback;
    BOOL _doMultipleRecognitions;
    BOOL _hasSentSpeechStart;
    BOOL _hasSentSpeechEnd;
    BOOL _completed;
}




-(id)initWithIdentifier:(struct ObjectIdentifier<WebCore::SpeechRecognitionConnectionClientIdentifierType> )arg0 locale:(id)arg1 doMultipleRecognitions:(BOOL)arg2 reportInterimResults:(BOOL)arg3 maxAlternatives:(NSUInteger)arg4 delegateCallback:(id)arg5 ;
-(void)abort;
-(void)audioSamplesAvailable:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)stop;


@end


#endif