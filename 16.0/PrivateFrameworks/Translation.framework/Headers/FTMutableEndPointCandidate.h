// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLEENDPOINTCANDIDATE_H
#define FTMUTABLEENDPOINTCANDIDATE_H

@class NSString;


#import "FTEndPointCandidate.h"

@interface FTMutableEndPointCandidate : FTEndPointCandidate

@property (nonatomic) int end_point_likelihood;
@property (nonatomic) int processed_audio_duration_ms;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif