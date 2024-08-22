// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSVOICETRIGGERAIRPODWEARERDETECTIONCONFIG_H
#define CSVOICETRIGGERAIRPODWEARERDETECTIONCONFIG_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CSVoiceTriggerAirPodWearerDetectionConfig : NSObject

@property (readonly, nonatomic) float minimumPhraseLength; // ivar: _minimumPhraseLength
@property (readonly, nonatomic) float myriadThreshold; // ivar: _myriadThreshold
@property (readonly, nonatomic) NSArray *phrasesToSkipBoronDecisionMaking; // ivar: _phrasesToSkipBoronDecisionMaking
@property (readonly, nonatomic) float shadowMicScoreThreshold; // ivar: _shadowMicScoreThreshold
@property (readonly, nonatomic) float threshold; // ivar: _threshold


-(id)initWithThreshold:(float)arg0 minimumPhraseLength:(float)arg1 shadowMicScoreThreshold:(float)arg2 myriadThreshold:(float)arg3 phrasesToSkipBoronDecisionMaking:(id)arg4 ;


@end


#endif