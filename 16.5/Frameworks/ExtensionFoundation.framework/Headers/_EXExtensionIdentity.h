// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXEXTENSIONIDENTITY_H
#define _EXEXTENSIONIDENTITY_H

@class NSUUID, NSArray, NSDictionary, NSString, LSBundleRecord, NSURL, ISIcon;
@protocol _EXExtensionConfigurationProviding, NSSecureCoding, _EXExtensionRepresenting;

#import <Foundation/Foundation.h>


@interface _EXExtensionIdentity : NSObject <_EXExtensionConfigurationProviding, NSSecureCoding, _EXExtensionRepresenting>



@property (readonly) NSUUID *UUID; // ivar: _UUID
@property (readonly) NSArray *alternateSandboxProfileNames;
@property (readonly) NSDictionary *attributes;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) BOOL canDisable;
@property (readonly) NSObject<_EXExtensionConfigurationProviding> *configuration;
@property (readonly) Class connectionHandlerClass;
@property (readonly) LSBundleRecord *containingBundleRecord;
@property (readonly) NSURL *containingURL; // ivar: _containingURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned char defaultUserElection; // ivar: _defaultUserElection
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL enabled;
@property (readonly) NSUInteger enablementState;
@property (readonly) NSDictionary *entitlements;
@property (readonly) NSURL *executableURL;
@property (readonly) Class extensionClass;
@property (readonly) Class extensionContextClass;
@property (readonly) Class extensionContextClass;
@property (readonly) NSDictionary *extensionDictionary; // ivar: _extensionDictionary
@property (readonly) NSDictionary *extensionPointConfiguration;
@property (readonly) NSString *extensionPointIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class hostContextClass;
@property (readonly) ISIcon *icon;
@property (readonly) NSString *internalServiceName;
@property (readonly) NSString *localizedName;
@property (readonly) unsigned int platform; // ivar: _platform
@property (readonly) BOOL presentsUserInterface;
@property (readonly) BOOL presentsUserInterface;
@property (readonly) Class principalClass;
@property (readonly) NSDictionary *requiredHostEntitlements;
@property (readonly) BOOL requiresHostToBeContainerApp;
@property (readonly) BOOL requiresLegacyInfrastructure;
@property (readonly) BOOL requiresMacCatalystBehavior;
@property (readonly) BOOL requiresSceneHosting;
@property (readonly) NSArray *roles;
@property (readonly) NSString *sandboxProfileName;
@property (readonly) NSDictionary *sdkDictionary; // ivar: _sdkDictionary
@property (readonly) NSString *serviceName;
@property (readonly) BOOL showsInExtensionsManager;
@property (readonly) NSArray *spotlightImporterIdentifiers;
@property (readonly) BOOL spotlightIndexable;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsNSExtensionPlistKeys;
@property (readonly, getter=isSystemComponent) BOOL systemComponent;
@property (readonly) BOOL targetsSystemExtensionPoint;
@property (readonly) NSUInteger type;
@property (readonly) BOOL unelected;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly) NSURL *url; // ivar: _url
@property (readonly) unsigned char userElection; // ivar: _userElection


+(BOOL)disableExtension:(id)arg0 error:(*id)arg1 ;
+(BOOL)enableExtension:(id)arg0 error:(*id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToExtension:(id)arg0 ;
-(id)_init;
-(id)entitlementNamed:(id)arg0 ofClass:(Class)arg1 ;
-(id)executableURLWithError:(*id)arg0 ;
-(id)initWithApplicationExtensionRecord:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlugInKitProxy:(id)arg0 ;
-(id)makeXPCConnectionWithError:(*id)arg0 ;
-(id)xpcOverlayDictionaryOverridingSandboxProfileName:(id)arg0 multiInstance:(BOOL)arg1 arguments:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif