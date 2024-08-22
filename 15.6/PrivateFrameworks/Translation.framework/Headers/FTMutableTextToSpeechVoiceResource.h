// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLETEXTTOSPEECHVOICERESOURCE_H
#define FTMUTABLETEXTTOSPEECHVOICERESOURCE_H

@class NSData;


#import "FTTextToSpeechVoiceResource.h"

@interface FTMutableTextToSpeechVoiceResource : FTTextToSpeechVoiceResource

@property (copy, nonatomic) NSData *data;
@property (nonatomic) NSInteger type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)data:(id)arg0 ;


@end


#endif