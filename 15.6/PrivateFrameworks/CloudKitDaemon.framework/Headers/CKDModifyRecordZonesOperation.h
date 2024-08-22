// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDMODIFYRECORDZONESOPERATION_H
#define CKDMODIFYRECORDZONESOPERATION_H

@class NSArray, NSMutableDictionary, NSMutableArray;
@protocol CKModifyRecordZonesOperationCallbacks;


#import "CKDDatabaseOperation.h"
#import "CKDPCSKeySyncCoreAnalytics.h"

@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation

@property (nonatomic) BOOL allowDefaultZoneSave; // ivar: _allowDefaultZoneSave
@property (retain, nonatomic) NSObject<CKModifyRecordZonesOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *deleteCompletionBlock; // ivar: _deleteCompletionBlock
@property (nonatomic) BOOL didSynchronizeUserKeyRegistry; // ivar: _didSynchronizeUserKeyRegistry
@property (nonatomic) BOOL dontFetchFromServer; // ivar: _dontFetchFromServer
@property (retain, nonatomic) CKDPCSKeySyncCoreAnalytics *keySyncAnalytics; // ivar: _keySyncAnalytics
@property (nonatomic) BOOL markZonesAsUserPurged; // ivar: _markZonesAsUserPurged
@property (nonatomic) NSInteger maxZoneSaveAttempts; // ivar: _maxZoneSaveAttempts
@property (nonatomic) int numZoneSaveAttempts; // ivar: _numZoneSaveAttempts
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete; // ivar: _recordZoneIDsToDelete
@property (retain, nonatomic) NSMutableDictionary *recordZonesByZoneID; // ivar: _recordZonesByZoneID
@property (retain, nonatomic) NSMutableArray *recordZonesToSave; // ivar: _recordZonesToSave
@property (retain, nonatomic) NSMutableDictionary *retryableErrorsByZoneID; // ivar: _retryableErrorsByZoneID
@property (copy, nonatomic) id *saveCompletionBlock; // ivar: _saveCompletionBlock
@property (nonatomic) NSUInteger state;
@property (retain, nonatomic) NSMutableArray *zonesWaitingOnKeyRegistrySync; // ivar: _zonesWaitingOnKeyRegistrySync


+(NSInteger)isPredominatelyDownload;
-(BOOL)_saveZonesToServer;
-(BOOL)isOperationType:(int)arg0 ;
-(BOOL)makeStateTransition;
-(BOOL)supportsClearAssetEncryption;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(id)relevantZoneIDs;
-(int)operationType;
-(void)_checkAndPrepareZones;
-(void)_createNewPCSForZone:(id)arg0 completionHandler:(id)arg1 ;
-(void)_fetchPCSDataForZone:(id)arg0 fromServer:(BOOL)arg1 ;
-(void)_fetchPCSDataForZonesFromServer:(BOOL)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleRecordZoneDeleted:(id)arg0 responseCode:(id)arg1 ;
-(void)_handleRecordZoneSaved:(id)arg0 responseCode:(id)arg1 serverCapabilities:(NSUInteger)arg2 expirationDate:(id)arg3 expired:(BOOL)arg4 ;
-(void)_sendCoreAnalyticsEventForKeySync;
-(void)_sendErrorForFailedZones;
-(void)_synchronizeUserKeyRegistryIfNeeded;
-(void)main;


@end


#endif