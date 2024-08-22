// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLINICALEPHEMERALACCOUNT_H
#define HKCLINICALEPHEMERALACCOUNT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;


#import "HKClinicalAccount.h"
#import "HDFHIRAuthResponse.h"

@interface HKClinicalEphemeralAccount : HKClinicalAccount <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HDFHIRAuthResponse *authResponse; // ivar: _authResponse
@property (readonly, copy, nonatomic) NSString *requestedScopeString; // ivar: _requestedScopeString


+(BOOL)supportsSecureCoding;
+(id)ephemeralAccountIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGateway:(id)arg0 authResponse:(id)arg1 requestedScopeString:(id)arg2 ;
-(id)initWithProvenance:(id)arg0 authResponse:(id)arg1 requestedScopeString:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif