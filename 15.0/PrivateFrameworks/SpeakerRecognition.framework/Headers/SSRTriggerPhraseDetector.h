// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSRTRIGGERPHRASEDETECTOR_H
#define SSRTRIGGERPHRASEDETECTOR_H


#import <Foundation/Foundation.h>

#import "SSRTriggerPhraseDetectorNDAPI.h"
#import "SSRTriggerPhraseDetectorQuasar.h"

@interface SSRTriggerPhraseDetector : NSObject

@property (retain, nonatomic) SSRTriggerPhraseDetectorNDAPI *detectorNDAPI; // ivar: _detectorNDAPI
@property (retain, nonatomic) SSRTriggerPhraseDetectorQuasar *detectorQuasar; // ivar: _detectorQuasar
@property (nonatomic) float recognizerScoreScaleFactor; // ivar: _recognizerScoreScaleFactor


+(id)filterVTAudioFiles:(id)arg0 withLocale:(id)arg1 withAsset:(id)arg2 ;
-(id)initWithLocale:(id)arg0 asset:(id)arg1 ;
-(void)computeTriggerConfidenceForAudio:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif