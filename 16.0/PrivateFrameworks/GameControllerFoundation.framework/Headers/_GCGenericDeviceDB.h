// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCGENERICDEVICEDB_H
#define _GCGENERICDEVICEDB_H

@class NSString;
@protocol _GCGenericDeviceDBServiceXPCInterface, _GCGenericDeviceDBService, OS_dispatch_workloop, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "_GCConfigurationBundleLocator.h"
#import "_GCDeviceOnDiskDB.h"

@interface _GCGenericDeviceDB : NSObject <_GCGenericDeviceDBServiceXPCInterface, _GCGenericDeviceDBService>

 {
    NSObject<OS_dispatch_workloop> *_workloop;
    NSObject<OS_dispatch_queue> *_queue;
    _GCConfigurationBundleLocator *_configurationBundleLocator;
    NSObject<OS_dispatch_source> *_configurationBundleLocatorUpdatedSource;
    _GCDeviceOnDiskDB *_onDiskDB;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_onqueue_updateConfigurationBundles;
-(id)configurationBundles;
-(id)hasModelForDevice:(id)arg0 ;
-(id)init;
-(id)initWithProvider:(id)arg0 ;
-(id)modelForDevice:(id)arg0 ;
-(id)preparedModelForDevice:(id)arg0 ;
-(id)preparedModelForDevice:(id)arg0 error:(*id)arg1 ;
-(void)_configurationBundlesDidChange:(id)arg0 ;
-(void)dealloc;
-(void)hasModelForDevice:(id)arg0 reply:(id)arg1 ;
-(void)preparedModelForDevice:(id)arg0 reply:(id)arg1 ;


@end


#endif