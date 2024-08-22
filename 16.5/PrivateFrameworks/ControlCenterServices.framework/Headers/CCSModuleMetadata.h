// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCSMODULEMETADATA_H
#define CCSMODULEMETADATA_H

@class NSString, NSURL, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CCSModuleMetadata : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *associatedBundleIdentifier; // ivar: _associatedBundleIdentifier
@property (readonly, copy, nonatomic) NSString *associatedBundleMinimumVersion; // ivar: _associatedBundleMinimumVersion
@property (readonly, copy, nonatomic) NSURL *moduleBundleURL; // ivar: _moduleBundleURL
@property (readonly, copy, nonatomic) NSString *moduleIdentifier; // ivar: _moduleIdentifier
@property (readonly, copy, nonatomic) NSSet *requiredDeviceCapabilities; // ivar: _requiredDeviceCapabilities
@property (readonly, copy, nonatomic) NSSet *supportedDeviceFamilies; // ivar: _supportedDeviceFamilies
@property (readonly, nonatomic) NSUInteger visibilityPreference; // ivar: _visibilityPreference


+(id)_requiredCapabilitiesForInfoDictionary:(id)arg0 ;
+(id)_supportedDeviceFamiliesForBundleInfoDictionary:(id)arg0 ;
+(id)metadataForBundleAtURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithModuleIdentifier:(id)arg0 supportedDeviceFamilies:(id)arg1 requiredDeviceCapabilities:(id)arg2 associatedBundleIdentifier:(id)arg3 associatedBundleMinimumVersion:(id)arg4 visibilityPreference:(NSUInteger)arg5 moduleBundleURL:(id)arg6 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif