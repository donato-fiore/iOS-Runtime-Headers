// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLETEXTTOSPEECHCACHECONTAINER_H
#define FTMUTABLETEXTTOSPEECHCACHECONTAINER_H

@class NSArray;


#import "FTTextToSpeechCacheContainer.h"
#import "FTTextToSpeechCacheMetaInfo.h"

@interface FTMutableTextToSpeechCacheContainer : FTTextToSpeechCacheContainer

@property (copy, nonatomic) FTTextToSpeechCacheMetaInfo *cache_meta_info;
@property (copy, nonatomic) NSArray *cache_object;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif