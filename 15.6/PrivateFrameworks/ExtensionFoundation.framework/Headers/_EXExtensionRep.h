// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EXEXTENSIONREP_H
#define _EXEXTENSIONREP_H

@class NSUUID, NSDictionary, NSString, NSURL;
@protocol _EXExtensionConfigurationProviding, NSSecureCoding, _EXExtensionRepresenting;

#import <Foundation/Foundation.h>


@interface _EXExtensionRep : NSObject <_EXExtensionConfigurationProviding, NSSecureCoding, _EXExtensionRepresenting>



@property (readonly) NSUUID *UUID; // ivar: _UUID
@property (readonly) NSDictionary *attributes;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSObject<_EXExtensionConfigurationProviding> *configuration;
@property (readonly) Class connectionHandlerClass;
@property (readonly) NSURL *containingURL; // ivar: _containingURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *entitlements;
@property (readonly) NSURL *executableURL;
@property (readonly) Class extensionContextClass;
@property (readonly) NSDictionary *extensionDictionary; // ivar: _extensionDictionary
@property (readonly) NSDictionary *extensionPointConfiguration;
@property (readonly) NSString *extensionPointIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class hostContextClass;
@property (readonly) NSString *internalServiceName;
@property (readonly) NSString *localizedName;
@property (readonly) unsigned int platform; // ivar: _platform
@property (readonly) BOOL presentsUserInterface;
@property (readonly) BOOL presentsUserInterface;
@property (readonly) Class principalClass;
@property (readonly) NSDictionary *requiredHostEntitlements;
@property (readonly) BOOL requiresMacCatalystBehavior;
@property (readonly) NSDictionary *sdkDictionary; // ivar: _sdkDictionary
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) NSUInteger type;
@property (readonly) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToExtension:(id)arg0 ;
-(id)_init;
-(id)entitlementNamed:(id)arg0 ofClass:(Class)arg1 ;
-(id)extensionProcessWithError:(*id)arg0 ;
-(id)initWithApplicationExtensionRecord:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlugInKitProxy:(id)arg0 ;
-(id)makeXPCConnectionWithError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif