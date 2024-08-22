// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSPURCHASESIWA_H
#define AMSPURCHASESIWA_H

@class AKAppleIDAuthenticationContext, NSString;
@protocol NSCopying, NSSecureCoding;


#import "AMSPurchase.h"

@interface AMSPurchaseSIWA : AMSPurchase <NSCopying, NSSecureCoding>



@property (retain, nonatomic) AKAppleIDAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *serviceID; // ivar: _serviceID
@property (copy, nonatomic) NSString *teamID; // ivar: _teamID


+(BOOL)supportsSecureCoding;
-(id)appProvidedData;
-(id)authenticationContextForRequest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPurchaseType:(NSInteger)arg0 buyParams:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif