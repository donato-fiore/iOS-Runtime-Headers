// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIADESTINATIONMANAGER_H
#define HMDMEDIADESTINATIONMANAGER_H

@class HMFObject, HMMediaDestination, NSString, NSUUID, HMFStagedValue;
@protocol HMDMediaDestinationBackingStoreHandlerDelegate, HMFLogging, HMFStagedValueDelegate, HMDMediaDestinationManager, HMDMediaDestinationMessageHandlerDataSource, HMDMediaDestinationMessageHandlerDelegate, HMDMediaDestinationManagerDataSource, HMDMediaDestinationManagerDelegate;


#import "HMDMediaDestinationBackingStoreHandler.h"
#import "HMDMediaDestinationMessageHandler.h"
#import "HMDMediaDestinationManagerMetricsDispatcher.h"

@interface HMDMediaDestinationManager : HMFObject <HMDMediaDestinationBackingStoreHandlerDelegate, HMFLogging, HMFStagedValueDelegate, HMDMediaDestinationManager, HMDMediaDestinationMessageHandlerDataSource, HMDMediaDestinationMessageHandlerDelegate>



@property (readonly) HMDMediaDestinationBackingStoreHandler *backingStoreHandler; // ivar: _backingStoreHandler
@property (readonly) HMMediaDestination *committedDestination;
@property (weak) NSObject<HMDMediaDestinationManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDMediaDestinationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) HMMediaDestination *destination;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly) HMDMediaDestinationMessageHandler *messageHandler; // ivar: _messageHandler
@property (readonly) HMDMediaDestinationManagerMetricsDispatcher *metricsDispatcher; // ivar: _metricsDispatcher
@property (readonly) HMFStagedValue *stagedAudioGroupIdentifier; // ivar: _stagedAudioGroupIdentifier
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)messageHandler:(id)arg0 reachableForOutgoingMessage:(id)arg1 ;
-(id)attributeDescriptions;
-(id)dataSourceDestinationControllerWithIdentifier:(id)arg0 ;
-(id)initWithDestination:(id)arg0 messageDispatcher:(id)arg1 notificationCenter:(id)arg2 backingStore:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5 ;
-(id)initWithDestination:(id)arg0 messageHandler:(id)arg1 backingStoreHandler:(id)arg2 metricsDispatcher:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5 ;
-(id)logIdentifier;
-(id)messageHandler:(id)arg0 deviceForOutgoingMessage:(id)arg1 ;
-(id)messageHandler:(id)arg0 shouldRelayIncomingMessage:(id)arg1 ;
-(id)privateDescription;
-(id)updateAudioGroupIdentifier:(id)arg0 ;
-(id)updateSupportedOptions:(NSUInteger)arg0 ;
-(void)configureWithHome:(id)arg0 currentAccessory:(BOOL)arg1 ;
-(void)mediaDestinationBackingStoreHandler:(id)arg0 didUpdateDestination:(id)arg1 ;
-(void)mediaDestinationMessageHandler:(id)arg0 didReceiveUpdateAudioGroupIdentifierRequestMessage:(id)arg1 audioGroupIdentifier:(id)arg2 ;
-(void)mediaDestinationMessageHandler:(id)arg0 didReceiveUpdateSupportedOptionsRequestMessage:(id)arg1 supportOptions:(NSUInteger)arg2 ;
-(void)migrateWithHome:(id)arg0 cloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(id)arg3 ;
-(void)notifyDelegateDidUpdateStagedValues;
-(void)stageAudioGroupIdentifier:(id)arg0 ;
-(void)stagedValue:(id)arg0 didExpireValue:(id)arg1 ;
-(void)triggerStageValueDidExpireValueForAudioDestinationIdentifier;


@end


#endif