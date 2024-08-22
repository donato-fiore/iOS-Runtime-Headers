// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OPTTSTEXTTOSPEECHROUTERSTREAMINGSTREAMINGRESPONSE_H
#define OPTTSTEXTTOSPEECHROUTERSTREAMINGSTREAMINGRESPONSE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying, FLTBFBufferAccessor><NSCopying;

#import <Foundation/Foundation.h>

#import "OPTTSBeginTextToSpeechStreamingResponse.h"
#import "OPTTSFinalTextToSpeechStreamingResponse.h"
#import "OPTTSPartialTextToSpeechStreamingResponse.h"

@interface OPTTSTextToSpeechRouterStreamingStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechRouterStreamingStreamingResponse _root;
}


@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (readonly, nonatomic) OPTTSBeginTextToSpeechStreamingResponse *contentAsOPTTSBeginTextToSpeechStreamingResponse;
@property (readonly, nonatomic) OPTTSFinalTextToSpeechStreamingResponse *contentAsOPTTSFinalTextToSpeechStreamingResponse;
@property (readonly, nonatomic) OPTTSPartialTextToSpeechStreamingResponse *contentAsOPTTSPartialTextToSpeechStreamingResponse;
@property (readonly, nonatomic) NSInteger content_type;


+(Class)content_immutableClassForType:(NSInteger)arg0 ;
+(NSInteger)content_typeForImmutableObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRouterStreamingStreamingResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRouterStreamingStreamingResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif