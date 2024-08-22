// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLETRANSLATIONREQUEST_H
#define QSSMUTABLETRANSLATIONREQUEST_H

@class NSString, NSArray;


#import "QSSTranslationRequest.h"
#import "QSSSiriPayloadTranslationInfo.h"
#import "QSSSiriTranslationInfo.h"
#import "QSSSpeechTranslationInfo.h"
#import "QSSWebTranslationInfo.h"

@interface QSSMutableTranslationRequest : QSSTranslationRequest

@property (copy, nonatomic) NSString *app_id;
@property (nonatomic) BOOL disable_log;
@property (nonatomic) NSInteger opt_in_status;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *sequence_id;
@property (copy, nonatomic) QSSSiriPayloadTranslationInfo *siri_payload_translation_info;
@property (copy, nonatomic) QSSSiriTranslationInfo *siri_translation_info;
@property (copy, nonatomic) NSString *source_language;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) QSSSpeechTranslationInfo *speech_translation_info;
@property (copy, nonatomic) NSString *target_language;
@property (copy, nonatomic) NSString *task;
@property (copy, nonatomic) NSArray *translation_phrase;
@property (copy, nonatomic) NSString *use_case;
@property (copy, nonatomic) QSSWebTranslationInfo *web_translation_info;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif