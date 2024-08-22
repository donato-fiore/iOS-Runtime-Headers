// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLEFINISHAUDIO_H
#define QSSMUTABLEFINISHAUDIO_H

@class NSArray;


#import "QSSFinishAudio.h"

@interface QSSMutableFinishAudio : QSSFinishAudio

@property (copy, nonatomic) NSArray *features_at_endpoint;
@property (nonatomic) int packet_count;
@property (copy, nonatomic) NSArray *server_feature_latency_distribution;
@property (nonatomic) float total_audio_recorded_seconds;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif