// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLETEXTTOSPEECHVOICE_H
#define QSSMUTABLETEXTTOSPEECHVOICE_H

@class NSString;


#import "QSSTextToSpeechVoice.h"

@interface QSSMutableTextToSpeechVoice : QSSTextToSpeechVoice

@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *quality;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *version;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif