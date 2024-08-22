// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTTEXTTOSPEECHRESPONSE_H
#define FTTEXTTOSPEECHRESPONSE_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTAudioDescription.h"
#import "FTTextToSpeechResponseDevData.h"
#import "FTTextToSpeechFeature.h"
#import "FTTextToSpeechMeta.h"

@interface FTTextToSpeechResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechResponse _root;
}


@property (readonly, nonatomic) NSData *audio;
@property (readonly, nonatomic) NSInteger audio_type;
@property (readonly, nonatomic) FTAudioDescription *decoder_description;
@property (readonly, nonatomic) FTTextToSpeechResponseDevData *dev_data;
@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) FTTextToSpeechFeature *feature;
@property (readonly, nonatomic) FTTextToSpeechMeta *meta_info;
@property (readonly, nonatomic) FTAudioDescription *playback_description;
@property (readonly, nonatomic) int sample_rate;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSArray *word_timing_info;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechResponse *)arg1 verify:(BOOL)arg2 ;
-(id)word_timing_info_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechResponse> )addObjectToBuffer:(*void)arg0 ;
-(void)audio:(id)arg0 ;
-(void)word_timing_info_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif