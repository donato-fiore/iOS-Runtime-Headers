// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLETEXTTOSPEECHCACHEOBJECT_H
#define QSSMUTABLETEXTTOSPEECHCACHEOBJECT_H

@class NSData, NSArray;


#import "QSSTextToSpeechCacheObject.h"

@interface QSSMutableTextToSpeechCacheObject : QSSTextToSpeechCacheObject

@property (copy, nonatomic) NSData *audio;
@property (copy, nonatomic) NSArray *word_timing_info;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)audio:(id)arg0 ;


@end


#endif