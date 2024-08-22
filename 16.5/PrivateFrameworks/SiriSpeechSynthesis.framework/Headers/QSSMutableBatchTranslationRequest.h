// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLEBATCHTRANSLATIONREQUEST_H
#define QSSMUTABLEBATCHTRANSLATIONREQUEST_H

@class NSString, NSArray;


#import "QSSBatchTranslationRequest.h"

@interface QSSMutableBatchTranslationRequest : QSSBatchTranslationRequest

@property (copy, nonatomic) NSString *app_id;
@property (nonatomic) NSInteger opt_in_status;
@property (copy, nonatomic) NSArray *paragraphs;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *source_language;
@property (copy, nonatomic) NSString *target_language;
@property (copy, nonatomic) NSString *task;
@property (copy, nonatomic) NSString *url;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif