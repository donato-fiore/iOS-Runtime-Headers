// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTSTARTTEXTTOSPEECHSTREAMINGREQUEST_H
#define FTSTARTTEXTTOSPEECHSTREAMINGREQUEST_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTTextToSpeechRequestContext.h"
#import "FTTextToSpeechRequestDebug.h"
#import "FTTextToSpeechRequestExperiment.h"
#import "FTTTSRequestFeatureFlags.h"
#import "FTTextToSpeechRequestMeta.h"
#import "FTTextToSpeechUserProfile.h"

@interface FTStartTextToSpeechStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *StartTextToSpeechStreamingRequest _root;
}


@property (readonly, nonatomic) NSInteger audio_type;
@property (readonly, nonatomic) FTTextToSpeechRequestContext *context;
@property (readonly, nonatomic) NSArray *context_info;
@property (readonly, nonatomic) FTTextToSpeechRequestDebug *debug;
@property (readonly, nonatomic) BOOL enable_word_timing_info;
@property (readonly, nonatomic) FTTextToSpeechRequestExperiment *experiment;
@property (readonly, nonatomic) FTTTSRequestFeatureFlags *feature_flags;
@property (readonly, nonatomic) NSString *gender;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) FTTextToSpeechRequestMeta *meta_info;
@property (readonly, nonatomic) NSInteger preferred_voice_type;
@property (readonly, nonatomic) FTTextToSpeechUserProfile *profile;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *stream_id;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *voice_name;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StartTextToSpeechStreamingRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StartTextToSpeechStreamingRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::StartTextToSpeechStreamingRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif