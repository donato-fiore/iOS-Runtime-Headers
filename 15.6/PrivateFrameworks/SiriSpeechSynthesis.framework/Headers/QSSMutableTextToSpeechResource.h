// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLETEXTTOSPEECHRESOURCE_H
#define QSSMUTABLETEXTTOSPEECHRESOURCE_H

@class NSString;


#import "QSSTextToSpeechResource.h"

@interface QSSMutableTextToSpeechResource : QSSTextToSpeechResource

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *version;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif