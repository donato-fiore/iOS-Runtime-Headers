// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLETEXTTOSPEECHCACHECONTAINER_H
#define QSSMUTABLETEXTTOSPEECHCACHECONTAINER_H

@class NSArray;


#import "QSSTextToSpeechCacheContainer.h"
#import "QSSTextToSpeechCacheMetaInfo.h"

@interface QSSMutableTextToSpeechCacheContainer : QSSTextToSpeechCacheContainer

@property (copy, nonatomic) QSSTextToSpeechCacheMetaInfo *cache_meta_info;
@property (copy, nonatomic) NSArray *cache_object;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif