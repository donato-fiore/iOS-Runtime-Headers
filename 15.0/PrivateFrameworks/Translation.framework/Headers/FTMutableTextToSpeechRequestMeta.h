// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLETEXTTOSPEECHREQUESTMETA_H
#define FTMUTABLETEXTTOSPEECHREQUESTMETA_H

@class NSString;


#import "FTTextToSpeechRequestMeta.h"

@interface FTMutableTextToSpeechRequestMeta : FTTextToSpeechRequestMeta

@property (copy, nonatomic) NSString *app_id;
@property (nonatomic) NSInteger channel_type;
@property (nonatomic) BOOL is_synthesis;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif