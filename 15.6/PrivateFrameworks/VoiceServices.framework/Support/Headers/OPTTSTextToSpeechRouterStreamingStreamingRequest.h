// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OPTTSTEXTTOSPEECHROUTERSTREAMINGSTREAMINGREQUEST_H
#define OPTTSTEXTTOSPEECHROUTERSTREAMINGSTREAMINGREQUEST_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "OPTTSStartTextToSpeechStreamingRequest.h"

@interface OPTTSTextToSpeechRouterStreamingStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechRouterStreamingStreamingRequest _root;
}


@property (readonly, nonatomic) OPTTSStartTextToSpeechStreamingRequest *contentAsOPTTSStartTextToSpeechStreamingRequest;
@property (readonly, nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRouterStreamingStreamingRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRouterStreamingStreamingRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif