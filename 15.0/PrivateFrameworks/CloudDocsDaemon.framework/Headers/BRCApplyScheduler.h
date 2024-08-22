// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCAPPLYSCHEDULER_H
#define BRCAPPLYSCHEDULER_H

@class NSMutableSet, NSString;
@protocol BRCModule, BRCSuspendable;


#import "BRCFSSchedulerBase.h"
#import "BRCCountedSet.h"

@interface BRCApplyScheduler : BRCFSSchedulerBase <BRCModule, BRCSuspendable>

 {
    BRCCountedSet *_coordinatedWriters;
    NSMutableSet *_clientZonesWatchingFaults;
    BOOL _applyCountReachedMax;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly) Class superclass;


-(BOOL)canScheduleMoreJobs;
-(BOOL)startWriteCoordinationInAppLibrary:(id)arg0 ;
-(NSUInteger)_writeCoordinationCount;
-(id)descriptionForRejectedItem:(id)arg0 context:(id)arg1 ;
-(id)descriptionForServerItem:(id)arg0 context:(id)arg1 ;
-(id)initWithAccountSession:(id)arg0 ;
-(unsigned int)recoverAndReportMissingJobs;
-(void)_close;
-(void)_fixupCZMAliasTargetWithAlias:(id)arg0 target:(id)arg1 ;
-(void)_handleWatchingFaults;
-(void)_rescheduleRank:(NSInteger)arg0 inState:(int)arg1 forZone:(id)arg2 ;
-(void)_scheduleApplyJobWithID:(id)arg0 zone:(id)arg1 applyKind:(unsigned int)arg2 ;
-(void)_setState:(int)arg0 andApplyKind:(unsigned int)arg1 forJobID:(id)arg2 ;
-(void)createApplyJobFromServerItem:(id)arg0 localItem:(id)arg1 state:(int)arg2 kind:(unsigned int)arg3 ;
-(void)deleteExpiredJobs;
-(void)describeInBuffer:(id)arg0 aggregateOfJobsMatching:(id)arg1 context:(id)arg2 ;
-(void)didCompleteCrossZoneMigrationForAppLibrary:(id)arg0 ;
-(void)didCreateMissingParentID:(id)arg0 zone:(id)arg1 ;
-(void)didMarkSyncIdleForServerRank:(NSInteger)arg0 zone:(id)arg1 ;
-(void)didReparentOrKillItemID:(id)arg0 parentItemID:(id)arg1 zone:(id)arg2 ;
-(void)didSyncDownZone:(id)arg0 requestID:(NSUInteger)arg1 upToRank:(NSInteger)arg2 caughtUpWithServer:(BOOL)arg3 ;
-(void)endWriteCoordinationInAppLibrary:(id)arg0 rowID:(NSInteger)arg1 ;
-(void)monitorFaultingForZone:(id)arg0 ;
-(void)repopulateJobsForZone:(id)arg0 ;
-(void)rescheduleMissingTargetAliasesWithTarget:(id)arg0 ;
-(void)resetBackoffForServerItem:(id)arg0 ;
-(void)schedule;
-(void)setState:(int)arg0 andApplyKind:(unsigned int)arg1 forRank:(NSInteger)arg2 zoneRowID:(id)arg3 ;
-(void)setState:(int)arg0 andApplyKind:(unsigned int)arg1 forServerItem:(id)arg2 localItem:(id)arg3 ;
-(void)setState:(int)arg0 forRank:(NSInteger)arg1 zoneRowID:(id)arg2 ;
-(void)setState:(int)arg0 forServerItem:(id)arg1 localItem:(id)arg2 ;
-(void)stopMonitoringFaultingForZone:(id)arg0 ;


@end


#endif