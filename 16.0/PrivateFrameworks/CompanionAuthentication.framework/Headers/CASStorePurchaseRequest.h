// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CASSTOREPURCHASEREQUEST_H
#define CASSTOREPURCHASEREQUEST_H

@class ACAccount, AMSDelegatePurchaseRequest;
@protocol NSSecureCoding;


#import "CASAuthenticationRequest.h"

@interface CASStorePurchaseRequest : CASAuthenticationRequest <NSSecureCoding>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) AMSDelegatePurchaseRequest *purchaseRequest; // ivar: _purchaseRequest


+(BOOL)supportsSecureCoding;
-(NSInteger)authType;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif