// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFAPPLICATION_H
#define DMFAPPLICATION_H

@class NSNumber, NSString, NSDictionary, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DMFApplicationInstallProgress.h"

@interface DMFApplication : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *adamID; // ivar: _adamID
@property (readonly, copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly, copy, nonatomic) NSString *applicationType; // ivar: _applicationType
@property (readonly, copy, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, copy, nonatomic) NSNumber *betaExternalVersionIdentifier; // ivar: _betaExternalVersionIdentifier
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (readonly, copy, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (readonly, copy, nonatomic) NSNumber *dynamicUsage; // ivar: _dynamicUsage
@property (readonly, copy, nonatomic) NSNumber *externalVersionIdentifier; // ivar: _externalVersionIdentifier
@property (readonly, copy, nonatomic) NSDictionary *feedback; // ivar: _feedback
@property (readonly, nonatomic) BOOL fileSharingEnabled; // ivar: _fileSharingEnabled
@property (readonly, copy, nonatomic) NSData *iconData; // ivar: _iconData
@property (readonly, nonatomic) BOOL isAppUpdate; // ivar: _isAppUpdate
@property (readonly, nonatomic) BOOL isBetaApp; // ivar: _isBetaApp
@property (readonly, nonatomic) BOOL isInstalled; // ivar: _isInstalled
@property (readonly, nonatomic) BOOL isManaged; // ivar: _isManaged
@property (readonly, nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (readonly, nonatomic) BOOL isRemoveable; // ivar: _isRemoveable
@property (readonly, nonatomic) BOOL isValidated; // ivar: _isValidated
@property (readonly, nonatomic) NSUInteger managementFlags; // ivar: _managementFlags
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSNumber *onDemandResourcesUsage; // ivar: _onDemandResourcesUsage
@property (readonly, nonatomic) DMFApplicationInstallProgress *progress; // ivar: _progress
@property (readonly, copy, nonatomic) NSString *shortVersionString; // ivar: _shortVersionString
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly, copy, nonatomic) NSNumber *staticUsage; // ivar: _staticUsage
@property (readonly, copy, nonatomic) NSString *unusedRedemptionCode; // ivar: _unusedRedemptionCode


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithApplicationIdentifier:(id)arg0 bundleIdentifier:(id)arg1 name:(id)arg2 iconData:(id)arg3 bundleVersion:(id)arg4 shortVersionString:(id)arg5 applicationType:(id)arg6 adamID:(id)arg7 externalVersionIdentifier:(id)arg8 betaExternalVersionIdentifier:(id)arg9 staticUsage:(id)arg10 dynamicUsage:(id)arg11 onDemandResourcesUsage:(id)arg12 unusedRedemptionCode:(id)arg13 attributes:(id)arg14 configuration:(id)arg15 feedback:(id)arg16 state:(NSUInteger)arg17 managementFlags:(NSUInteger)arg18 isManaged:(BOOL)arg19 isValidated:(BOOL)arg20 isInstalled:(BOOL)arg21 isPlaceholder:(BOOL)arg22 isAppUpdate:(BOOL)arg23 isBetaApp:(BOOL)arg24 isRemoveable:(BOOL)arg25 fileSharingEnabled:(BOOL)arg26 progress:(id)arg27 ;
-(id)initWithBundleIdentifier:(id)arg0 name:(id)arg1 iconData:(id)arg2 applicationType:(id)arg3 adamID:(id)arg4 externalVersionNumber:(id)arg5 betaExternalVersionIdentifier:(id)arg6 isInstalled:(BOOL)arg7 isPlaceholder:(BOOL)arg8 isAppUpdate:(BOOL)arg9 isBetaApp:(BOOL)arg10 isRemoveable:(BOOL)arg11 fileSharingEnabled:(BOOL)arg12 progress:(id)arg13 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif