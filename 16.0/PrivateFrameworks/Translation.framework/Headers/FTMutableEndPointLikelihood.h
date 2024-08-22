// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLEENDPOINTLIKELIHOOD_H
#define FTMUTABLEENDPOINTLIKELIHOOD_H

@class NSString;


#import "FTEndPointLikelihood.h"

@interface FTMutableEndPointLikelihood : FTEndPointLikelihood

@property (nonatomic) int end_point_likelihood;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif