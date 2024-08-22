// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBBUNDLEPROPERTIES_H
#define RBBUNDLEPROPERTIES_H

@class RBSProcessIdentifier, RBSProcessIdentity, NSString, NSURL, NSDictionary;
@protocol RBBundleProperties;

#import <Foundation/Foundation.h>

#import "RBBundlePropertiesLSProvider.h"
#import "RBBundlePropertiesBSXPCProvider.h"
#import "RBLSBundleProperties.h"
#import "RBXPCBundleProperties.h"

@interface RBBundleProperties : NSObject <RBBundleProperties>

 {
    RBBundlePropertiesLSProvider *_lsProvider;
    RBBundlePropertiesBSXPCProvider *_xpcProvider;
    RBSProcessIdentifier *_processIdentifier;
    RBSProcessIdentity *_processIdentity;
    RBLSBundleProperties *_lsBundleProperties;
    RBXPCBundleProperties *_xpcBundleProperties;
}


@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundlePath;
@property (readonly, nonatomic) BOOL continuousBackgroundMode;
@property (readonly, nonatomic) NSURL *dataContainerURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *environmentVariables;
@property (readonly, copy, nonatomic) NSString *executablePath;
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier;
@property (readonly, nonatomic) BOOL hasPreferredJetsamBand;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isExtension;
@property (readonly, nonatomic) int platform;
@property (readonly, nonatomic) int preferredJetsamBand;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsBackgroundAudio;
@property (readonly, nonatomic) BOOL supportsBackgroundContentFetching;
@property (readonly, nonatomic) BOOL supportsBackgroundNetworkAuthentication;
@property (readonly, nonatomic) BOOL supportsUnboundedTaskCompletion;
@property (readonly, nonatomic) BOOL usesSocketMonitoring;


-(id)bundleInfoValuesForKeys:(id)arg0 ;
-(id)initWithLSProvider:(id)arg0 xpcProvider:(id)arg1 processIdentity:(id)arg2 processIdentifier:(id)arg3 ;


@end


#endif