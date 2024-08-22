// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEBATCHTRANSLATIONRESPONSE_H
#define QSSMUTABLEBATCHTRANSLATIONRESPONSE_H

@class NSString, NSArray;


#import "QSSBatchTranslationResponse.h"

@interface QSSMutableBatchTranslationResponse : QSSBatchTranslationResponse

@property (copy, nonatomic) NSString *paragraph_id;
@property (copy, nonatomic) NSString *request_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_string;
@property (copy, nonatomic) NSArray *span;
@property (copy, nonatomic) NSString *translated_text;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif