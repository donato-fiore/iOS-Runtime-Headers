// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSDELEGATEPURCHASEREQUEST_H
#define AMSDELEGATEPURCHASEREQUEST_H

@class NSString;
@protocol NSSecureCoding;


#import "AMSDelegateAuthenticateRequest.h"
#import "AMSPurchaseResult.h"

@interface AMSDelegatePurchaseRequest : AMSDelegateAuthenticateRequest <NSSecureCoding>



@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (retain, nonatomic) AMSPurchaseResult *purchaseResult; // ivar: _purchaseResult


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPurchaseResult:(id)arg0 challenge:(id)arg1 userAgent:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif