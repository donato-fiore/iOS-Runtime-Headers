// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIADESTINATIONCONTROLLER_H
#define HMDMEDIADESTINATIONCONTROLLER_H

@class HMFObject, HMMediaDestinationControllerData, NSString, NSUUID, HMFStagedValue;
@protocol HMDMediaDestinationControllerMessageHandlerDataSource, HMFLogging, HMDMediaDestinationControllerBackingStoreHandlerDelegate, HMDMediaDestinationControllerMessageHandlerDelegate, HMFStagedValueDelegate, HMDMediaDestinationControllerDataSource, HMDMediaDestinationControllerDelegate;


#import "HMDMediaDestinationControllerBackingStoreHandler.h"
#import "HMDMediaDestinationControllerMessageHandler.h"
#import "HMDMediaDestinationControllerMetricsEventDispatcher.h"

@interface HMDMediaDestinationController : HMFObject <HMDMediaDestinationControllerMessageHandlerDataSource, HMFLogging, HMDMediaDestinationControllerBackingStoreHandlerDelegate, HMDMediaDestinationControllerMessageHandlerDelegate, HMFStagedValueDelegate>



@property (readonly) HMDMediaDestinationControllerBackingStoreHandler *backingStoreHandler; // ivar: _backingStoreHandler
@property (readonly, copy) HMMediaDestinationControllerData *committedData;
@property (readonly, copy) HMMediaDestinationControllerData *data;
@property (weak) NSObject<HMDMediaDestinationControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDMediaDestinationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) BOOL isTargetDevice; // ivar: _isTargetDevice
@property (readonly) HMDMediaDestinationControllerMessageHandler *messageHandler; // ivar: _messageHandler
@property (retain) HMDMediaDestinationControllerMetricsEventDispatcher *metricsEventDispatcher; // ivar: _metricsEventDispatcher
@property (readonly) HMFStagedValue *stagedAvailableDestinationIdentifiers; // ivar: _stagedAvailableDestinationIdentifiers
@property (readonly) HMFStagedValue *stagedDestinationIdentifier; // ivar: _stagedDestinationIdentifier
@property (readonly) Class superclass;
@property (readonly, copy) NSString *urlString;


+(id)logCategory;
-(BOOL)hasSetDestinationRelatedToIdentifier:(id)arg0 ;
-(BOOL)messageHandler:(id)arg0 reachableForOutgoingMessage:(id)arg1 ;
-(id)assistantObjectWithHome:(id)arg0 name:(id)arg1 ;
-(id)attributeDescriptions;
-(id)dataSourceDestinationManagerWithIdentifier:(id)arg0 ;
-(id)dataSourceDestinationUsingRelatedIdentifier:(id)arg0 ;
-(id)dataSourceDestinationWithIdentifier:(id)arg0 ;
-(id)filteredAvailableDestinationIdentifiers;
-(id)filteredDestinationIdentifierFilteredAvailableDestinationIdentifiers:(id)arg0 ;
-(id)initWithBackingStoreHandler:(id)arg0 messageHandler:(id)arg1 metricsEventDispatcher:(id)arg2 targetDevice:(BOOL)arg3 dataSource:(id)arg4 delegate:(id)arg5 ;
-(id)initWithData:(id)arg0 backingStore:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 logEventDailyScheduler:(id)arg4 targetDevice:(BOOL)arg5 dataSource:(id)arg6 delegate:(id)arg7 ;
-(id)logIdentifier;
-(id)messageHandler:(id)arg0 deviceForOutgoingMessage:(id)arg1 ;
-(id)messageHandler:(id)arg0 shouldRelayIncomingMessage:(id)arg1 ;
-(id)privateDescription;
-(id)updateAvailableDestinationIdentifiers:(id)arg0 ;
-(id)updateDestinationIdentifier:(id)arg0 ;
-(id)updateDestinationIdentifier:(id)arg0 updateOptions:(NSUInteger)arg1 ;
-(id)updateDestinationWithIdentifier:(id)arg0 audioGroupIdentifier:(id)arg1 ;
-(void)configureWithHome:(id)arg0 ;
-(void)mediaDestinationControllerBackingStoreHandler:(id)arg0 didUpdateAvailableDestinationIdentifiers:(id)arg1 ;
-(void)mediaDestinationControllerBackingStoreHandler:(id)arg0 didUpdateDestinationIdentifier:(id)arg1 ;
-(void)mediaDestinationControllerMessageHandler:(id)arg0 didReceiveAccessoryChangedRoomNotification:(id)arg1 ;
-(void)mediaDestinationControllerMessageHandler:(id)arg0 didReceiveHomeAccessoryRemovedNotification:(id)arg1 destination:(id)arg2 ;
-(void)mediaDestinationControllerMessageHandler:(id)arg0 didReceiveMediaDestinationControllerUpdateDestinationRequestMessage:(id)arg1 destinationIdentifier:(id)arg2 updateOptions:(NSUInteger)arg3 ;
-(void)mediaDestinationControllerMessageHandler:(id)arg0 didReceiveMediaDestinationControllerUpdatedDestinationNotification:(id)arg1 destinationControllerIdentifier:(id)arg2 destinationIdentifier:(id)arg3 ;
-(void)mediaDestinationControllerMessageHandler:(id)arg0 didReceiveMediaDestinationUpdatedNotification:(id)arg1 ;
-(void)mediaDestinationControllerMessageHandler:(id)arg0 didReceiveMediaSystemAddedNotification:(id)arg1 ;
-(void)mediaDestinationControllerMessageHandler:(id)arg0 didReceiveMediaSystemRemovedNotification:(id)arg1 ;
-(void)migrateWithHome:(id)arg0 cloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(id)arg3 ;
-(void)notifyDelegateDidUpdateStagedValues;
-(void)refeshAvailableDestinationIdentifiers;
-(void)refreshDestinationController;
-(void)refreshDestinationIdentifier;
-(void)stageAvailableDestinationIdentifiers:(id)arg0 ;
-(void)stageDestinationIdentifier:(id)arg0 ;
-(void)stagedValue:(id)arg0 didExpireAvailableDestinationIdentifiers:(id)arg1 ;
-(void)stagedValue:(id)arg0 didExpireDestinationIdentifier:(id)arg1 ;
-(void)stagedValue:(id)arg0 didExpireValue:(id)arg1 ;
-(void)triggerStageValueDidExpireValueForStagedAvailableDestinationIdentifiers;
-(void)triggerStageValueDidExpireValueForStagedDestinationIdentifier;
-(void)unsetAudioGroupForCurrentDestination;


@end


#endif