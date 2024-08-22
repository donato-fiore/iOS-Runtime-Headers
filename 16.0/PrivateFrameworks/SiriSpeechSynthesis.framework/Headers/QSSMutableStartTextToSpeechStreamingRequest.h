// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLESTARTTEXTTOSPEECHSTREAMINGREQUEST_H
#define QSSMUTABLESTARTTEXTTOSPEECHSTREAMINGREQUEST_H

@class NSArray, NSString;


#import "QSSStartTextToSpeechStreamingRequest.h"
#import "QSSTextToSpeechRequestContext.h"
#import "QSSTextToSpeechRequestDebug.h"
#import "QSSTextToSpeechRequestDevConfig.h"
#import "QSSTextToSpeechRequestExperiment.h"
#import "QSSTTSRequestFeatureFlags.h"
#import "QSSTextToSpeechRequestMeta.h"
#import "QSSTextToSpeechUserProfile.h"
#import "QSSTextToSpeechRequestProsodyTransferConfig.h"
#import "QSSTextToSpeechRequestProsodyControlConfig.h"

@interface QSSMutableStartTextToSpeechStreamingRequest : QSSStartTextToSpeechStreamingRequest

@property (nonatomic) NSInteger audio_type;
@property (copy, nonatomic) QSSTextToSpeechRequestContext *context;
@property (copy, nonatomic) NSArray *context_info;
@property (copy, nonatomic) QSSTextToSpeechRequestDebug *debug;
@property (copy, nonatomic) QSSTextToSpeechRequestDevConfig *dev_config;
@property (nonatomic) BOOL enable_word_timing_info;
@property (copy, nonatomic) QSSTextToSpeechRequestExperiment *experiment;
@property (copy, nonatomic) QSSTTSRequestFeatureFlags *feature_flags;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) QSSTextToSpeechRequestMeta *meta_info;
@property (nonatomic) NSInteger preferred_voice_type;
@property (copy, nonatomic) QSSTextToSpeechUserProfile *profile;
@property (copy, nonatomic) QSSTextToSpeechRequestProsodyTransferConfig *prosody_config;
@property (copy, nonatomic) QSSTextToSpeechRequestProsodyControlConfig *prosody_control_config;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *stream_id;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *voice_name;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif