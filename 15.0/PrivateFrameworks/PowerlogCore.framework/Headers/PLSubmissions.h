// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSUBMISSIONS_H
#define PLSUBMISSIONS_H

@class NSNumber, NSString, NSMutableArray, DRConfigMonitor;

#import <Foundation/Foundation.h>

#import "PLSQLiteConnection.h"
#import "PLStorageOperator.h"

@interface PLSubmissions : NSObject

@property (retain) NSNumber *capValue; // ivar: _capValue
@property (retain) PLSQLiteConnection *connection; // ivar: _connection
@property (retain) NSString *filterQuery; // ivar: _filterQuery
@property CGFloat lastXPCActivityTimestamp; // ivar: _lastXPCActivityTimestamp
@property (retain) NSString *onDemandTasking; // ivar: _onDemandTasking
@property (retain) NSString *request; // ivar: _request
@property (weak) PLStorageOperator *storageOperator; // ivar: _storageOperator
@property (retain) NSMutableArray *submissionQueue; // ivar: _submissionQueue
@property (retain) DRConfigMonitor *taskingMonitor; // ivar: _taskingMonitor
@property (readonly) BOOL taskingStarted; // ivar: _taskingStarted
@property CGFloat xpcActivityDelay; // ivar: _xpcActivityDelay
@property BOOL xpcActivityStarted; // ivar: _xpcActivityStarted


+(id)sharedInstance;
-(BOOL)internalSubmissionBehavior;
-(BOOL)taskingBlobDRExists;
-(BOOL)taskingBlobLegacyExists;
-(id)configFromMonitor:(id)arg0 ;
-(id)createWatchdogForSubmissionActivity:(id)arg0 ;
-(id)enqueueFileForUpload:(id)arg0 ;
-(id)generateMSSSubmissionWithPayload:(id)arg0 ;
-(id)getCurrentDRConfig;
-(id)getLastBatteryTimestampSystem;
-(id)init;
-(id)workQueue;
-(int)checkTaskingCompletionStatus;
-(short)submitReasonForToday;
-(void)attemptToUnregisterUploadSchedulingActivity;
-(void)cleanupTemporarySubmissionFilesForTag:(id)arg0 ;
-(void)clearTaskingDRConfig;
-(void)deferXPCActivity:(id)arg0 ;
-(void)disableHangtracer;
-(void)emitBlobDetectedEvent:(id)arg0 ;
-(void)emitBlobVerifiedEvent:(id)arg0 ;
-(void)emitCollisionEvent:(id)arg0 ;
-(void)enableHangtracer;
-(void)enqueueSubmissionRecord:(id)arg0 ;
-(void)fileCleanupWithRecord:(id)arg0 ;
-(void)finishXPCActivity:(id)arg0 ;
-(void)generateOTASubmissionAndSendTaskingEndSubmission:(BOOL)arg0 ;
-(void)generatePLLSubmissionWithPayload:(id)arg0 ;
-(void)handleDRConfigUpdate:(id)arg0 error:(id)arg1 ;
-(void)handleXPCActivityCallback:(id)arg0 ;
-(void)initSubmissionQueue;
-(void)logOTAStatus:(id)arg0 ;
-(void)logSubmissionStateToAnalytics:(id)arg0 ;
-(void)logTaskingStatus:(int)arg0 withAction:(int)arg1 ;
-(void)logTaskingStatus:(int)arg0 withAction:(int)arg1 withTables:(id)arg2 ;
-(void)logTaskingTablesTurnedOn:(id)arg0 ;
-(void)persistSubmissionInfo:(id)arg0 ;
-(void)prepareAndEnqueueSubmissionFilesWithConfig:(id)arg0 ;
-(void)registerUploadSchedulingActivity;
-(void)rejectTaskingDRConfig;
-(void)removeFileAtPath:(id)arg0 ;
-(void)removeFileAtURL:(id)arg0 ;
-(void)sendSubmissionIssueSignature:(id)arg0 ;
-(void)setupDRTasking;
-(void)stopDRTasking;
-(void)stopWatchdogForSubmissionActivity:(id)arg0 ;
-(void)submitRecord:(id)arg0 withActivity:(id)arg1 ;
-(void)taskingCleanup;
-(void)taskingModeSafeguard;
-(void)taskingModeSetup;


@end


#endif