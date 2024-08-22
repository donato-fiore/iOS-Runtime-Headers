// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLESTARTTEXTTOSPEECHSTREAMINGREQUEST_H
#define FTMUTABLESTARTTEXTTOSPEECHSTREAMINGREQUEST_H

@class NSArray, NSString;


#import "FTStartTextToSpeechStreamingRequest.h"
#import "FTTextToSpeechRequestContext.h"
#import "FTTextToSpeechRequestDebug.h"
#import "FTTextToSpeechRequestDevConfig.h"
#import "FTTextToSpeechRequestExperiment.h"
#import "FTTTSRequestFeatureFlags.h"
#import "FTTextToSpeechRequestMeta.h"
#import "FTTextToSpeechUserProfile.h"
#import "FTTextToSpeechRequestProsodyTransferConfig.h"

@interface FTMutableStartTextToSpeechStreamingRequest : FTStartTextToSpeechStreamingRequest

@property (nonatomic) NSInteger audio_type;
@property (copy, nonatomic) FTTextToSpeechRequestContext *context;
@property (copy, nonatomic) NSArray *context_info;
@property (copy, nonatomic) FTTextToSpeechRequestDebug *debug;
@property (copy, nonatomic) FTTextToSpeechRequestDevConfig *dev_config;
@property (nonatomic) BOOL enable_word_timing_info;
@property (copy, nonatomic) FTTextToSpeechRequestExperiment *experiment;
@property (copy, nonatomic) FTTTSRequestFeatureFlags *feature_flags;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) FTTextToSpeechRequestMeta *meta_info;
@property (nonatomic) NSInteger preferred_voice_type;
@property (copy, nonatomic) FTTextToSpeechUserProfile *profile;
@property (copy, nonatomic) FTTextToSpeechRequestProsodyTransferConfig *prosody_config;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *stream_id;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *voice_name;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif