// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLETEXTTOSPEECHMETA_H
#define QSSMUTABLETEXTTOSPEECHMETA_H



#import "QSSTextToSpeechMeta.h"
#import "QSSTextToSpeechResource.h"
#import "QSSTextToSpeechVoice.h"

@interface QSSMutableTextToSpeechMeta : QSSTextToSpeechMeta

@property (copy, nonatomic) QSSTextToSpeechResource *resource;
@property (copy, nonatomic) QSSTextToSpeechVoice *voice;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif