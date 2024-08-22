// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSTEXTTOSPEECHREQUESTDEBUG_H
#define QSSTEXTTOSPEECHREQUESTDEBUG_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSTextToSpeechRequestDebug : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechRequestDebug _root;
}


@property (readonly, nonatomic) BOOL disable_cache;
@property (readonly, nonatomic) BOOL force_use_tts_service;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRequestDebug *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRequestDebug *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechRequestDebug> )addObjectToBuffer:(*void)arg0 ;


@end


#endif