// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMPREDICATEBASE_H
#define CEMPREDICATEBASE_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMPredicateBase : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadType; // ivar: _payloadType


+(id)predicateForPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)evaluateWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif