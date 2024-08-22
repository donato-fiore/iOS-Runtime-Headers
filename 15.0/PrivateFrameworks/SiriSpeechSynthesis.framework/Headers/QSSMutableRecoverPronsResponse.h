// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLERECOVERPRONSRESPONSE_H
#define QSSMUTABLERECOVERPRONSRESPONSE_H

@class NSString, NSArray;


#import "QSSRecoverPronsResponse.h"

@interface QSSMutableRecoverPronsResponse : QSSRecoverPronsResponse

@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSArray *recovery_return_codes;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSArray *voc_tokens;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif