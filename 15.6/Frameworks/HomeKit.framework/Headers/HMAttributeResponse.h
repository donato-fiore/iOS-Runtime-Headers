// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMATTRIBUTERESPONSE_H
#define HMATTRIBUTERESPONSE_H



#import "HMResponseBase.h"
#import "HMAttributeRequest.h"

@interface HMAttributeResponse : HMResponseBase

@property (readonly, nonatomic) HMAttributeRequest *request;


-(BOOL)isEqual:(id)arg0 ;


@end


#endif