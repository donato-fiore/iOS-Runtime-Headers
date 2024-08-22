// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSOURCE_H
#define HKSOURCE_H

@class NSString, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKSource : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_name;
    NSString *_bundleIdentifier;
}


@property (readonly) NSString *bundleIdentifier;
@property (nonatomic, getter=_isLocalDevice, setter=_setLocalDevice:) BOOL localDevice; // ivar: _localDevice
@property (readonly) NSString *name;
@property (nonatomic, getter=_options, setter=_setOptions:) NSUInteger options; // ivar: _options
@property (copy, nonatomic, getter=_owningAppBundleIdentifier, setter=_setOwningAppBundleIdentifier:) NSString *owningAppBundleIdentifier; // ivar: _owningAppBundleIdentifier
@property (copy, nonatomic, getter=_productType, setter=_setProductType:) NSString *productType; // ivar: _productType
@property (retain, nonatomic, getter=_sourceID, setter=_setSourceID:) NSNumber *sourceID; // ivar: _sourceID


+(BOOL)_isPlaceholderBundleIdentifier:(id)arg0 ;
+(BOOL)_representsCurrentDeviceWithBundleIdentifier:(id)arg0 ;
+(BOOL)isAppleDeviceBundleIdentifier:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)_sourceOptionsForAppEntitlements:(id)arg0 ;
+(id)_connectedGymSource;
+(id)_currentSourceProductType:(BOOL)arg0 ;
+(id)_generateIdentifierForAppleDevice;
+(id)_generateIdentifierForAppleDeviceWithUUID:(id)arg0 ;
+(id)_localDeviceSource;
+(id)_privateSourceForClinicalAccountIdentifier:(id)arg0 name:(id)arg1 ;
+(id)_publicSourceForClinicalExternalIdentifier:(id)arg0 name:(id)arg1 ;
+(id)_researchStudiesDirectoryURL;
+(id)_sourceBundleIdentifierWithEntitlements:(id)arg0 processBundleIdentifier:(id)arg1 isExtension:(BOOL)arg2 ;
+(id)_sourceNameWithRepresentsCurrentDevice:(BOOL)arg0 defaultSource:(BOOL)arg1 ;
+(id)_sourceWithBundleIdentifier:(id)arg0 defaultBundleIdentifier:(id)arg1 appEntitlements:(id)arg2 name:(id)arg3 ;
+(id)_sourceWithBundleIdentifier:(id)arg0 name:(id)arg1 productType:(id)arg2 options:(NSUInteger)arg3 ;
+(id)_uncachedDefaultSource;
+(id)_uncachedDefaultSourceWithEntitlements:(id)arg0 ;
+(id)defaultSource;
-(BOOL)_hasFirstPartyBundleID;
-(BOOL)_isAllowedBackgroundDelivery;
-(BOOL)_isAppleDevice;
-(BOOL)_isAppleWatch;
-(BOOL)_isApplication;
-(BOOL)_isClinicalSource;
-(BOOL)_isConnectedGymSource;
-(BOOL)_isHidden;
-(BOOL)_isPreferredSource;
-(BOOL)_isResearchStudy;
-(BOOL)_requiresAuthorization;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_deducedClinicalAccountIdentifier;
-(id)_fetchBundleWithError:(*id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif