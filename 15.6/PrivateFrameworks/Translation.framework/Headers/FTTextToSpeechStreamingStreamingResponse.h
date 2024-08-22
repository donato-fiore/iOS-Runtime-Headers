// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTTEXTTOSPEECHSTREAMINGSTREAMINGRESPONSE_H
#define FTTEXTTOSPEECHSTREAMINGSTREAMINGRESPONSE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTBeginTextToSpeechStreamingResponse.h"
#import "FTFinalTextToSpeechStreamingResponse.h"
#import "FTPartialTextToSpeechStreamingResponse.h"
#import "FTQssAckResponse.h"

@interface FTTextToSpeechStreamingStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechStreamingStreamingResponse _root;
}


@property (readonly, nonatomic) FTBeginTextToSpeechStreamingResponse *contentAsFTBeginTextToSpeechStreamingResponse;
@property (readonly, nonatomic) FTFinalTextToSpeechStreamingResponse *contentAsFTFinalTextToSpeechStreamingResponse;
@property (readonly, nonatomic) FTPartialTextToSpeechStreamingResponse *contentAsFTPartialTextToSpeechStreamingResponse;
@property (readonly, nonatomic) FTQssAckResponse *contentAsFTQssAckResponse;
@property (readonly, nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechStreamingStreamingResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechStreamingStreamingResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::TextToSpeechStreamingStreamingResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif