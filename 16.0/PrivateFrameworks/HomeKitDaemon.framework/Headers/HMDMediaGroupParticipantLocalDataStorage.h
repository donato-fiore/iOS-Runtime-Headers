// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIAGROUPPARTICIPANTLOCALDATASTORAGE_H
#define HMDMEDIAGROUPPARTICIPANTLOCALDATASTORAGE_H

@class HMFObject, NSString, HMMediaDestination, HMMediaDestinationControllerData, NSUUID, NSUserDefaults;
@protocol HMFLogging, HMDMediaDestinationControllerLocalDataStorageHandler, HMDMediaDestinationLocalDataStorageHandler, HMDMediaGroupsAggregatorBackupReceiverDelegate, HMDMediaGroupsBackupLocalDataStorageHandler, HMDMediaGroupParticipantLocalDataStorageDataSource, HMEEventForwarder, HMELastEventStoreReadHandle, HMDFeaturesDataSource;


#import "HMDMediaGroupsAggregatorBackupReceiver.h"

@interface HMDMediaGroupParticipantLocalDataStorage : HMFObject <HMFLogging, HMDMediaDestinationControllerLocalDataStorageHandler, HMDMediaDestinationLocalDataStorageHandler, HMDMediaGroupsAggregatorBackupReceiverDelegate, HMDMediaGroupsBackupLocalDataStorageHandler>



@property (weak) NSObject<HMDMediaGroupParticipantLocalDataStorageDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMMediaDestination *destination;
@property (readonly, copy) HMMediaDestinationControllerData *destinationController;
@property (readonly) NSObject<HMEEventForwarder> *eventForwarder; // ivar: _eventForwarder
@property (readonly) NSObject<HMELastEventStoreReadHandle> *eventStoreReadHandle; // ivar: _eventStoreReadHandle
@property (readonly) NSObject<HMDFeaturesDataSource> *featuresDataSource; // ivar: _featuresDataSource
@property (readonly) HMDMediaGroupsAggregatorBackupReceiver *groupsBackupReceiver; // ivar: _groupsBackupReceiver
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly) NSUserDefaults *userDefaults; // ivar: _userDefaults


+(id)logCategory;
-(BOOL)hasDataToPublishInParticipantData:(id)arg0 ;
-(id)_migratedDestinationForRoomGroupsFromDestination:(id)arg0 ;
-(id)_migratedDestinationFromDestination:(id)arg0 withSupportOptions:(NSUInteger)arg1 ;
-(id)createDefaultParticipantData;
-(id)eventSource;
-(id)initWithIdentifier:(id)arg0 backUpReciever:(id)arg1 userDefaults:(id)arg2 eventForwarder:(id)arg3 eventStoreReadHandle:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 backUpReciever:(id)arg1 userDefaults:(id)arg2 eventForwarder:(id)arg3 eventStoreReadHandle:(id)arg4 featuresDataSource:(id)arg5 ;
-(id)lastCachedEventParticipantData;
-(id)logIdentifier;
-(id)participantData;
-(id)protoParticipantData;
-(id)topicName;
-(void)configureWithHome:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)didReceiveBackupData:(id)arg0 forBackupReceiver:(id)arg1 ;
-(void)migrateWithExpectedSupportOptions:(NSUInteger)arg0 ;
-(void)publishCachedObject;
-(void)publishCachedObjectIfNeeded;
-(void)updateAudioGroupIdentifier:(id)arg0 ;
-(void)updateBackupGroupData:(id)arg0 ;
-(void)updateDestinationController:(id)arg0 ;
-(void)updateDestinationControllerAvailableDestinationIdentifiers:(id)arg0 ;
-(void)updateDestinationControllerDestinationIdentifier:(id)arg0 ;
-(void)updateDestinationSupportOptions:(NSUInteger)arg0 ;
-(void)updateMediaDestination:(id)arg0 ;


@end


#endif