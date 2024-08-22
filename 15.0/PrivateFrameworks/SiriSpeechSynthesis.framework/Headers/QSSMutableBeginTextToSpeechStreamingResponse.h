// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEBEGINTEXTTOSPEECHSTREAMINGRESPONSE_H
#define QSSMUTABLEBEGINTEXTTOSPEECHSTREAMINGRESPONSE_H

@class NSString;


#import "QSSBeginTextToSpeechStreamingResponse.h"
#import "QSSAudioDescription.h"
#import "QSSTextToSpeechMeta.h"

@interface QSSMutableBeginTextToSpeechStreamingResponse : QSSBeginTextToSpeechStreamingResponse

@property (nonatomic) NSInteger audio_type;
@property (copy, nonatomic) QSSAudioDescription *decoder_description;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) QSSTextToSpeechMeta *meta_info;
@property (copy, nonatomic) QSSAudioDescription *playback_description;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *stream_id;
@property (nonatomic) float streaming_playback_buffer_size_in_seconds;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif