// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLESTARTSPEECHTRANSLATIONREQUEST_H
#define FTMUTABLESTARTSPEECHTRANSLATIONREQUEST_H

@class NSString, NSArray;


#import "FTStartSpeechTranslationRequest.h"
#import "FTStartSpeechRequest.h"
#import "FTTranslationRequest.h"

@interface FTMutableStartSpeechTranslationRequest : FTStartSpeechTranslationRequest

@property (copy, nonatomic) NSString *app_id;
@property (copy, nonatomic) NSString *conversation_id;
@property (nonatomic) NSInteger opt_in_status;
@property (copy, nonatomic) NSString *request_id;
@property (nonatomic) BOOL restricted_mode;
@property (copy, nonatomic) FTStartSpeechRequest *start_speech_request;
@property (nonatomic) BOOL streaming_mode;
@property (copy, nonatomic) NSArray *text_to_speech_requests;
@property (copy, nonatomic) NSArray *translation_locale_pairs;
@property (copy, nonatomic) FTTranslationRequest *translation_request;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif