// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OPTTSMUTABLETEXTTOSPEECHREQUESTPROSODYCONTROLCONFIG_H
#define OPTTSMUTABLETEXTTOSPEECHREQUESTPROSODYCONTROLCONFIG_H



#import "OPTTSTextToSpeechRequestProsodyControlConfig.h"

@interface OPTTSMutableTextToSpeechRequestProsodyControlConfig : OPTTSTextToSpeechRequestProsodyControlConfig

@property (nonatomic) float global_energy;
@property (nonatomic) float global_pitch;
@property (nonatomic) float global_rate;
@property (nonatomic) float global_sent_duration;
@property (nonatomic) float global_sent_energy;
@property (nonatomic) float global_sent_pitch;
@property (nonatomic) float global_sent_pitchrange;
@property (nonatomic) float global_sent_tilt;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif