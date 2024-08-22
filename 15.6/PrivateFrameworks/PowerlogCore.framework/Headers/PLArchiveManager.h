// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLARCHIVEMANAGER_H
#define PLARCHIVEMANAGER_H

@class NSMutableArray, NSString, NSDate;
@protocol PLArchiveJobManager;

#import <Foundation/Foundation.h>


@interface PLArchiveManager : NSObject <PLArchiveJobManager>



@property CGFloat EPSQLDBDuration; // ivar: _EPSQLDBDuration
@property CGFloat EPSQLVacuumInterval; // ivar: _EPSQLVacuumInterval
@property CGFloat PLSQLDBDuration; // ivar: _PLSQLDBDuration
@property (retain) NSMutableArray *archiveJobs; // ivar: _archiveJobs
@property CGFloat archiveRetention; // ivar: _archiveRetention
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interrupted; // ivar: _interrupted
@property CGFloat interval; // ivar: _interval
@property (retain) NSDate *lastEPSQLVacuumDate;
@property BOOL monotonicResetOccurred; // ivar: _monotonicResetOccurred
@property CGFloat mustRunInterval; // ivar: _mustRunInterval
@property (retain) NSMutableArray *notificationBlocks; // ivar: _notificationBlocks
@property (readonly) Class superclass;


+(id)allArchivePaths;
+(id)archiveEntriesFinished;
+(id)archiveEntriesUnfinished;
+(id)archiveEntriesWithComparisons:(id)arg0 ;
+(id)lastArchivePath;
+(id)sharedInstance;
+(id)storageQueue;
+(id)workQueue;
+(void)systemTimeChangedByOffset:(CGFloat)arg0 ;
-(BOOL)eliglibleToVacuumEPSQLForDate:(id)arg0 ;
-(BOOL)isInterrupted;
-(id)getArchivingCriteria;
-(id)init;
-(void)cleanup;
-(void)dealloc;
-(void)deprecateTables;
-(void)disable;
-(void)enable;
-(void)handleFailure:(NSInteger)arg0 forArchiveEntry:(id)arg1 ;
-(void)migrate;
-(void)migrateArchive:(id)arg0 ;
-(void)recover;
-(void)registerForArchivingNotificationUsingBlock:(id)arg0 ;
-(void)runActivityWithLastCompletedDate:(id)arg0 ;
-(void)runArchiveJobs;
-(void)runInitialActivity;
-(void)scheduleArchiveJobs;
-(void)trimExtendedPersistenceLog;


@end


#endif