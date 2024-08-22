// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCSESSIONPARTICIPANTAUDIOSTREAMCONFIG_H
#define VCSESSIONPARTICIPANTAUDIOSTREAMCONFIG_H



#import "VCAudioStreamConfig.h"
#import "VCAudioRuleCollection.h"

@interface VCSessionParticipantAudioStreamConfig : VCAudioStreamConfig

@property (retain, nonatomic) VCAudioRuleCollection *audioRules; // ivar: _audioRules
@property (retain, nonatomic) VCAudioRuleCollection *audioRulesNegotiated; // ivar: _audioRulesNegotiated


-(void)dealloc;


@end


#endif