// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLETEXTTOSPEECHRESOURCE_H
#define FTMUTABLETEXTTOSPEECHRESOURCE_H

@class NSString;


#import "FTTextToSpeechResource.h"

@interface FTMutableTextToSpeechResource : FTTextToSpeechResource

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *version;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif