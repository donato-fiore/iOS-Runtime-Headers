// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OPTTSMUTABLETEXTTOSPEECHREQUESTMETA_H
#define OPTTSMUTABLETEXTTOSPEECHREQUESTMETA_H

@class NSString;


#import "OPTTSTextToSpeechRequestMeta.h"

@interface OPTTSMutableTextToSpeechRequestMeta : OPTTSTextToSpeechRequestMeta

@property (copy, nonatomic) NSString *app_id;
@property (nonatomic) NSInteger channel_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif