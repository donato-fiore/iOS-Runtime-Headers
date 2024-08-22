// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATDEVICEDISKUSAGEPROVIDER_H
#define ATDEVICEDISKUSAGEPROVIDER_H

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATUserDefaults.h"
#import "ATClientController.h"

@interface ATDeviceDiskUsageProvider : NSObject {
    NSMutableDictionary *_diskUsageInfo;
    ATUserDefaults *_defaults;
    NSObject<OS_dispatch_queue> *_queue;
    os_unfair_lock_s _lock;
    ATClientController *_clientController;
    NSMutableSet *_usageUpdateCompletionHandlers;
}




+(id)sharedInstance;
-(id)_cacheDeletePurgeableStorageData;
-(id)_diskUsageForDataClass:(id)arg0 ;
-(id)getCurrentUsage;
-(id)init;
-(void)getCurrentUsageWithUpdatedDataClasses:(id)arg0 withCompletion:(id)arg1 ;
-(void)getUpdatedUsageWithCompletion:(id)arg0 ;


@end


#endif