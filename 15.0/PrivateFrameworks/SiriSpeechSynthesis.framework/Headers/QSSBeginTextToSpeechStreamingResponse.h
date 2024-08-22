// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSBEGINTEXTTOSPEECHSTREAMINGRESPONSE_H
#define QSSBEGINTEXTTOSPEECHSTREAMINGRESPONSE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSAudioDescription.h"
#import "QSSTextToSpeechMeta.h"

@interface QSSBeginTextToSpeechStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *BeginTextToSpeechStreamingResponse _root;
}


@property (readonly, nonatomic) NSInteger audio_type;
@property (readonly, nonatomic) QSSAudioDescription *decoder_description;
@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) QSSTextToSpeechMeta *meta_info;
@property (readonly, nonatomic) QSSAudioDescription *playback_description;
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