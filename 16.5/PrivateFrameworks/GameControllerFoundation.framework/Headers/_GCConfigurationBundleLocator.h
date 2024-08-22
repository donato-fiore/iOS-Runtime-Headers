// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCCONFIGURATIONBUNDLELOCATOR_H
#define _GCCONFIGURATIONBUNDLELOCATOR_H

@class NSArray, NSString;
@protocol OS_os_log, OS_dispatch_workloop, OS_dispatch_queue, OS_dispatch_source, GCConfigurationBundleSource;

#import <Foundation/Foundation.h>


@interface _GCConfigurationBundleLocator : NSObject {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_workloop> *_workloop;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_mergedBundles;
    NSObject<OS_dispatch_source> *_filesystemChangedEventSource;
    id<GCConfigurationBundleSource> *_filesystemSource;
    NSArray *_filesystemBundles;
    NSObject<OS_dispatch_source> *_assetsChangedEventSource;
    id<GCConfigurationBundleSource> *_assetSource;
    NSArray *_assetBundles;
}


@property (readonly) NSString *configurationType; // ivar: _configurationType


-(id)fetchBundles;
-(id)init;
-(id)initWithConfigurationType:(id)arg0 provider:(id)arg1 ;
-(void)_assetDidChange:(id)arg0 ;
-(void)_filesystemDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif