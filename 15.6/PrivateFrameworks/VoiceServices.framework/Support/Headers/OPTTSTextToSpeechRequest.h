// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OPTTSTEXTTOSPEECHREQUEST_H
#define OPTTSTEXTTOSPEECHREQUEST_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "OPTTSTextToSpeechRequestContext.h"
#import "OPTTSTextToSpeechRequestExperiment.h"
#import "OPTTSTTSRequestFeatureFlags.h"
#import "OPTTSTextToSpeechRequestMeta.h"

@interface OPTTSTextToSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechRequest _root;
}


@property (readonly, nonatomic) NSInteger audio_type;
@property (readonly, nonatomic) OPTTSTextToSpeechRequestContext *context;
@property (readonly, nonatomic) NSArray *context_info;
@property (readonly, nonatomic) BOOL enable_word_timing_info;
@property (readonly, nonatomic) OPTTSTextToSpeechRequestExperiment *experiment;
@property (readonly, nonatomic) OPTTSTTSRequestFeatureFlags *feature_flags;
@property (readonly, nonatomic) NSString *gender;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) OPTTSTextToSpeechRequestMeta *meta_info;
@property (readonly, nonatomic) NSInteger preferred_voice_type;
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