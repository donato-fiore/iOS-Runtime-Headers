// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLETEXTNORMALIZATIONRESPONSE_H
#define QSSMUTABLETEXTNORMALIZATIONRESPONSE_H

@class NSString, NSArray;


#import "QSSTextNormalizationResponse.h"

@interface QSSMutableTextNormalizationResponse : QSSTextNormalizationResponse

@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSArray *tokens;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif