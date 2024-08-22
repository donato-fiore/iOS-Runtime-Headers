// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMDDATASYNC_H
#define AMDDATASYNC_H

@class NSNumber, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface AMDDataSync : NSObject

@property (retain, nonatomic) NSNumber *deviceForgetThresholdDays; // ivar: _deviceForgetThresholdDays
@property (retain, nonatomic) NSNumber *eventLifetimeDays; // ivar: _eventLifetimeDays
@property (retain, nonatomic) NSNumber *eventsDeltaSize; // ivar: _eventsDeltaSize
@property (retain, nonatomic) NSNumber *fullSyncDeviceResetThresholdDays; // ivar: _fullSyncDeviceResetThresholdDays
@property (retain, nonatomic) NSNumber *fullSyncEventsDeltaSize; // ivar: _fullSyncEventsDeltaSize
@property (retain, nonatomic) NSString *localDeviceId; // ivar: _localDeviceId
@property (retain, nonatomic) NSArray *streamsToSync; // ivar: _streamsToSync


+(id)fetchDeviceID:(*id)arg0 ;
+(id)generateDeviceIDFileAtLocation:(id)arg0 error:(*id)arg1 ;
+(id)processDataReplicationPayload:(id)arg0 error:(*id)arg1 ;
-(id)clearUserDataForDevice:(id)arg0 fromTimestamp:(id)arg1 ;
-(id)createDeviceEntryWithDevicesData:(id)arg0 error:(*id)arg1 ;
-(id)fetch:(id)arg0 SortedEventListFromTimestamp:(id)arg1 forCurrentDevice:(BOOL)arg2 error:(*id)arg3 ;
-(id)fetch:(id)arg0 SortedEventListFromTimestamp:(id)arg1 onlyForCurrentDevice:(BOOL)arg2 forStream:(id)arg3 error:(*id)arg4 ;
-(id)fetchEventsForStream:(id)arg0 withPredicates:(id)arg1 error:(*id)arg2 ;
-(id)fetchLastReadTimestampFromPayload:(id)arg0 ;
-(id)fetchLastReadTimestampFromPayload:(id)arg0 forStream:(id)arg1 ;
-(id)filterEventsList:(id)arg0 withLastReadTimestamp:(id)arg1 ;
-(id)findAvailableDeviceForFullSyncIn:(id)arg0 ;
-(id)generateFullSyncPayloadWithDevicesData:(id)arg0 error:(*id)arg1 ;
-(id)ingestDataFromDevice:(id)arg0 withDevicePayload:(id)arg1 forStream:(id)arg2 fromTimestamp:(id)arg3 error:(*id)arg4 ;
-(id)ingestEventsIntoCoreData:(id)arg0 withPreviousCheckpoint:(*id)arg1 andStreamCheckpointDict:(id)arg2 error:(*id)arg3 ;
-(id)ingestEventsIntoSQLite:(id)arg0 forStream:(id)arg1 withPreviousCheckpoint:(*id)arg2 andStreamCheckpointDict:(id)arg3 error:(*id)arg4 ;
-(id)initWithDataReplicationConfig:(id)arg0 error:(*id)arg1 ;
-(id)performDataReplicationPayloadUpdates:(id)arg0 withDeviceRegistry:(id)arg1 error:(*id)arg2 ;
-(id)pruneInactiveDevicesFrom:(id)arg0 ;
-(id)updateDataDeletionDict:(id)arg0 withDevicesData:(id)arg1 error:(*id)arg2 ;
-(void)ingestFullSyncEventsFor:(id)arg0 withDeviceData:(id)arg1 error:(*id)arg2 ;
-(void)performEventDeltaUpdateFor:(id)arg0 withDeviceData:(id)arg1 error:(*id)arg2 ;
-(void)pushFullSyncDataFrom:(id)arg0 withDeviceData:(id)arg1 error:(*id)arg2 ;


@end


#endif