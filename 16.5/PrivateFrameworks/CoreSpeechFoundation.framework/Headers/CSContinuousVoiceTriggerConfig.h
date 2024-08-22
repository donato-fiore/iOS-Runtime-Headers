// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSCONTINUOUSVOICETRIGGERCONFIG_H
#define CSCONTINUOUSVOICETRIGGERCONFIG_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CSContinuousVoiceTriggerConfig : NSObject

@property (readonly, nonatomic) NSString *configPathNDAPI; // ivar: _configPathNDAPI
@property (readonly, nonatomic) NSArray *silencePhIds; // ivar: _silencePhIds
@property (readonly, nonatomic) float threshold; // ivar: _threshold
@property (readonly, nonatomic) float twoShotDecisionWaitTime; // ivar: _twoShotDecisionWaitTime
@property (readonly, nonatomic) float twoShotThreshold; // ivar: _twoShotThreshold
@property (readonly, nonatomic) NSArray *voiceTriggerPhIds; // ivar: _voiceTriggerPhIds


-(id)initWithConfigPathNDAPI:(id)arg0 threshold:(float)arg1 twoShotThreshold:(float)arg2 twoShotDecisionWaitTime:(float)arg3 voiceTriggerPhIds:(id)arg4 silencePhIds:(id)arg5 ;


@end


#endif