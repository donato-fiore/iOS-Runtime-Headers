// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLEBATCHTRANSLATIONFEEDBACKREQUEST_H
#define FTMUTABLEBATCHTRANSLATIONFEEDBACKREQUEST_H

@class NSString;


#import "FTBatchTranslationFeedbackRequest.h"

@interface FTMutableBatchTranslationFeedbackRequest : FTBatchTranslationFeedbackRequest

@property (copy, nonatomic) NSString *app_id;
@property (copy, nonatomic) NSString *device_type;
@property (copy, nonatomic) NSString *errors;
@property (copy, nonatomic) NSString *os_version;
@property (copy, nonatomic) NSString *safari_version;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *source_content;
@property (copy, nonatomic) NSString *source_language;
@property (copy, nonatomic) NSString *target_language;
@property (copy, nonatomic) NSString *translated_content;
@property (copy, nonatomic) NSString *url;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif