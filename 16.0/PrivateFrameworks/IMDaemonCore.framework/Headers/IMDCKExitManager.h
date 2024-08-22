// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDCKEXITMANAGER_H
#define IMDCKEXITMANAGER_H

@class NSError, NSDate, CKRecordID, NSNumber;
@protocol OS_dispatch_queue;


#import "IMDCKAbstractSyncController.h"
#import "IMDCKDatabaseManager.h"
#import "IMDRecordZoneManager.h"

@interface IMDCKExitManager : IMDCKAbstractSyncController

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // ivar: _ckQueue
@property (retain, nonatomic) IMDCKDatabaseManager *databaseManager; // ivar: _databaseManager
@property (retain, nonatomic) NSError *errorFetchingExitDate; // ivar: _errorFetchingExitDate
@property (retain, nonatomic) NSDate *exitRecordDate; // ivar: _exitRecordDate
@property (retain, nonatomic) CKRecordID *exitRecordID; // ivar: _exitRecordID
@property (nonatomic) BOOL fetchedExitDateOnLaunch; // ivar: _fetchedExitDateOnLaunch
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager; // ivar: _recordZoneManager
@property (retain, nonatomic) NSNumber *saltZoneCreatedOverride; // ivar: _saltZoneCreatedOverride
@property (retain, nonatomic) NSNumber *subscriptionCreatedOverride; // ivar: _subscriptionCreatedOverride


+(id)sharedInstance;
-(BOOL)_analyticZoneCreated;
-(BOOL)_canSubmitCloudKitAnalytic;
-(BOOL)_canSubmitCloudKitMetric;
-(BOOL)_saltZoneCreated;
-(BOOL)_subscriptionCreated;
-(NSInteger)derivedQualityOfService;
-(id)_modifiedOpGroupName:(id)arg0 ;
-(id)_sharedCKUtilities;
-(id)analyticZoneRecordID;
-(id)exitConfiguration;
-(id)init;
-(id)initRecordZoneManager:(id)arg0 databaseManager:(id)arg1 ;
-(id)syncCompleteRecordID;
-(void)_evalToggleiCloudSettingsSwitch;
-(void)_fetchExitRecordDateWithCompletion:(id)arg0 ;
-(void)_scheduleMetricOperation:(id)arg0 ;
-(void)_scheduleOperation:(id)arg0 ;
-(void)_setUpSubscription;
-(void)_submitCloudKitMetricWithOperationGroupName:(id)arg0 record:(id)arg1 ignoreZoneNotFoundError:(BOOL)arg2 completion:(id)arg3 ;
-(void)deleteExitRecordWithCompletion:(id)arg0 ;
-(void)exitRecordDateWithCompletion:(id)arg0 ;
-(void)handleNotificationForSubscriptionID:(id)arg0 ;
-(void)sendCloudKitZoneFetchRequestToNoteFeatureIsOn;
-(void)submitCloudKitAnalyticWithDictionary:(id)arg0 operationGroupName:(id)arg1 completion:(id)arg2 ;
-(void)submitCloudKitAnalyticWithOperationGroupName:(id)arg0 analyticDictionary:(id)arg1 ;
-(void)submitCloudKitMetricWithData:(id)arg0 operationGroupName:(id)arg1 completion:(id)arg2 ;
-(void)submitCloudKitMetricWithOperationGroupName:(id)arg0 ;
-(void)writeExitRecordWithDate:(id)arg0 completion:(id)arg1 ;
-(void)writeInitialSyncCompletedRecordIfNeeded;
-(void)writeSyncCompletedRecordWithDate:(id)arg0 completion:(id)arg1 ;


@end


#endif