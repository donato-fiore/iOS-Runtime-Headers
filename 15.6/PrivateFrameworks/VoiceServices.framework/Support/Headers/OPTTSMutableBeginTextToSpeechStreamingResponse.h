// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OPTTSMUTABLEBEGINTEXTTOSPEECHSTREAMINGRESPONSE_H
#define OPTTSMUTABLEBEGINTEXTTOSPEECHSTREAMINGRESPONSE_H

@class NSString;


#import "OPTTSBeginTextToSpeechStreamingResponse.h"
#import "OPTTSAudioDescription.h"
#import "OPTTSTextToSpeechMeta.h"

@interface OPTTSMutableBeginTextToSpeechStreamingResponse : OPTTSBeginTextToSpeechStreamingResponse

@property (nonatomic) NSInteger audio_type;
@property (copy, nonatomic) OPTTSAudioDescription *decoder_description;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) OPTTSTextToSpeechMeta *meta_info;
@property (copy, nonatomic) OPTTSAudioDescription *playback_description;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *stream_id;
@property (nonatomic) float streaming_playback_buffer_size_in_seconds;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif