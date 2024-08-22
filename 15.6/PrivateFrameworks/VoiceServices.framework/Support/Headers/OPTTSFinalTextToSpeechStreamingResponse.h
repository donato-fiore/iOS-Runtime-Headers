// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OPTTSFINALTEXTTOSPEECHSTREAMINGRESPONSE_H
#define OPTTSFINALTEXTTOSPEECHSTREAMINGRESPONSE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface OPTTSFinalTextToSpeechStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *FinalTextToSpeechStreamingResponse _root;
}


@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *stream_id;
@property (readonly, nonatomic) int total_pkt_number;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct FinalTextToSpeechStreamingResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct FinalTextToSpeechStreamingResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::FinalTextToSpeechStreamingResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif