// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLESERVERENDPOINTFEATURES_H
#define QSSMUTABLESERVERENDPOINTFEATURES_H

@class NSArray, NSString;


#import "QSSServerEndpointFeatures.h"

@interface QSSMutableServerEndpointFeatures : QSSServerEndpointFeatures

@property (nonatomic) CGFloat eos_likelihood;
@property (nonatomic) int num_of_words;
@property (copy, nonatomic) NSArray *pause_counts;
@property (nonatomic) int processed_audio_duration_ms;
@property (nonatomic) CGFloat silence_posterior;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *task_name;
@property (nonatomic) int trailing_silence_duration;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif