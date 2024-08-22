// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCUIAPPSIGNER_H
#define MCUIAPPSIGNER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface MCUIAppSigner : NSObject

@property (readonly, nonatomic) NSInteger almostUntrustedAppCount; // ivar: _almostUntrustedAppCount
@property (readonly, nonatomic) NSArray *applications; // ivar: _applications
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL hasFreePP; // ivar: _hasFreePP
@property (readonly, nonatomic) BOOL hasUniversalPP; // ivar: _hasUniversalPP
@property (readonly, nonatomic) NSString *identity; // ivar: _identity
@property (readonly, nonatomic) BOOL isTrusted;
@property (readonly, nonatomic) NSArray *provisioningProfiles; // ivar: _provisioningProfiles
@property (readonly, nonatomic) NSInteger untrustedAppCount; // ivar: _untrustedAppCount


+(id)_displayNameFromIdentity:(id)arg0 hasFreePP:(BOOL)arg1 hasUPP:(BOOL)arg2 ;
+(id)_uppProfilesBySignerIDWithOutFreeDevProfilesBySignerID:(*id)arg0 ;
+(id)enterpriseAppSignersWithOutDeveloperAppSigners:(*id)arg0 ;
+(void)_addProfile:(id)arg0 toSignerIdentity:(id)arg1 inDictionary:(id)arg2 ;
-(id)initWithIdentity:(id)arg0 applications:(id)arg1 provisioningProfiles:(id)arg2 hasUPP:(BOOL)arg3 hasFreePP:(BOOL)arg4 ;
-(void)_updateUntrustedAppCountsForBundleIDs:(id)arg0 ;
-(void)main_removeMCUIReferenceForBundleID:(id)arg0 ;
-(void)refreshApplications;


@end


#endif