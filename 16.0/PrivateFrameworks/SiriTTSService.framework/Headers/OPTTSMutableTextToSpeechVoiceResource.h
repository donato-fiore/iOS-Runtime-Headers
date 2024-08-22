// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OPTTSMUTABLETEXTTOSPEECHVOICERESOURCE_H
#define OPTTSMUTABLETEXTTOSPEECHVOICERESOURCE_H

@class NSData;


#import "OPTTSTextToSpeechVoiceResource.h"

@interface OPTTSMutableTextToSpeechVoiceResource : OPTTSTextToSpeechVoiceResource

@property (copy, nonatomic) NSData *data;
@property (nonatomic) NSInteger type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)data:(id)arg0 ;


@end


#endif