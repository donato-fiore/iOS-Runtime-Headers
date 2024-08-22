// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLEFINALTEXTTOSPEECHSTREAMINGRESPONSE_H
#define QSSMUTABLEFINALTEXTTOSPEECHSTREAMINGRESPONSE_H

@class NSString;


#import "QSSFinalTextToSpeechStreamingResponse.h"

@interface QSSMutableFinalTextToSpeechStreamingResponse : QSSFinalTextToSpeechStreamingResponse

@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *stream_id;
@property (nonatomic) int total_pkt_number;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif