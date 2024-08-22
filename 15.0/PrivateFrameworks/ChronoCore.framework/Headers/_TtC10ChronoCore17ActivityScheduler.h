// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC10CHRONOCORE17ACTIVITYSCHEDULER_H
#define _TTC10CHRONOCORE17ACTIVITYSCHEDULER_H


#import <Foundation/Foundation.h>


@interface _TtC10ChronoCore17ActivityScheduler : NSObject {
    ? _schedulingProviderQueue;
    ? _schedulingProvider;
    ? _dataProtectionMonitor;
    ? _keybagProvider;
    ? _systemDataMigrator;
    ? _lock;
    ? _lock_activityStore;
    ? _lock_completedMigration;
    ? _lock_userManager;
    ? _lock_enqueueActivityBlocksWaitingForMigration;
}




-(id)init;
-(void)dealloc;


@end


#endif