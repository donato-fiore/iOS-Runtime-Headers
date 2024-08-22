// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLETEXTNORMALIZATIONREQUEST_H
#define QSSMUTABLETEXTNORMALIZATIONREQUEST_H

@class NSString;


#import "QSSTextNormalizationRequest.h"

@interface QSSMutableTextNormalizationRequest : QSSTextNormalizationRequest

@property (copy, nonatomic) NSString *language;
@property (nonatomic) int nbest_variants_max;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *text;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif