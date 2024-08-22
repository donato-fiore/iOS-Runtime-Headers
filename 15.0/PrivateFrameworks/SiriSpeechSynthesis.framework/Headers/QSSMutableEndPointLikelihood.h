// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEENDPOINTLIKELIHOOD_H
#define QSSMUTABLEENDPOINTLIKELIHOOD_H

@class NSString;


#import "QSSEndPointLikelihood.h"

@interface QSSMutableEndPointLikelihood : QSSEndPointLikelihood

@property (nonatomic) int end_point_likelihood;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif