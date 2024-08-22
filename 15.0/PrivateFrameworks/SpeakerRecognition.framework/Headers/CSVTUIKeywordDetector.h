// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSVTUIKEYWORDDETECTOR_H
#define CSVTUIKEYWORDDETECTOR_H

@class CSAudioCircularBuffer;

#import <Foundation/Foundation.h>

#import "SSRTriggerPhraseDetectorNDAPI.h"

@interface CSVTUIKeywordDetector : NSObject {
    SSRTriggerPhraseDetectorNDAPI *_keywordAnalyzer;
    float _lastKeywordScore;
    float _keywordThreshold;
    CSAudioCircularBuffer *_audioBuffer;
    NSUInteger _extraSamplesAtStart;
}




-(NSUInteger)_sampleLengthFrom:(unsigned int)arg0 To:(unsigned int)arg1 ;
-(id)analyze:(id)arg0 ;
-(id)initWithAsset:(id)arg0 ;
-(id)triggeredUtterance:(id)arg0 ;
-(void)reset;


@end


#endif