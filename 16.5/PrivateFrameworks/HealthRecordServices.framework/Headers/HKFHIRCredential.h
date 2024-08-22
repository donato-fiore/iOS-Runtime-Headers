// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFHIRCREDENTIAL_H
#define HKFHIRCREDENTIAL_H

@class NSString;
@protocol NSCopying, NSSecureCoding;


#import "HKOAuth2Credential.h"

@interface HKFHIRCredential : HKOAuth2Credential <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *patientID; // ivar: _patientID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToCredential:(id)arg0 epsilonExpiration:(CGFloat)arg1 ;
-(NSUInteger)hash;
-(id)initWithAccessToken:(id)arg0 refreshToken:(id)arg1 expiration:(id)arg2 requestedScopeString:(id)arg3 scopes:(id)arg4 ;
-(id)initWithAccessToken:(id)arg0 refreshToken:(id)arg1 patientID:(id)arg2 expiration:(id)arg3 requestedScopeString:(id)arg4 scopeString:(id)arg5 ;
-(id)initWithAccessToken:(id)arg0 refreshToken:(id)arg1 patientID:(id)arg2 expiration:(id)arg3 requestedScopeString:(id)arg4 scopes:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif