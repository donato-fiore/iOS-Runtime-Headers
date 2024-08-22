// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLEENDPOINTCANDIDATE_H
#define QSSMUTABLEENDPOINTCANDIDATE_H

@class NSString;


#import "QSSEndPointCandidate.h"

@interface QSSMutableEndPointCandidate : QSSEndPointCandidate

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