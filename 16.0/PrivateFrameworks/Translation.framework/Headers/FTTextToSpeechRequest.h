// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTTEXTTOSPEECHREQUEST_H
#define FTTEXTTOSPEECHREQUEST_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTTextToSpeechRequestContext.h"
#import "FTTextToSpeechRequestDebug.h"
#import "FTTextToSpeechRequestDevConfig.h"
#import "FTTextToSpeechRequestExperiment.h"
#import "FTTTSRequestFeatureFlags.h"
#import "FTTextToSpeechRequestMeta.h"
#import "FTTextToSpeechUserProfile.h"
#import "FTTextToSpeechRequestProsodyTransferConfig.h"

@interface FTTextToSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechRequest _root;
}


@property (readonly, nonatomic) NSInteger audio_type;
@property (readonly, nonatomic) FTTextToSpeechRequestContext *context;
@property (readonly, nonatomic) NSArray *context_info;
@property (readonly, nonatomic) FTTextToSpeechRequestDebug *debug;
@property (readonly, nonatomic) FTTextToSpeechRequestDevConfig *dev_config;
@property (readonly, nonatomic) BOOL enable_word_timing_info;
@property (readonly, nonatomic) FTTextToSpeechRequestExperiment *experiment;
@property (readonly, nonatomic) FTTTSRequestFeatureFlags *feature_flags;
@property (readonly, nonatomic) NSString *gender;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) FTTextToSpeechRequestMeta *meta_info;
@property (readonly, nonatomic) NSInteger preferred_voice_type;
@property (readonly, nonatomic) FTTextToSpeechUserProfile *profile;
@property (readonly, nonatomic) FTTextToSpeechRequestProsodyTransferConfig *prosody_config;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *voice_name;


-(id)context_info_objectAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechRequest> )addObjectToBuffer:(*void)arg0 ;
-(void)context_info_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif