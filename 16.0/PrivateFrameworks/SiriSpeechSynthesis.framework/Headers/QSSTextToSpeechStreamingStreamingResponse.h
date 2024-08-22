// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSTEXTTOSPEECHSTREAMINGSTREAMINGRESPONSE_H
#define QSSTEXTTOSPEECHSTREAMINGSTREAMINGRESPONSE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSBeginTextToSpeechStreamingResponse.h"
#import "QSSFinalTextToSpeechStreamingResponse.h"
#import "QSSPartialTextToSpeechStreamingResponse.h"
#import "QSSQssAckResponse.h"

@interface QSSTextToSpeechStreamingStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechStreamingStreamingResponse _root;
}


@property (readonly, nonatomic) QSSBeginTextToSpeechStreamingResponse *contentAsQSSBeginTextToSpeechStreamingResponse;
@property (readonly, nonatomic) QSSFinalTextToSpeechStreamingResponse *contentAsQSSFinalTextToSpeechStreamingResponse;
@property (readonly, nonatomic) QSSPartialTextToSpeechStreamingResponse *contentAsQSSPartialTextToSpeechStreamingResponse;
@property (readonly, nonatomic) QSSQssAckResponse *contentAsQSSQssAckResponse;
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