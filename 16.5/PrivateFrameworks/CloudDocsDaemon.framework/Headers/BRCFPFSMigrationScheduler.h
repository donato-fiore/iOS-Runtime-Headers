// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCFPFSMIGRATIONSCHEDULER_H
#define BRCFPFSMIGRATIONSCHEDULER_H

@class NSUserDefaults;
@protocol OS_dispatch_queue, OS_dispatch_source, BRCCiconiaStatusProvider;

#import <Foundation/Foundation.h>


@interface BRCFPFSMigrationScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_trialRefreshQueue;
    NSObject<OS_dispatch_source> *_trialRefreshSource;
    NSUserDefaults *_fpfsFeatureDefaults;
    id<BRCCiconiaStatusProvider> *_ciconiaStatusProvider;
}




-(BOOL)_enableFPFSFeature;
-(BOOL)_isMigrationToFPFSDisabled;
-(id)_getBootTime;
-(id)_getBootUUID;
-(id)initWithCiconiaStatusProvider:(id)arg0 ;
-(void)_scheduleRebootIfNeeded;
-(void)_scheduleXPCActivityForReboot;
-(void)_stopTrialRefresh;
-(void)_stopXPCActivityForReboot;
-(void)fixFPFSFeatureFlagUserDefaults;
-(void)removeSchedule;
-(void)scheduleMigrationIfNeeded;


@end


#endif