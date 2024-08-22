// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEBATCHTRANSLATIONLOGGINGREQUEST_H
#define QSSMUTABLEBATCHTRANSLATIONLOGGINGREQUEST_H

@class NSString;


#import "QSSBatchTranslationLoggingRequest.h"

@interface QSSMutableBatchTranslationLoggingRequest : QSSBatchTranslationLoggingRequest

@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int time_to_first_response;
@property (nonatomic) int time_to_page_complete;
@property (nonatomic) int time_to_viewport_complete;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif