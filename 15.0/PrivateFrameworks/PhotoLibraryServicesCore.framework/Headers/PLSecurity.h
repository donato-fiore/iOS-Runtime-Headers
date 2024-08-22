// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSECURITY_H
#define PLSECURITY_H


#import <Foundation/Foundation.h>


@interface PLSecurity : NSObject



+(BOOL)auditToken:(struct ? )arg0 hasEntitlement:(id)arg1 ;
+(BOOL)connection:(id)arg0 hasEntitlement:(id)arg1 ;
+(BOOL)connectionIsEntitledForPhotoKit:(id)arg0 ;
+(BOOL)containsPhotoKitEntitlement:(id)arg0 ;
+(BOOL)isEntitledForPhotoKit;
+(BOOL)isEntitledForPhotoKitOrPrivatePhotosTCCForToken:(struct ? )arg0 ;
+(BOOL)secTask:(struct __SecTask *)arg0 hasEntitlement:(id)arg1 ;
+(id)_secTask:(struct __SecTask *)arg0 grantedEntitlements:(id)arg1 ;
+(id)connection:(id)arg0 grantedEntitlements:(id)arg1 ;
+(id)connection:(id)arg0 valueForEntitlement:(id)arg1 ;
+(id)connection:(id)arg0 valuesForEntitlements:(id)arg1 ;


@end


#endif