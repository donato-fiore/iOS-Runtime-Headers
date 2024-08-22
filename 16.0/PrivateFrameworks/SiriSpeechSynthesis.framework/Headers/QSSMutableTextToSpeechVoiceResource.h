// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLETEXTTOSPEECHVOICERESOURCE_H
#define QSSMUTABLETEXTTOSPEECHVOICERESOURCE_H

@class NSData;


#import "QSSTextToSpeechVoiceResource.h"

@interface QSSMutableTextToSpeechVoiceResource : QSSTextToSpeechVoiceResource

@property (copy, nonatomic) NSData *data;
@property (nonatomic) NSInteger type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)data:(id)arg0 ;


@end


#endif