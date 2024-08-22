// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTTEXTTOSPEECHCACHEMETAINFO_H
#define FTTEXTTOSPEECHCACHEMETAINFO_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTAudioDescription.h"
#import "FTTextToSpeechMeta.h"

@interface FTTextToSpeechCacheMetaInfo : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechCacheMetaInfo _root;
}


@property (readonly, nonatomic) int audio_length;
@property (readonly, nonatomic) NSInteger audio_type;
@property (readonly, nonatomic) FTAudioDescription *decoder_description;
@property (readonly, nonatomic) BOOL enable_word_timing_info;
@property (readonly, nonatomic) FTTextToSpeechMeta *meta_info;
@property (readonly, nonatomic) NSString *original_session_id;
@property (readonly, nonatomic) FTAudioDescription *playback_description;
@property (readonly, nonatomic) NSString *text;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechCacheMetaInfo *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechCacheMetaInfo *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechCacheMetaInfo> )addObjectToBuffer:(*void)arg0 ;


@end


#endif