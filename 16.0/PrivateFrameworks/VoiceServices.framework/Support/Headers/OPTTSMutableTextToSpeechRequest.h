// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OPTTSMUTABLETEXTTOSPEECHREQUEST_H
#define OPTTSMUTABLETEXTTOSPEECHREQUEST_H

@class NSArray, NSString;


#import "OPTTSTextToSpeechRequest.h"
#import "OPTTSTextToSpeechRequestContext.h"
#import "OPTTSTextToSpeechRequestExperiment.h"
#import "OPTTSTTSRequestFeatureFlags.h"
#import "OPTTSTextToSpeechRequestMeta.h"

@interface OPTTSMutableTextToSpeechRequest : OPTTSTextToSpeechRequest

@property (nonatomic) NSInteger audio_type;
@property (copy, nonatomic) OPTTSTextToSpeechRequestContext *context;
@property (copy, nonatomic) NSArray *context_info;
@property (nonatomic) BOOL enable_word_timing_info;
@property (copy, nonatomic) OPTTSTextToSpeechRequestExperiment *experiment;
@property (copy, nonatomic) OPTTSTTSRequestFeatureFlags *feature_flags;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) OPTTSTextToSpeechRequestMeta *meta_info;
@property (nonatomic) NSInteger preferred_voice_type;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *voice_name;


+(id)genderStringFromGender:(NSInteger)arg0 ;
+(id)requestFromVSRequest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif