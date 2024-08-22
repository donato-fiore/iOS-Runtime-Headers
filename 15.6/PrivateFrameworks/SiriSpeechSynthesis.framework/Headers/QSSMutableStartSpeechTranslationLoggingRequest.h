// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLESTARTSPEECHTRANSLATIONLOGGINGREQUEST_H
#define QSSMUTABLESTARTSPEECHTRANSLATIONLOGGINGREQUEST_H

@class NSString, NSArray;


#import "QSSStartSpeechTranslationLoggingRequest.h"
#import "QSSLanguageDetected.h"
#import "QSSTranslationLocalePair.h"

@interface QSSMutableStartSpeechTranslationLoggingRequest : QSSStartSpeechTranslationLoggingRequest

@property (copy, nonatomic) NSString *conversation_id;
@property (copy, nonatomic) QSSLanguageDetected *detected_locale;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSArray *senses;
@property (copy, nonatomic) QSSTranslationLocalePair *translation_locale_pair;
@property (copy, nonatomic) NSArray *user_interacted_senses;
@property (copy, nonatomic) NSString *user_selected_locale;
@property (copy, nonatomic) NSString *user_selected_sense;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif