// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CASSTOREPURCHASERESPONSE_H
#define CASSTOREPURCHASERESPONSE_H

@class AMSDelegatePurchaseResult;
@protocol NSSecureCoding;


#import "CASAuthenticationResponse.h"

@interface CASStorePurchaseResponse : CASAuthenticationResponse <NSSecureCoding>



@property (readonly, nonatomic) AMSDelegatePurchaseResult *purchaseResult; // ivar: _purchaseResult


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPurchaseResult:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif