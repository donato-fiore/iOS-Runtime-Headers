// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLESTARTSPEECHTRANSLATIONREQUEST_H
#define QSSMUTABLESTARTSPEECHTRANSLATIONREQUEST_H

@class NSString, NSArray;


#import "QSSStartSpeechTranslationRequest.h"
#import "QSSStartSpeechRequest.h"
#import "QSSTranslationRequest.h"

@interface QSSMutableStartSpeechTranslationRequest : QSSStartSpeechTranslationRequest

@property (copy, nonatomic) NSString *app_id;
@property (copy, nonatomic) NSString *conversation_id;
@property (nonatomic) NSInteger opt_in_status;
@property (copy, nonatomic) NSString *request_id;
@property (nonatomic) BOOL restricted_mode;
@property (copy, nonatomic) QSSStartSpeechRequest *start_speech_request;
@property (nonatomic) BOOL streaming_mode;
@property (copy, nonatomic) NSArray *text_to_speech_requests;
@property (copy, nonatomic) NSArray *translation_locale_pairs;
@property (copy, nonatomic) QSSTranslationRequest *translation_request;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif