// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTAUTHORIZATIONINVALIDDATASTATEPARAM_H
#define PKPAYMENTAUTHORIZATIONINVALIDDATASTATEPARAM_H

@class NSArray, NSError;


#import "PKPaymentAuthorizationStateParam.h"

@interface PKPaymentAuthorizationInvalidDataStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) NSArray *clientErrors; // ivar: _clientErrors
@property (nonatomic) NSInteger dataType; // ivar: _dataType
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) NSInteger status; // ivar: _status


+(id)paramWithDataType:(NSInteger)arg0 status:(NSInteger)arg1 error:(id)arg2 clientErrors:(id)arg3 ;
-(id)description;


@end


#endif