// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLETEXTTOSPEECHRESPONSEDEVDATA_H
#define QSSMUTABLETEXTTOSPEECHRESPONSEDEVDATA_H

@class NSString;


#import "QSSTextToSpeechResponseDevData.h"
#import "QSSQSSVersionInfo.h"

@interface QSSMutableTextToSpeechResponseDevData : QSSTextToSpeechResponseDevData

@property (nonatomic) BOOL has_click;
@property (copy, nonatomic) NSString *log;
@property (copy, nonatomic) QSSQSSVersionInfo *server_info;
@property (copy, nonatomic) NSString *worker_process_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif