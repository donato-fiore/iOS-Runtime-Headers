// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRCARPLAYAPPDECLARATION_H
#define CRCARPLAYAPPDECLARATION_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface CRCarPlayAppDeclaration : NSObject

@property (nonatomic) NSUInteger _applicationCategory; // ivar: __applicationCategory
@property (retain, nonatomic) NSSet *autoMakerProtocols; // ivar: _autoMakerProtocols
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *bundlePath; // ivar: _bundlePath
@property (nonatomic) BOOL launchNotificationsUsingSiri; // ivar: _launchNotificationsUsingSiri
@property (nonatomic) BOOL launchUsingSiri; // ivar: _launchUsingSiri
@property (nonatomic) BOOL requiresGeoSupport; // ivar: _requiresGeoSupport
@property (nonatomic) BOOL supportsAudio; // ivar: _supportsAudio
@property (nonatomic) BOOL supportsCalling; // ivar: _supportsCalling
@property (nonatomic) BOOL supportsCharging; // ivar: _supportsCharging
@property (nonatomic) BOOL supportsCommunication; // ivar: _supportsCommunication
@property (nonatomic) BOOL supportsMaps; // ivar: _supportsMaps
@property (nonatomic) BOOL supportsMessaging; // ivar: _supportsMessaging
@property (nonatomic) BOOL supportsParking; // ivar: _supportsParking
@property (nonatomic) BOOL supportsPlayableContent; // ivar: _supportsPlayableContent
@property (nonatomic) BOOL supportsPublicSafety; // ivar: _supportsPublicSafety
@property (nonatomic) BOOL supportsQuickOrdering; // ivar: _supportsQuickOrdering
@property (nonatomic) BOOL supportsTemplates; // ivar: _supportsTemplates
@property (nonatomic, getter=isSystemApp) BOOL systemApp; // ivar: _systemApp


+(id)declarationForAppProxy:(id)arg0 ;
+(id)declarationForBundleIdentifier:(id)arg0 entitlements:(id)arg1 infoPlist:(id)arg2 ;
+(id)declarationForBundleIdentifier:(id)arg0 info:(id)arg1 entitlements:(id)arg2 ;
+(id)declarationForBundleIdentifier:(id)arg0 info:(id)arg1 entitlements:(id)arg2 bundlePath:(id)arg3 ;
+(id)requiredEntitlementKeys;
+(id)requiredInfoKeys;


@end


#endif