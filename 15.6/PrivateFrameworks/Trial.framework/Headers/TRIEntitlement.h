// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIENTITLEMENT_H
#define TRIENTITLEMENT_H


#import <Foundation/Foundation.h>


@interface TRIEntitlement : NSObject



+(BOOL)_isValidFormatForTeamId:(id)arg0 ;
+(BOOL)isEntitledToApplicationGroup:(id)arg0 withAuditToken:(struct ? )arg1 ;
+(id)_teamIdFromSecTaskWithAuditToken:(struct ? )arg0 ;
+(id)applicationBundleIdentifierFromSelf;
+(id)applicationBundleIdentifierWithAuditToken:(struct ? )arg0 ;
+(id)codeSignIdentifierWithAuditToken:(struct ? )arg0 ;
+(id)entitlementKeyForApplicationBundleIdentifier;
+(id)objectForCurrentProcessEntitlement:(id)arg0 ;
+(id)objectForEntitlement:(id)arg0 withAuditToken:(struct ? )arg1 ;
+(id)stringForCurrentProcessEntitlement:(id)arg0 ;
+(id)stringForEntitlement:(id)arg0 fromSecTask:(struct __SecTask *)arg1 ;
+(id)stringForEntitlement:(id)arg0 withAuditToken:(struct ? )arg1 ;
+(id)teamIdWithAuditToken:(struct ? )arg0 ;
+(id)valueForEntitlement:(id)arg0 fromSecTask:(struct __SecTask *)arg1 ofType:(*NSUInteger)arg2 ;


@end


#endif