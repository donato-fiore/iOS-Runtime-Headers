// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTTEXTTOSPEECHMETA_H
#define FTTEXTTOSPEECHMETA_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTTextToSpeechResource.h"
#import "FTTextToSpeechVoice.h"

@interface FTTextToSpeechMeta : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechMeta _root;
}


@property (readonly, nonatomic) FTTextToSpeechResource *resource;
@property (readonly, nonatomic) FTTextToSpeechVoice *voice;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechMeta *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechMeta *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechMeta> )addObjectToBuffer:(*void)arg0 ;


@end


#endif