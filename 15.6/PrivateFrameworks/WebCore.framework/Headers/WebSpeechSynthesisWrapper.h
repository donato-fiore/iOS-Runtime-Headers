// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBSPEECHSYNTHESISWRAPPER_H
#define WEBSPEECHSYNTHESISWRAPPER_H

@class NSString;
@protocol AVSpeechSynthesizerDelegate;

#import <Foundation/Foundation.h>


@interface WebSpeechSynthesisWrapper : NSObject <AVSpeechSynthesizerDelegate>

 {
    *void m_synthesizerObject;
    RefPtr<WebCore::PlatformSpeechSynthesisUtterance, WTF::RawPtrTraits<WebCore::PlatformSpeechSynthesisUtterance>, WTF::DefaultRefDerefTraits<WebCore::PlatformSpeechSynthesisUtterance>> m_utterance;
    RetainPtr<AVSpeechSynthesizer> m_synthesizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(float)mapSpeechRateToPlatformRate:(float)arg0 ;
-(id)initWithSpeechSynthesizer:(*void)arg0 ;
-(void)cancel;
-(void)pause;
-(void)resetState;
-(void)resume;
-(void)speakUtterance:(*void)arg0 ;
-(void)speechSynthesizer:(id)arg0 didCancelSpeechUtterance:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didContinueSpeechUtterance:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeechUtterance:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didPauseSpeechUtterance:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didStartSpeechUtterance:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 willSpeakRangeOfSpeechString:(struct _NSRange )arg1 utterance:(id)arg2 ;


@end


#endif