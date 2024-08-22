// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPLUGINCORE_H
#define PKPLUGINCORE_H

@class NSDictionary, NSString, NSData, NSURL, NSUUID, NSArray, NSDate;
@protocol PKProxyFactory;

#import <Foundation/Foundation.h>


@interface PKPlugInCore : NSObject

@property (nonatomic) NSUInteger annotationTimestamp; // ivar: _annotationTimestamp
@property (retain) NSDictionary *annotations; // ivar: _annotations
@property (readonly) NSDictionary *attributes;
@property (readonly, nonatomic) NSString *bootInstance;
@property (retain) NSDictionary *bundleInfoDictionary; // ivar: _bundleInfoDictionary
@property (retain) NSData *cdhash; // ivar: _cdhash
@property (copy) NSString *containingBundleIdentifier; // ivar: _containingBundleIdentifier
@property (readonly) NSString *containingPath;
@property (copy) NSURL *containingUrl; // ivar: _containingUrl
@property (readonly, nonatomic) NSURL *dataContainerURL; // ivar: _dataContainerURL
@property (readonly) NSUUID *discoveryInstanceUUID; // ivar: _discoveryInstanceUUID
@property (retain) NSDictionary *entitlements; // ivar: _entitlements
@property (readonly) unsigned int extensionPointPlatform; // ivar: _extensionPointPlatform
@property NSUInteger hubProtocolVersion; // ivar: _hubProtocolVersion
@property (retain) NSString *identifier; // ivar: _identifier
@property (readonly) BOOL isAppExtension;
@property (readonly) BOOL isData;
@property (readonly) BOOL isDedicated;
@property (readonly) BOOL isHybrid;
@property (readonly) BOOL isMultiplexed;
@property BOOL isRBManaged; // ivar: _isRBManaged
@property NSInteger lastModified; // ivar: _lastModified
@property (retain) NSArray *launchPersonas; // ivar: _launchPersonas
@property (copy) NSString *localizedContainingName; // ivar: _localizedContainingName
@property (readonly) NSDictionary *localizedFileProviderActionNames; // ivar: _localizedFileProviderActionNames
@property (readonly) NSString *localizedName; // ivar: _localizedName
@property (readonly) NSString *localizedShortName; // ivar: _localizedShortName
@property (readonly) BOOL oldStyle;
@property BOOL onSystemVolume; // ivar: _onSystemVolume
@property (retain) NSString *originalIdentifier; // ivar: _originalIdentifier
@property (readonly) NSString *path;
@property (retain) NSDictionary *plugInDictionary; // ivar: _plugInDictionary
@property (readonly) NSString *principalSpec;
@property (readonly) id *protocolSpec;
@property (readonly, nonatomic) NSObject<PKProxyFactory> *proxyFactory; // ivar: _proxyFactory
@property (copy) NSString *requirement; // ivar: _requirement
@property (readonly) NSString *sdkSpec;
@property (readonly) BOOL shouldTerminateOnHold;
@property (readonly) NSDate *timestamp;
@property (retain) NSURL *url; // ivar: _url
@property (retain) NSUUID *uuid; // ivar: _uuid
@property (readonly) NSString *version;


+(id)readSDKDictionary:(id)arg0 forPlatform:(unsigned int)arg1 proxyFactory:(id)arg2 ;
-(BOOL)hasEntitlement:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setDictionaries:(id)arg0 ;
-(BOOL)setupWithForm:(id)arg0 ;
-(BOOL)setupWithName:(id)arg0 extensionPointPlatform:(unsigned int)arg1 url:(id)arg2 bundleInfo:(id)arg3 uuid:(id)arg4 discoveryInstanceUUID:(id)arg5 extensionPointCache:(id)arg6 ;
-(BOOL)useBundle:(id)arg0 error:(*id)arg1 ;
-(BOOL)usesHostPersona;
-(NSUInteger)hash;
-(id)_localizedFileProviderActionNamesForPKDict:(id)arg0 fromBundle:(id)arg1 ;
-(id)attribute:(id)arg0 ;
-(id)augmentInterface:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)diagnose;
-(id)embeddedCodePath;
-(id)embeddedProtocolSpec;
-(id)export:(*id)arg0 ;
-(id)infoKey:(id)arg0 ;
-(id)init;
-(id)initWithForm:(id)arg0 proxyFactory:(id)arg1 ;
-(id)initWithName:(id)arg0 extensionPointPlatform:(unsigned int)arg1 url:(id)arg2 bundleInfo:(id)arg3 uuid:(id)arg4 discoveryInstanceUUID:(id)arg5 extensionPointCache:(id)arg6 proxyFactory:(id)arg7 ;
-(id)initWithProxyFactory:(id)arg0 ;
-(id)mergeSDKDictionary:(id)arg0 intoExtensionDictionary:(id)arg1 ;
-(id)mergeSharedResources:(id)arg0 into:(id)arg1 ;
-(id)normalizeInfoDictionary:(id)arg0 ;
-(id)pluginKey:(id)arg0 ;
-(id)resolveSDKWithInfoPlist:(id)arg0 extensionPointCache:(id)arg1 ;
-(id)sdkDictionaryWithInfoPlist:(id)arg0 extensionPointCache:(id)arg1 ;
-(id)sdkOnlyKeyPaths;
-(id)valueForEntitlement:(id)arg0 ;
-(void)_loadLocalizedFileProviderActionNames;
-(void)_loadLocalizedNames;
-(void)canonicalize;
-(void)localizedInfoDictionaryForKeys:(id)arg0 completion:(id)arg1 ;
-(void)setAnnotation:(id)arg0 value:(id)arg1 ;
-(void)updateFromForm:(id)arg0 ;


@end


#endif