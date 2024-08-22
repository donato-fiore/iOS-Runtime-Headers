// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLETEXTTOSPEECHCACHEMETAINFO_H
#define FTMUTABLETEXTTOSPEECHCACHEMETAINFO_H

@class NSString;


#import "FTTextToSpeechCacheMetaInfo.h"
#import "FTAudioDescription.h"
#import "FTTextToSpeechMeta.h"

@interface FTMutableTextToSpeechCacheMetaInfo : FTTextToSpeechCacheMetaInfo

@property (nonatomic) int audio_length;
@property (nonatomic) NSInteger audio_type;
@property (copy, nonatomic) FTAudioDescription *decoder_description;
@property (nonatomic) BOOL enable_word_timing_info;
@property (copy, nonatomic) FTTextToSpeechMeta *meta_info;
@property (copy, nonatomic) NSString *original_session_id;
@property (copy, nonatomic) FTAudioDescription *playback_description;
@property (copy, nonatomic) NSString *text;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif