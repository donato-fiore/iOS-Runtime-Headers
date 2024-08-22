// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRGRESOURCECACHE_H
#define NRGRESOURCECACHE_H


#import <Foundation/Foundation.h>


@interface NRGResourceCache : NSObject



+(id)cacheDirPathForAppBundleID:(id)arg0 withPairedDeviceStorePath:(id)arg1 ;
+(id)cacheDirPathForPairedDevice;
+(id)cacheDirPathForPairedDeviceStorePath:(id)arg0 ;
+(id)cachePathForIconVariant:(int)arg0 inBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2 ;
+(id)iconCacheDirPathForAppBundleID:(id)arg0 withPairedDeviceStorePath:(id)arg1 ;
+(id)iconForIconVariant:(int)arg0 inBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2 ;
+(void)createCachePathIfNecessaryWithPairedDeviceStorePath:(id)arg0 ;
+(void)invalidateBundleID:(id)arg0 withPairedDeviceStorePath:(id)arg1 ;
+(void)invalidatePairedDevice:(id)arg0 ;
+(void)setIcon:(id)arg0 forIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3 ;


@end


#endif