// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSPARTIALTEXTTOSPEECHSTREAMINGRESPONSE_H
#define QSSPARTIALTEXTTOSPEECHSTREAMINGRESPONSE_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSTextToSpeechFeature.h"

@interface QSSPartialTextToSpeechStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *PartialTextToSpeechStreamingResponse _root;
}


@property (readonly, nonatomic) NSData *audio;
@property (readonly, nonatomic) int current_pkt_number;
@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) QSSTextToSpeechFeature *feature;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *stream_id;
@property (readonly, nonatomic) NSArray *word_timing_info;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct PartialTextToSpeechStreamingResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct PartialTextToSpeechStreamingResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::PartialTextToSpeechStreamingResponse> )addObjectToBuffer:(*void)arg0 ;
-(void)audio:(id)arg0 ;


@end


#endif