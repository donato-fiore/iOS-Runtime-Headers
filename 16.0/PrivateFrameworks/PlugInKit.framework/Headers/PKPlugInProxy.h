// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPLUGINPROXY_H
#define PKPLUGINPROXY_H

@class NSString, NSURL, NSDictionary, NSArray, NSNumber, NSUUID, NSDate;
@protocol PKPlugInProxy, PKBundleProxy, PKExtensionPointProxy;


#import "PKBundleProxy.h"

@interface PKPlugInProxy : PKBundleProxy <PKPlugInProxy>



@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSObject<PKBundleProxy> *containingBundle;
@property (readonly, nonatomic) NSURL *dataContainerURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSObject<PKExtensionPointProxy> *extensionPoint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *infoPlist;
@property (readonly, nonatomic) NSArray *launchPersonas;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic, getter=isOnSystemPartition) BOOL onSystemPartition;
@property (readonly, nonatomic) NSString *originalIdentifier;
@property (readonly, nonatomic) NSNumber *platform;
@property (readonly, nonatomic) NSString *pluginIdentifier;
@property (readonly, nonatomic) NSDictionary *pluginKitDictionary;
@property (readonly, nonatomic) NSUUID *pluginUUID;
@property (readonly, nonatomic) NSDate *registrationDate;
@property (readonly, nonatomic) NSURL *relativeAppStoreReceiptURL;
@property (readonly) Class superclass;


-(id)initWithLSPlugInKitProxy:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(id)objectForInfoDictionaryKey:(id)arg0 ofClass:(Class)arg1 inScope:(NSUInteger)arg2 ;


@end


#endif