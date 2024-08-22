// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLEFINISHAUDIO_H
#define FTMUTABLEFINISHAUDIO_H

@class NSArray;


#import "FTFinishAudio.h"

@interface FTMutableFinishAudio : FTFinishAudio

@property (copy, nonatomic) NSArray *features_at_endpoint;
@property (nonatomic) int packet_count;
@property (copy, nonatomic) NSArray *server_feature_latency_distribution;
@property (nonatomic) float total_audio_recorded_seconds;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif