// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLESTARTSPEECHREQUEST_H
#define FTMUTABLESTARTSPEECHREQUEST_H

@class NSString;


#import "FTStartSpeechRequest.h"

@interface FTMutableStartSpeechRequest : FTStartSpeechRequest

@property (copy, nonatomic) NSString *application_name;
@property (copy, nonatomic) NSString *client_endpointer_model_version;
@property (nonatomic) NSInteger codec;
@property (copy, nonatomic) NSString *device_os;
@property (copy, nonatomic) NSString *device_type;
@property (nonatomic) BOOL disable_auto_punctuation;
@property (nonatomic) BOOL enable_endpoint_candidate;
@property (nonatomic) BOOL enable_hybrid_endpoint;
@property (nonatomic) BOOL enable_server_side_endpoint;
@property (nonatomic) BOOL enable_utterance_detection;
@property (nonatomic) NSInteger end_point_mode;
@property (copy, nonatomic) NSString *experiment_id;
@property (copy, nonatomic) NSString *fork_id;
@property (nonatomic) unsigned int initial_recognition_candidate_id;
@property (copy, nonatomic) NSString *input_origin;
@property (nonatomic) BOOL is_far_field;
@property (nonatomic) BOOL keyboard_dictation;
@property (copy, nonatomic) NSString *keyboard_identifier;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *metadata;
@property (copy, nonatomic) NSString *mic_type;
@property (copy, nonatomic) NSString *request_locale;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (nonatomic) NSInteger speech_request_source;
@property (nonatomic) int start_audio_bookmark;
@property (nonatomic) NSUInteger start_endpointing_at;
@property (nonatomic) NSUInteger start_recognition_at;
@property (nonatomic) BOOL store_audio;
@property (nonatomic) BOOL stream_results;
@property (nonatomic) BOOL stream_unstable_results;
@property (nonatomic) BOOL tandem_mode;
@property (copy, nonatomic) NSString *task_name;
@property (copy, nonatomic) NSString *udm_host;
@property (nonatomic) int udm_port;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif