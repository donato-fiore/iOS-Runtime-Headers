// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCSYNCUPSCHEDULER_H
#define BRCSYNCUPSCHEDULER_H



#import "BRCFSSchedulerBase.h"

@interface BRCSyncUpScheduler : BRCFSSchedulerBase



-(BOOL)isItemInSyncUpAndInFlight:(id)arg0 ;
-(BOOL)isItemInSyncUpAndInFlight:(id)arg0 inZone:(id)arg1 ;
-(BOOL)isItemPendingSyncUp:(id)arg0 ;
-(NSUInteger)finishSyncUpForItem:(id)arg0 inZone:(id)arg1 success:(BOOL)arg2 ;
-(NSUInteger)inFlightDiffsForItem:(id)arg0 ;
-(NSUInteger)inFlightDiffsForItem:(id)arg0 zoneRowID:(id)arg1 ;
-(NSUInteger)postponeSyncUpForItem:(id)arg0 inZone:(id)arg1 ;
-(id)descriptionForItem:(id)arg0 context:(id)arg1 ;
-(id)initWithAccountSession:(id)arg0 ;
-(unsigned int)recoverAndReportMissingJobs;
-(void)_clearSyncUpErrorForItem:(id)arg0 ;
-(void)_scheduleSyncUpJob:(id)arg0 ;
-(void)createSyncUpJobForItem:(id)arg0 inZone:(id)arg1 ;
-(void)createSyncUpJobForRowID:(NSUInteger)arg0 inZone:(id)arg1 ;
-(void)deleteSyncUpJobsForItem:(id)arg0 ;
-(void)performFirstSchedulingAfterStartupInDB:(id)arg0 ;
-(void)prepareItemForSyncUp:(id)arg0 inFlightDiffs:(NSUInteger)arg1 inZone:(id)arg2 ;
-(void)schedule;
-(void)setState:(int)arg0 forItem:(id)arg1 zone:(id)arg2 ;


@end


#endif