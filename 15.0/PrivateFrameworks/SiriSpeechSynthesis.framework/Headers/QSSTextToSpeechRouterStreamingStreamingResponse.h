// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSTEXTTOSPEECHROUTERSTREAMINGSTREAMINGRESPONSE_H
#define QSSTEXTTOSPEECHROUTERSTREAMINGSTREAMINGRESPONSE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSBeginTextToSpeechStreamingResponse.h"
#import "QSSFinalTextToSpeechStreamingResponse.h"
#import "QSSPartialTextToSpeechStreamingResponse.h"

@interface QSSTextToSpeechRouterStreamingStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechRouterStreamingStreamingResponse _root;
}


@property (readonly, nonatomic) QSSBeginTextToSpeechStreamingResponse *contentAsQSSBeginTextToSpeechStreamingResponse;
@property (readonly, nonatomic) QSSFinalTextToSpeechStreamingResponse *contentAsQSSFinalTextToSpeechStreamingResponse;
@property (readonly, nonatomic) QSSPartialTextToSpeechStreamingResponse *contentAsQSSPartialTextToSpeechStreamingResponse;
@property (readonly, nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRouterStreamingStreamingResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRouterStreamingStreamingResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif