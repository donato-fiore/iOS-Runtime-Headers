// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSDELEGATEPURCHASERESULT_H
#define AMSDELEGATEPURCHASERESULT_H

@protocol NSSecureCoding;


#import "AMSDelegateAuthenticateResult.h"
#import "AMSDelegatePurchaseRequest.h"

@interface AMSDelegatePurchaseResult : AMSDelegateAuthenticateResult <NSSecureCoding>



@property (retain, nonatomic) AMSDelegatePurchaseRequest *request; // ivar: _request


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif