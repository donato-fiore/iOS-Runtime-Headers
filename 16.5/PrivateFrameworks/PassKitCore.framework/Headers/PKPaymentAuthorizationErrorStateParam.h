// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTAUTHORIZATIONERRORSTATEPARAM_H
#define PKPAYMENTAUTHORIZATIONERRORSTATEPARAM_H

@class NSError;


#import "PKPaymentAuthorizationStateParam.h"

@interface PKPaymentAuthorizationErrorStateParam : PKPaymentAuthorizationStateParam

@property (nonatomic, getter=isClientFailure) BOOL clientFailure; // ivar: _clientFailure
@property (retain, nonatomic) NSError *error; // ivar: _error


+(id)paramWithError:(id)arg0 ;
+(id)paramWithError:(id)arg0 clientFailure:(BOOL)arg1 ;
-(id)description;


@end


#endif