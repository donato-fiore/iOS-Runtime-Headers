// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMEVENTBASE_H
#define CEMEVENTBASE_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMEventBase : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadType; // ivar: _payloadType


+(id)eventForPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif