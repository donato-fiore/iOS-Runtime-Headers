// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSPURCHASESIWAAUTHORIZATIONRESULT_H
#define AMSPURCHASESIWAAUTHORIZATIONRESULT_H

@class AKAuthorization, NSError;
@protocol NSCopying, NSSecureCoding, AKCredential;

#import <Foundation/Foundation.h>


@interface AMSPurchaseSIWAAuthorizationResult : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) AKAuthorization *authorization; // ivar: _authorization
@property (readonly, nonatomic) NSObject<AKCredential> *authorizationCredential;
@property (retain, nonatomic) NSError *error; // ivar: _error


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPurchaseSIWAAuthorizationResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAuthorization:(id)arg0 error:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif