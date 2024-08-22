// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLEPARTIALTEXTTOSPEECHSTREAMINGRESPONSE_H
#define FTMUTABLEPARTIALTEXTTOSPEECHSTREAMINGRESPONSE_H

@class NSData, NSString, NSArray;


#import "FTPartialTextToSpeechStreamingResponse.h"
#import "FTTextToSpeechFeature.h"

@interface FTMutablePartialTextToSpeechStreamingResponse : FTPartialTextToSpeechStreamingResponse

@property (copy, nonatomic) NSData *audio;
@property (nonatomic) int current_pkt_number;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) FTTextToSpeechFeature *feature;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *stream_id;
@property (copy, nonatomic) NSArray *word_timing_info;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)audio:(id)arg0 ;


@end


#endif