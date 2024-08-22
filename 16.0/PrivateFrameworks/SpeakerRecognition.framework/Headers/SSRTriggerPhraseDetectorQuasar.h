// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSRTRIGGERPHRASEDETECTORQUASAR_H
#define SSRTRIGGERPHRASEDETECTORQUASAR_H

@class _EARSyncSpeechRecognizer, NSString;

#import <Foundation/Foundation.h>


@interface SSRTriggerPhraseDetectorQuasar : NSObject {
    _EARSyncSpeechRecognizer *_syncRecognizer;
    NSString *_locale;
}




-(id)analyzeWavData:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(id)endAudio;
-(id)initWithLocale:(id)arg0 configPath:(id)arg1 resourcePath:(id)arg2 ;
-(void)reset;


@end


#endif