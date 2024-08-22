// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLETEXTTOSPEECHCACHEOBJECT_H
#define FTMUTABLETEXTTOSPEECHCACHEOBJECT_H

@class NSData, NSArray;


#import "FTTextToSpeechCacheObject.h"

@interface FTMutableTextToSpeechCacheObject : FTTextToSpeechCacheObject

@property (copy, nonatomic) NSData *audio;
@property (copy, nonatomic) NSArray *word_timing_info;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)audio:(id)arg0 ;


@end


#endif