// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCUIAPPSIGNER_H
#define MCUIAPPSIGNER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface MCUIAppSigner : NSObject

@property (retain, nonatomic) NSArray *applications; // ivar: _applications
@property (nonatomic) BOOL appsRequireTrust; // ivar: _appsRequireTrust
@property (nonatomic) BOOL appsRequireVerification; // ivar: _appsRequireVerification
@property (nonatomic) BOOL appsRequireVerificationSoon; // ivar: _appsRequireVerificationSoon
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) BOOL hasFreeDeveloperProvisioningProfile; // ivar: _hasFreeDeveloperProvisioningProfile
@property (nonatomic) BOOL hasUniversalProvisioningProfile; // ivar: _hasUniversalProvisioningProfile
@property (retain, nonatomic) NSString *identity; // ivar: _identity
@property (nonatomic) NSInteger numberOfAppsRequiringVerification; // ivar: _numberOfAppsRequiringVerification
@property (nonatomic) NSInteger numberOfAppsRequiringVerificationSoon; // ivar: _numberOfAppsRequiringVerificationSoon
@property (retain, nonatomic) NSArray *profiles; // ivar: _profiles


+(id)_uppProfilesBySignerIDWithOutFreeDevProfilesBySignerID:(*id)arg0 ;
+(id)enterpriseAppSignersWithOutDeveloperAppSigners:(*id)arg0 ;
+(void)_addProfile:(id)arg0 toSignerIdentity:(id)arg1 inDictionary:(id)arg2 ;
-(BOOL)_isTrustRequiredForBundleIDs:(id)arg0 outNotVerifiedAppCount:(*NSInteger)arg1 outExpiringSoonAppCount:(*NSInteger)arg2 ;
-(BOOL)isTrusted;
-(id)_displayNameFromIdentity:(id)arg0 hasFreeDev:(BOOL)arg1 hasUPP:(BOOL)arg2 ;
-(id)initWithIdentity:(id)arg0 applications:(id)arg1 profiles:(id)arg2 hasUPP:(BOOL)arg3 hasFreeDeveloper:(BOOL)arg4 ;
-(void)refreshApplications;
-(void)removeApplication:(id)arg0 ;


@end


#endif