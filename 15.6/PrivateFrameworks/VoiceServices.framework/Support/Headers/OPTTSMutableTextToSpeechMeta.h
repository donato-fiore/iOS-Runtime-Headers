// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OPTTSMUTABLETEXTTOSPEECHMETA_H
#define OPTTSMUTABLETEXTTOSPEECHMETA_H



#import "OPTTSTextToSpeechMeta.h"
#import "OPTTSTextToSpeechResource.h"
#import "OPTTSTextToSpeechVoice.h"

@interface OPTTSMutableTextToSpeechMeta : OPTTSTextToSpeechMeta

@property (copy, nonatomic) OPTTSTextToSpeechResource *resource;
@property (copy, nonatomic) OPTTSTextToSpeechVoice *voice;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif