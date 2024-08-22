// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTBEGINTEXTTOSPEECHSTREAMINGRESPONSE_H
#define FTBEGINTEXTTOSPEECHSTREAMINGRESPONSE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTAudioDescription.h"
#import "FTTextToSpeechMeta.h"

@interface FTBeginTextToSpeechStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *BeginTextToSpeechStreamingResponse _root;
}


@property (readonly, nonatomic) NSInteger audio_type;
@property (readonly, nonatomic) FTAudioDescription *decoder_description;
@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) FTTextToSpeechMeta *meta_info;
@property (readonly, nonatomic) FTAudioDescription *playback_description;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *stream_id;
@property (readonly, nonatomic) float streaming_playback_buffer_size_in_seconds;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BeginTextToSpeechStreamingResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct BeginTextToSpeechStreamingResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::BeginTextToSpeechStreamingResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif