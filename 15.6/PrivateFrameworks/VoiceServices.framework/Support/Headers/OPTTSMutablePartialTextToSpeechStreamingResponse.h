// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OPTTSMUTABLEPARTIALTEXTTOSPEECHSTREAMINGRESPONSE_H
#define OPTTSMUTABLEPARTIALTEXTTOSPEECHSTREAMINGRESPONSE_H

@class NSData, NSString, NSArray;


#import "OPTTSPartialTextToSpeechStreamingResponse.h"

@interface OPTTSMutablePartialTextToSpeechStreamingResponse : OPTTSPartialTextToSpeechStreamingResponse

@property (copy, nonatomic) NSData *audio;
@property (nonatomic) int current_pkt_number;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *stream_id;
@property (copy, nonatomic) NSArray *word_timing_info;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)audio:(id)arg0 ;


@end


#endif