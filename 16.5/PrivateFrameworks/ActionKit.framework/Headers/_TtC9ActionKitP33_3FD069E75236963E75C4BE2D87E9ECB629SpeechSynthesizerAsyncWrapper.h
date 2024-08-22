// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9ACTIONKITP33_3FD069E75236963E75C4BE2D87E9ECB629SPEECHSYNTHESIZERASYNCWRAPPER_H
#define _TTC9ACTIONKITP33_3FD069E75236963E75C4BE2D87E9ECB629SPEECHSYNTHESIZERASYNCWRAPPER_H

@protocol WFSpeechSynthesizerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC9ActionKitP33_3FD069E75236963E75C4BE2D87E9ECB629SpeechSynthesizerAsyncWrapper : NSObject <WFSpeechSynthesizerDelegate>

 {
    ? synthesizer;
    ? continuation;
}




-(id)init;
-(void)speechSynthesizer:(id)arg0 didFailSpeakingUtterance:(id)arg1 error:(id)arg2 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingUtterance:(id)arg1 intoFile:(id)arg2 ;


@end


#endif