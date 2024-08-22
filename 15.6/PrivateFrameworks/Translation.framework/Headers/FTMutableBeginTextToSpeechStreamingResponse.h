// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEBEGINTEXTTOSPEECHSTREAMINGRESPONSE_H
#define FTMUTABLEBEGINTEXTTOSPEECHSTREAMINGRESPONSE_H

@class NSString;


#import "FTBeginTextToSpeechStreamingResponse.h"
#import "FTAudioDescription.h"
#import "FTTextToSpeechMeta.h"

@interface FTMutableBeginTextToSpeechStreamingResponse : FTBeginTextToSpeechStreamingResponse

@property (nonatomic) NSInteger audio_type;
@property (copy, nonatomic) FTAudioDescription *decoder_description;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) FTTextToSpeechMeta *meta_info;
@property (copy, nonatomic) FTAudioDescription *playback_description;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *stream_id;
@property (nonatomic) float streaming_playback_buffer_size_in_seconds;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif