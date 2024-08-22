// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19CONTACTLESSREADERUI12VOCALREADING_H
#define _TTC19CONTACTLESSREADERUI12VOCALREADING_H

@protocol AVSpeechSynthesizerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC19ContactlessReaderUI12VocalReading : NSObject <AVSpeechSynthesizerDelegate>

 {
    ? inDelay;
    ? stoppedInDelay;
    ? voiceSynthesizer;
    ? handler;
}




-(id)init;
-(void)dealloc;
-(void)speechSynthesizer:(id)arg0 didCancelSpeechUtterance:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeechUtterance:(id)arg1 ;


@end


#endif