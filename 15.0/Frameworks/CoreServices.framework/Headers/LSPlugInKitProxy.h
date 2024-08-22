// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LSPLUGINKITPROXY_H
#define LSPLUGINKITPROXY_H

@class NSString, NSDictionary, NSNumber, NSUUID, NSDate;
@protocol LSDetachable, NSSecureCoding;


#import "LSBundleProxy.h"
#import "LSApplicationExtensionRecord.h"
#import "LSExtensionPoint.h"

@interface LSPlugInKitProxy : LSBundleProxy <LSDetachable, NSSecureCoding>

 {
    unsigned int _platform;
    unsigned int _pluginFlags;
    LSApplicationExtensionRecord *_appexRecord;
    NSString *_extensionPointID;
}


@property (readonly, nonatomic) LSBundleProxy *containingBundle; // ivar: _containingBundle
@property (readonly, nonatomic) LSExtensionPoint *extensionPoint;
@property (readonly, nonatomic) NSDictionary *infoPlist;
@property (readonly, nonatomic, getter=isOnSystemPartition) BOOL onSystemPartition; // ivar: _onSystemPartition
@property (readonly, nonatomic) NSString *originalIdentifier; // ivar: _originalIdentifier
@property (readonly, nonatomic) NSNumber *platform;
@property (readonly, nonatomic) BOOL pluginCanProvideIcon;
@property (readonly, nonatomic) NSString *pluginIdentifier; // ivar: _pluginIdentifier
@property (readonly, nonatomic) NSDictionary *pluginKitDictionary;
@property (readonly, nonatomic) NSUUID *pluginUUID; // ivar: _pluginUUID
@property (readonly, nonatomic) NSString *protocol; // ivar: _protocol
@property (readonly, nonatomic) NSDate *registrationDate; // ivar: _registrationDate
@property (readonly, nonatomic) NSString *teamID;


+(BOOL)supportsSecureCoding;
+(id)containingBundleIdentifiersForPlugInBundleIdentifiers:(id)arg0 error:(*id)arg1 ;
+(id)plugInKitProxyForPlugin:(unsigned int)arg0 withContext:(struct LSContext *)arg1 ;
+(id)plugInKitProxyForPlugin:(unsigned int)arg0 withContext:(struct LSContext *)arg1 applicationExtensionRecord:(id)arg2 resolveAndDetach:(BOOL)arg3 ;
+(id)plugInKitProxyForUUID:(id)arg0 bundleIdentifier:(id)arg1 pluginIdentifier:(id)arg2 effectiveIdentifier:(id)arg3 version:(id)arg4 bundleURL:(id)arg5 ;
+(id)pluginKitProxyForIdentifier:(id)arg0 ;
+(id)pluginKitProxyForURL:(id)arg0 ;
+(id)pluginKitProxyForUUID:(id)arg0 ;
-(BOOL)UPPValidated;
-(BOOL)_usesSystemPersona;
-(BOOL)freeProfileValidated;
-(BOOL)profileValidated;
-(NSUInteger)compatibilityState;
-(id)_initWithPlugin:(unsigned int)arg0 andContext:(struct LSContext *)arg1 applicationExtensionRecord:(id)arg2 resolveAndDetach:(BOOL)arg3 ;
-(id)_initWithUUID:(id)arg0 bundleIdentifier:(id)arg1 pluginIdentifier:(id)arg2 effectiveIdentifier:(id)arg3 version:(id)arg4 bundleURL:(id)arg5 ;
-(id)_localizedNameWithPreferredLocalizations:(id)arg0 useShortNameOnly:(BOOL)arg1 ;
-(id)_managedPersonas;
-(id)_valueForEqualityTesting;
-(id)boundIconsDictionary;
-(id)bundleType;
-(id)correspondingApplicationExtensionRecord;
-(id)dataContainerURL;
-(id)description;
-(id)groupContainerURLs;
-(id)iconDataForVariant:(int)arg0 withOptions:(int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)objectForInfoDictionaryKey:(id)arg0 ofClass:(Class)arg1 inScope:(NSUInteger)arg2 ;
-(id)signerIdentity;
-(id)signerOrganization;
-(void)detach;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif