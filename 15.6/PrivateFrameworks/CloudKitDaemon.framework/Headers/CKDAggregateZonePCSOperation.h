// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDAGGREGATEZONEPCSOPERATION_H
#define CKDAGGREGATEZONEPCSOPERATION_H

@class NSError, NSArray, CKRecordZone, NSMutableDictionary, CKRecordZoneID;


#import "CKDDatabaseOperation.h"
#import "CKDPCSKeySyncCoreAnalytics.h"

@interface CKDAggregateZonePCSOperation : CKDDatabaseOperation

@property (retain) NSError *currentError; // ivar: _currentError
@property BOOL isHandlingRetryableError; // ivar: _isHandlingRetryableError
@property (retain, nonatomic) CKDPCSKeySyncCoreAnalytics *keySyncAnalytics; // ivar: _keySyncAnalytics
@property (nonatomic) NSInteger maxZoneSaveAttempts; // ivar: _maxZoneSaveAttempts
@property (nonatomic) NSInteger numZoneSaveAttempts; // ivar: _numZoneSaveAttempts
@property (retain, nonatomic) NSArray *sourceZoneIDs; // ivar: _sourceZoneIDs
@property (nonatomic) NSUInteger state;
@property (retain, nonatomic) CKRecordZone *targetZone; // ivar: _targetZone
@property (retain, nonatomic) NSMutableDictionary *zonePCSDataByZoneID; // ivar: _zonePCSDataByZoneID
@property (retain, nonatomic) CKRecordZoneID *zoneWaitingOnKeyRegistrySync; // ivar: _zoneWaitingOnKeyRegistrySync


-(BOOL)_saveTargetZone;
-(BOOL)makeStateTransition;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(id)relevantZoneIDs;
-(int)operationType;
-(void)_fetchPCSDataForZoneID:(id)arg0 ;
-(void)_fetchZonePCS;
-(void)_handleZoneSavedWithID:(id)arg0 responseCode:(id)arg1 ;
-(void)_prepareTargetZonePCS;
-(void)_sendCoreAnalyticsEventForKeySync;
-(void)_setPermanentFailure;
-(void)_sychronizeUserKeyRegistryIfNeeded;
-(void)main;


@end


#endif