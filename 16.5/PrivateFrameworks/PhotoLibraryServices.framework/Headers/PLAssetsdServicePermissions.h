// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLASSETSDSERVICEPERMISSIONS_H
#define PLASSETSDSERVICEPERMISSIONS_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PLAssetsdServicePermissions : NSObject <NSCopying>



@property (nonatomic) BOOL allowsAuthorizationWithPhotoKitEntitlement; // ivar: _allowsAuthorizationWithPhotoKitEntitlement
@property (nonatomic) NSInteger requiredAuthorization; // ivar: _requiredAuthorization
@property (copy, nonatomic) NSArray *requiredEntitlements; // ivar: _requiredEntitlements


-(BOOL)_isAuthorizedForReadWriteWithContext:(id)arg0 ;
-(BOOL)_isAuthorizedForWriteOnlyWithContext:(id)arg0 ;
-(BOOL)_isAuthorizedViaPhotoKitEntitlementWithContext:(id)arg0 ;
-(BOOL)_isAuthorizedViaTCCWithContext:(id)arg0 ;
-(id)_errorForMissingEntitlements:(id)arg0 withContext:(id)arg1 ;
-(id)_verifyAuthorizationWithContext:(id)arg0 ;
-(id)_verifyEntitlementsWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPermissions:(id)arg0 ;
-(id)verifyPermissionsWithContext:(id)arg0 ;
-(void)refreshCachedAuthorizationsWithContext:(id)arg0 ;


@end


#endif