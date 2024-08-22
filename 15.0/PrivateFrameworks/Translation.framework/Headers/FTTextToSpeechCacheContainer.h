// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTTEXTTOSPEECHCACHECONTAINER_H
#define FTTEXTTOSPEECHCACHECONTAINER_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTTextToSpeechCacheMetaInfo.h"

@interface FTTextToSpeechCacheContainer : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechCacheContainer _root;
}


@property (readonly, nonatomic) FTTextToSpeechCacheMetaInfo *cache_meta_info;
@property (readonly, nonatomic) NSArray *cache_object;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechCacheContainer *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechCacheContainer *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechCacheContainer> )addObjectToBuffer:(*void)arg0 ;


@end


#endif