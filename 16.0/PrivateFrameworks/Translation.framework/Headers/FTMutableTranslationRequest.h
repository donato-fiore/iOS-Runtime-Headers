// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLETRANSLATIONREQUEST_H
#define FTMUTABLETRANSLATIONREQUEST_H

@class NSString, NSArray;


#import "FTTranslationRequest.h"
#import "FTSiriPayloadTranslationInfo.h"
#import "FTSiriTranslationInfo.h"
#import "FTSpeechTranslationInfo.h"
#import "FTWebTranslationInfo.h"

@interface FTMutableTranslationRequest : FTTranslationRequest

@property (copy, nonatomic) NSString *app_id;
@property (nonatomic) BOOL disable_log;
@property (nonatomic) NSInteger opt_in_status;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *sequence_id;
@property (copy, nonatomic) FTSiriPayloadTranslationInfo *siri_payload_translation_info;
@property (copy, nonatomic) FTSiriTranslationInfo *siri_translation_info;
@property (copy, nonatomic) NSString *source_language;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) FTSpeechTranslationInfo *speech_translation_info;
@property (copy, nonatomic) NSString *target_language;
@property (copy, nonatomic) NSString *task;
@property (copy, nonatomic) NSArray *translation_phrase;
@property (copy, nonatomic) FTWebTranslationInfo *web_translation_info;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif