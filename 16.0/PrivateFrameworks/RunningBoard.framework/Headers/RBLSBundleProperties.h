// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBLSBUNDLEPROPERTIES_H
#define RBLSBUNDLEPROPERTIES_H

@class NSString, NSURL, NSDictionary;
@protocol RBBundleProperties;

#import <Foundation/Foundation.h>


@interface RBLSBundleProperties : NSObject <RBBundleProperties>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *bundlePath; // ivar: _path
@property (readonly, nonatomic) BOOL continuousBackgroundMode; // ivar: _continuousBackgroundMode
@property (readonly, nonatomic) NSURL *dataContainerURL; // ivar: _dataContainerURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *environmentVariables; // ivar: _environmentVariables
@property (readonly, copy, nonatomic) NSString *executablePath; // ivar: _executablePath
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier; // ivar: _extensionPointIdentifier
@property (readonly, nonatomic) BOOL hasPreferredJetsamBand; // ivar: _hasPreferredJetsamBand
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isExtension; // ivar: _isExtension
@property (readonly, nonatomic) int platform; // ivar: _platform
@property (readonly, nonatomic) int preferredJetsamBand; // ivar: _preferredJetsamBand
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsBackgroundAudio; // ivar: _supportsBackgroundAudio
@property (readonly, nonatomic) BOOL supportsBackgroundContentFetching; // ivar: _supportsBackgroundContentFetching
@property (readonly, nonatomic) BOOL supportsBackgroundNetworkAuthentication; // ivar: _supportsBackgroundNetworkAuthentication
@property (readonly, nonatomic) BOOL supportsUnboundedTaskCompletion; // ivar: _supportsUnboundedTaskCompletion
@property (readonly, nonatomic) BOOL usesSocketMonitoring; // ivar: _usesSocketMonitoring


-(id)bundleInfoValuesForKeys:(id)arg0 ;


@end


#endif