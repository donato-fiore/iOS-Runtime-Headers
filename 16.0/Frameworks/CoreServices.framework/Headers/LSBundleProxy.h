// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSBUNDLEPROXY_H
#define LSBUNDLEPROXY_H

@class NSString, NSURL, NSUUID, NSDictionary, NSArray;
@protocol NSSecureCoding;


#import "LSResourceProxy.h"
#import "_LSLazyPropertyList.h"

@interface LSBundleProxy : LSResourceProxy <NSSecureCoding>

 {
    NSString *_localizedShortName;
}


@property (readonly, nonatomic) BOOL UPPValidated;
@property (copy, nonatomic, setter=_setEntitlements:) _LSLazyPropertyList *_entitlements; // ivar: __entitlements
@property (copy, nonatomic, setter=_setEnvironmentVariables:) _LSLazyPropertyList *_environmentVariables; // ivar: __environmentVariables
@property (copy, nonatomic, setter=_setInfoDictionary:) _LSLazyPropertyList *_infoDictionary; // ivar: __infoDictionary
@property (readonly, nonatomic) NSURL *appStoreReceiptURL;
@property (readonly, nonatomic) NSURL *bundleContainerURL; // ivar: _bundleContainerURL
@property (readonly, nonatomic) NSString *bundleExecutable; // ivar: _bundleExecutable
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *bundleType;
@property (readonly, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (readonly, nonatomic) NSUUID *cacheGUID; // ivar: _cacheGUID
@property (readonly, nonatomic) NSString *canonicalExecutablePath;
@property (nonatomic, setter=_setCompatibilityState:) NSUInteger compatibilityState; // ivar: _compatibilityState
@property (readonly, nonatomic) NSURL *containerURL;
@property (readonly, nonatomic, getter=isContainerized) BOOL containerized; // ivar: _containerized
@property (readonly, nonatomic) NSURL *dataContainerURL;
@property (readonly, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSDictionary *environmentVariables;
@property (readonly, nonatomic) BOOL foundBackingBundle; // ivar: _foundBackingBundle
@property (readonly, nonatomic) BOOL freeProfileValidated;
@property (readonly, nonatomic) NSDictionary *groupContainerURLs;
@property (readonly, nonatomic) NSString *localizedShortName;
@property (copy, nonatomic) NSArray *machOUUIDs; // ivar: _machOUUIDs
@property (readonly, nonatomic) BOOL profileValidated;
@property (copy, nonatomic, setter=setSDKVersion:) NSString *sdkVersion; // ivar: _sdkVersion
@property (readonly, nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber
@property (readonly, nonatomic) NSString *signerIdentity;
@property (readonly, nonatomic) NSString *signerOrganization;


+(BOOL)canInstantiateFromDatabase;
+(BOOL)supportsSecureCoding;
+(id)bundleProxyForCurrentProcess;
+(id)bundleProxyForIdentifier:(id)arg0 ;
+(id)bundleProxyForURL:(id)arg0 ;
+(id)bundleProxyForURL:(id)arg0 error:(*id)arg1 ;
+(id)bundleProxyWithAuditToken:(struct ? )arg0 error:(*id)arg1 ;
+(void)clearBundleProxyForCurrentProcess;
-(BOOL)_hasAssociatedPersonas;
-(BOOL)_usesSystemPersona;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithBundleUnit:(unsigned int)arg0 context:(struct LSContext *)arg1 bundleType:(NSUInteger)arg2 bundleID:(id)arg3 localizedName:(id)arg4 bundleContainerURL:(id)arg5 dataContainerURL:(id)arg6 resourcesDirectoryURL:(id)arg7 iconsDictionary:(id)arg8 iconFileNames:(id)arg9 version:(id)arg10 ;
-(id)_localizedNameWithPreferredLocalizations:(id)arg0 useShortNameOnly:(BOOL)arg1 ;
-(id)_managedPersonas;
-(id)_valueForEqualityTesting;
-(id)appStoreReceiptName;
-(id)entitlementValueForKey:(id)arg0 ofClass:(Class)arg1 ;
-(id)entitlementValueForKey:(id)arg0 ofClass:(Class)arg1 valuesOfClass:(Class)arg2 ;
-(id)entitlementValuesForKeys:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedName;
-(id)localizedNameWithPreferredLocalizations:(id)arg0 useShortNameOnly:(BOOL)arg1 ;
-(id)localizedValuesForKeys:(id)arg0 fromTable:(id)arg1 ;
-(id)objectForInfoDictionaryKey:(id)arg0 ofClass:(Class)arg1 ;
-(id)objectForInfoDictionaryKey:(id)arg0 ofClass:(Class)arg1 valuesOfClass:(Class)arg2 ;
-(id)objectsForInfoDictionaryKeys:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif