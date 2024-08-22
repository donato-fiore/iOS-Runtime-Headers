// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSPURCHASESIWARESULT_H
#define AMSPURCHASESIWARESULT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSPurchaseSIWAAuthorizationResult.h"
#import "AMSPurchaseResult.h"

@interface AMSPurchaseSIWAResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) AMSPurchaseSIWAAuthorizationResult *authorizationResult; // ivar: _authorizationResult
@property (readonly, nonatomic) AMSPurchaseResult *purchaseResult; // ivar: _purchaseResult


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPurchaseSIWAResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPurchaseResult:(id)arg0 authorizationResult:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif