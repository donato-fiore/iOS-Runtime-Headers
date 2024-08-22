// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSTEXTTOSPEECHREQUEST_H
#define QSSTEXTTOSPEECHREQUEST_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSTextToSpeechRequestContext.h"
#import "QSSTextToSpeechRequestDebug.h"
#import "QSSTextToSpeechRequestDevConfig.h"
#import "QSSTextToSpeechRequestExperiment.h"
#import "QSSTTSRequestFeatureFlags.h"
#import "QSSTextToSpeechRequestMeta.h"
#import "QSSTextToSpeechUserProfile.h"
#import "QSSTextToSpeechRequestProsodyTransferConfig.h"
#import "QSSTextToSpeechRequestProsodyControlConfig.h"

@interface QSSTextToSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechRequest _root;
}


@property (readonly, nonatomic) NSInteger audio_type;
@property (readonly, nonatomic) QSSTextToSpeechRequestContext *context;
@property (readonly, nonatomic) NSArray *context_info;
@property (readonly, nonatomic) QSSTextToSpeechRequestDebug *debug;
@property (readonly, nonatomic) QSSTextToSpeechRequestDevConfig *dev_config;
@property (readonly, nonatomic) BOOL enable_word_timing_info;
@property (readonly, nonatomic) QSSTextToSpeechRequestExperiment *experiment;
@property (readonly, nonatomic) QSSTTSRequestFeatureFlags *feature_flags;
@property (readonly, nonatomic) NSString *gender;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) QSSTextToSpeechRequestMeta *meta_info;
@property (readonly, nonatomic) NSInteger preferred_voice_type;
@property (readonly, nonatomic) QSSTextToSpeechUserProfile *profile;
@property (readonly, nonatomic) QSSTextToSpeechRequestProsodyTransferConfig *prosody_config;
@property (readonly, nonatomic) QSSTextToSpeechRequestProsodyControlConfig *prosody_control_config;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *voice_name;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif