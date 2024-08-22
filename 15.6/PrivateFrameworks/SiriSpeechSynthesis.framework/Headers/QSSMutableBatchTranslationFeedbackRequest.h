// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLEBATCHTRANSLATIONFEEDBACKREQUEST_H
#define QSSMUTABLEBATCHTRANSLATIONFEEDBACKREQUEST_H

@class NSString;


#import "QSSBatchTranslationFeedbackRequest.h"

@interface QSSMutableBatchTranslationFeedbackRequest : QSSBatchTranslationFeedbackRequest

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