// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OPTTSMUTABLESTARTTEXTTOSPEECHSTREAMINGREQUEST_H
#define OPTTSMUTABLESTARTTEXTTOSPEECHSTREAMINGREQUEST_H

@class NSArray, NSString;


#import "OPTTSStartTextToSpeechStreamingRequest.h"
#import "OPTTSTextToSpeechRequestContext.h"
#import "OPTTSTextToSpeechRequestDebug.h"
#import "OPTTSTextToSpeechRequestDevConfig.h"
#import "OPTTSTextToSpeechRequestExperiment.h"
#import "OPTTSTTSRequestFeatureFlags.h"
#import "OPTTSTextToSpeechRequestMeta.h"
#import "OPTTSTextToSpeechUserProfile.h"
#import "OPTTSTextToSpeechRequestProsodyTransferConfig.h"
#import "OPTTSTextToSpeechRequestProsodyControlConfig.h"

@interface OPTTSMutableStartTextToSpeechStreamingRequest : OPTTSStartTextToSpeechStreamingRequest

@property (nonatomic) NSInteger audio_type;
@property (copy, nonatomic) OPTTSTextToSpeechRequestContext *context;
@property (copy, nonatomic) NSArray *context_info;
@property (copy, nonatomic) OPTTSTextToSpeechRequestDebug *debug;
@property (copy, nonatomic) OPTTSTextToSpeechRequestDevConfig *dev_config;
@property (nonatomic) BOOL enable_word_timing_info;
@property (copy, nonatomic) OPTTSTextToSpeechRequestExperiment *experiment;
@property (copy, nonatomic) OPTTSTTSRequestFeatureFlags *feature_flags;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) OPTTSTextToSpeechRequestMeta *meta_info;
@property (nonatomic) NSInteger preferred_voice_type;
@property (copy, nonatomic) OPTTSTextToSpeechUserProfile *profile;
@property (copy, nonatomic) OPTTSTextToSpeechRequestProsodyTransferConfig *prosody_config;
@property (copy, nonatomic) OPTTSTextToSpeechRequestProsodyControlConfig *prosody_control_config;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *stream_id;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *voice_name;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif