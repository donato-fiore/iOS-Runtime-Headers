// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEPARTIALTEXTTOSPEECHSTREAMINGRESPONSE_H
#define QSSMUTABLEPARTIALTEXTTOSPEECHSTREAMINGRESPONSE_H

@class NSData, NSString, NSArray;


#import "QSSPartialTextToSpeechStreamingResponse.h"
#import "QSSTextToSpeechFeature.h"

@interface QSSMutablePartialTextToSpeechStreamingResponse : QSSPartialTextToSpeechStreamingResponse

@property (copy, nonatomic) NSData *audio;
@property (nonatomic) int current_pkt_number;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) QSSTextToSpeechFeature *feature;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *stream_id;
@property (copy, nonatomic) NSArray *word_timing_info;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)audio:(id)arg0 ;


@end


#endif