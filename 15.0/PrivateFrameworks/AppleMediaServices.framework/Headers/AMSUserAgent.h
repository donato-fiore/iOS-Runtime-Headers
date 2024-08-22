// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUSERAGENT_H
#define AMSUSERAGENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AMSMappedBundleInfo.h"
#import "AMSCoreOptionsBox.h"
#import "AMSProcessInfo.h"

@interface AMSUserAgent : NSObject

@property (readonly, nonatomic) AMSMappedBundleInfo *bundleInfo; // ivar: _bundleInfo
@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSString *clientVersion;
@property (readonly, nonatomic) AMSCoreOptionsBox *optionsBox; // ivar: _optionsBox
@property (readonly, nonatomic) AMSProcessInfo *processInfo; // ivar: _processInfo


+(id)_sharedCache;
+(id)cachedUserAgentForBundleIdentifier:(id)arg0 ;
+(id)userAgentForProcessInfo:(id)arg0 ;
+(void)cacheUserAgent:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(id)_compileAndShouldCache:(*BOOL)arg0 ;
-(id)_iOSComponentBuildVersion;
-(id)_iOSComponentClientInfo;
-(id)_iOSComponentDeviceModel;
-(id)_iOSComponentHardwarePlatform;
-(id)_iOSComponentProductVersion;
-(id)_sharedComponentFairPlayDeviceType;
-(id)_sharedComponentFrameworkVersion;
-(id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)arg0 ;
-(id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)arg0 productType:(id)arg1 ;
-(id)_userAgentSuffix;
-(id)compile;
-(id)initWithProcessInfo:(id)arg0 ;


@end


#endif