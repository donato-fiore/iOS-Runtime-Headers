// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKENTITLEMENTS_H
#define _HKENTITLEMENTS_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface _HKEntitlements : NSObject {
    NSString *_applicationIdentifier;
}


@property (readonly, copy, nonatomic) NSDictionary *entitlementValues; // ivar: _entitlementValues


+(id)_allowedEntitlementsSet;
+(id)_containerAppExtensionEntitlementsForCurrentTask;
+(id)_entitlementsWithSecTask:(struct __SecTask *)arg0 valueOverrides:(id)arg1 error:(*id)arg2 ;
+(id)entitlementsForCurrentTaskWithError:(*id)arg0 ;
+(id)entitlementsWithApplicationIdentifier:(id)arg0 ;
+(id)entitlementsWithConnection:(id)arg0 error:(*id)arg1 ;
+(id)entitlementsWithDictionary:(id)arg0 ;
+(void)_setEntitlementsForCurrentTask:(id)arg0 ;
-(BOOL)arrayEntitlement:(id)arg0 containsString:(id)arg1 ;
-(BOOL)hasAccessEntitlementWithIdentifer:(id)arg0 ;
-(BOOL)hasBackgroundDeliveryAPIAccess;
-(BOOL)hasEntitlement:(id)arg0 ;
-(BOOL)hasPrivateAccessEntitlementWithIdentifer:(id)arg0 ;
-(BOOL)hasPrivateMetadataAccess;
-(id)_initWithEntitlementValues:(id)arg0 ;
-(id)_typesFromIdentifierArray:(id)arg0 ;
-(id)applicationIdentifier;
-(id)description;
-(id)init;
-(id)stringForEntitlement:(id)arg0 ;
-(id)typesForReadAuthorizationBypass;
-(id)typesForReadAuthorizationOverride;
-(id)typesForWriteAuthorizationOverride;
-(id)valueForEntitlement:(id)arg0 ;


@end


#endif