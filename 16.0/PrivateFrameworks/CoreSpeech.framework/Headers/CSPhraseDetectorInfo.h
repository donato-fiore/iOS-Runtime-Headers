// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSPHRASEDETECTORINFO_H
#define CSPHRASEDETECTORINFO_H

@class CSVoiceTriggerPhraseConfig;

#import <Foundation/Foundation.h>


@interface CSPhraseDetectorInfo : NSObject

@property (nonatomic) float effectiveKeywordThreshold; // ivar: _effectiveKeywordThreshold
@property (nonatomic) BOOL hasPendingNearMiss; // ivar: _hasPendingNearMiss
@property (retain, nonatomic) CSVoiceTriggerPhraseConfig *phraseConfig; // ivar: _phraseConfig


-(id)initWithPhraseConfig:(id)arg0 ;


@end


#endif