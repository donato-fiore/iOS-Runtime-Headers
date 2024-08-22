// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMLOGDUMP_H
#define IMLOGDUMP_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMLogDump : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *logDumpQueue; // ivar: _logDumpQueue
@property (readonly, nonatomic) BOOL shouldCollectPowerWifiStats; // ivar: _shouldCollectPowerWifiStats


+(id)sharedInstance;
-(BOOL)_checkArgumentValidity:(id)arg0 withFileName:(id)arg1 withPredicate:(id)arg2 withError:(*id)arg3 ;
-(BOOL)_isOnPower;
-(BOOL)_isWifiUsable;
-(CGFloat)_calculateMinutesSyncingWithDurationKey:(id)arg0 attemptDateKey:(id)arg1 ;
-(id)_calculatePowerAndWifiConnectedTimeInMinutesForDictionary:(id)arg0 ;
-(id)_dictionaryForDayKey:(id)arg0 ;
-(id)_lastHoursToAppend:(int)arg0 ;
-(id)_predicateToAppend:(id)arg0 ;
-(id)createTodaysStatisticDictionaryIfNeeded;
-(id)init;
-(id)logShowCommandToFilePath:(id)arg0 lastHours:(int)arg1 predicate:(id)arg2 ;
-(void)_calculateConnectedMinutesForDateKey:(id)arg0 durationKey:(id)arg1 daysDictionary:(id)arg2 totalDurationDictionary:(id)arg3 totalDurationKey:(id)arg4 ;
-(void)_compressAndDeleteFilesAtPath:(id)arg0 destinationFilePath:(id)arg1 withCompletion:(id)arg2 ;
-(void)_includeCloudKitDebugFilesAtPath:(id)arg0 ;
-(void)_incrementSyncAttemptsWithKey:(id)arg0 syncDateKey:(id)arg1 ;
-(void)_noteSyncEndedForDurationKey:(id)arg0 dateKey:(id)arg1 ;
-(void)clearSyncStats;
-(void)dumpLogsToFolderAtPath:(id)arg0 withFileName:(id)arg1 lastHours:(int)arg2 predicate:(id)arg3 includeCKDebug:(BOOL)arg4 withCompletion:(id)arg5 ;
-(void)dumpMOCLoggingMetaData;
-(void)incrementAHDASyncAttempts;
-(void)incrementCoreDuetSyncAttempts;
-(void)noteAHDASyncEnded;
-(void)noteCoreDuetSyncEnded;
-(void)printIfWeAreInTheMiddleOfASync;
-(void)printPowerAndWifiStats;
-(void)printSyncDurationStats;


@end


#endif