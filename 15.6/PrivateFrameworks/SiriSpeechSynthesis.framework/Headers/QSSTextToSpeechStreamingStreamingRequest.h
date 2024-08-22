// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSTEXTTOSPEECHSTREAMINGSTREAMINGREQUEST_H
#define QSSTEXTTOSPEECHSTREAMINGSTREAMINGREQUEST_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSStartTextToSpeechStreamingRequest.h"

@interface QSSTextToSpeechStreamingStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechStreamingStreamingRequest _root;
}


@property (readonly, nonatomic) QSSStartTextToSpeechStreamingRequest *contentAsQSSStartTextToSpeechStreamingRequest;
@property (readonly, nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechStreamingStreamingRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechStreamingStreamingRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::TextToSpeechStreamingStreamingRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif