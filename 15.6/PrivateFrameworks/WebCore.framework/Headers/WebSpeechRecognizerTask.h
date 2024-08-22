// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBSPEECHRECOGNIZERTASK_H
#define WEBSPEECHRECOGNIZERTASK_H


#import <Foundation/Foundation.h>


@interface WebSpeechRecognizerTask : NSObject {
    RetainPtr<WebSpeechRecognizerTaskImpl> _impl;
}




-(id)initWithIdentifier:(struct ObjectIdentifier<WebCore::SpeechRecognitionConnectionClientIdentifierType> )arg0 locale:(id)arg1 doMultipleRecognitions:(BOOL)arg2 reportInterimResults:(BOOL)arg3 maxAlternatives:(NSUInteger)arg4 delegateCallback:(id)arg5 ;
-(void)abort;
-(void)audioSamplesAvailable:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)stop;


@end


#endif