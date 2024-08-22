// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDFETCHRECORDZONESOPERATION_H
#define CKDFETCHRECORDZONESOPERATION_H

@class NSMutableDictionary, NSArray, NSMutableSet, NSMutableArray;
@protocol CKFetchRecordZonesOperationCallbacks;


#import "CKDDatabaseOperation.h"

@interface CKDFetchRecordZonesOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSObject<CKFetchRecordZonesOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic) BOOL ignorePCSFailures; // ivar: _ignorePCSFailures
@property (nonatomic) BOOL isFetchAllRecordZonesOperation; // ivar: _isFetchAllRecordZonesOperation
@property (nonatomic) NSInteger numZoneSaveAttempts; // ivar: _numZoneSaveAttempts
@property (nonatomic) BOOL onlyFetchPCSInfo; // ivar: _onlyFetchPCSInfo
@property (retain, nonatomic) NSMutableDictionary *pcsUpdateErrorsByZoneID; // ivar: _pcsUpdateErrorsByZoneID
@property (copy, nonatomic) id *recordZoneFetchedProgressBlock; // ivar: _recordZoneFetchedProgressBlock
@property (retain, nonatomic) NSArray *recordZoneIDs; // ivar: _recordZoneIDs
@property (nonatomic) BOOL shouldRetry; // ivar: _shouldRetry
@property (nonatomic) NSUInteger state;
@property (retain, nonatomic) NSMutableSet *zoneIDsNeedingDugongKeyRoll; // ivar: _zoneIDsNeedingDugongKeyRoll
@property (retain, nonatomic) NSMutableArray *zoneIDsNeedingPCSUpdateRetry; // ivar: _zoneIDsNeedingPCSUpdateRetry
@property (retain, nonatomic) NSMutableDictionary *zonesToSaveForPCSUpdateByZoneID; // ivar: _zonesToSaveForPCSUpdateByZoneID


-(BOOL)_locked_checkAndUpdateZonePCSIfNeededForZone:(id)arg0 error:(*id)arg1 ;
-(BOOL)makeStateTransition;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(id)relevantZoneIDs;
-(int)operationType;
-(void)_cachePCSOnRecordZone:(id)arg0 ;
-(void)_continueHandlingFetchedRecordZone:(id)arg0 zoneID:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleAnonymousZoneDataObjects:(id)arg0 responsecode:(id)arg1 ;
-(void)_handleRecordZoneFetch:(id)arg0 zoneID:(id)arg1 responseCode:(id)arg2 ;
-(void)_handleRecordZoneSaved:(id)arg0 error:(id)arg1 ;
-(void)_locked_callbackForRecordZone:(id)arg0 zoneID:(id)arg1 error:(id)arg2 ;
-(void)_sendErrorForFailedZones;
-(void)checkPCSIdentity;
-(void)fetchZonesFromServer;
-(void)fetchZonesFromServer:(id)arg0 ;
-(void)main;
-(void)saveZonesWithUpdatedZonePCS;


@end


#endif