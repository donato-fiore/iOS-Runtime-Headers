// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIADESTINATIONSMANAGER_H
#define HMDMEDIADESTINATIONSMANAGER_H

@class HMFObject, HMMediaDestination, NSString, NSUUID;
@protocol HMDMediaDestinationsMessageHandlerDelegate, HMFLogging, HMDMediaDestinationsMessageHandlerDataSource, HMDMediaDestinationManager, HMDMediaDestinationsManagerDataSource, HMDMediaDestinationsManagerDelegate;


#import "HMDMediaDestinationMessageHandler.h"

@interface HMDMediaDestinationsManager : HMFObject <HMDMediaDestinationsMessageHandlerDelegate, HMFLogging, HMDMediaDestinationsMessageHandlerDataSource, HMDMediaDestinationManager>



@property (readonly) HMMediaDestination *committedDestination;
@property (weak) NSObject<HMDMediaDestinationsManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDMediaDestinationsManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) HMMediaDestination *destination; // ivar: _destination
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier;
@property (readonly) HMDMediaDestinationMessageHandler *messageHandler; // ivar: _messageHandler
@property (readonly) Class superclass;


+(NSUInteger)deriveSupportedOptionsFromDestinations:(id)arg0 ;
+(id)deriveAudioGroupIdentifierFromDestinations:(id)arg0 ;
+(id)logCategory;
-(BOOL)messageHandler:(id)arg0 isReadyForIncomingMessage:(id)arg1 ;
-(BOOL)messageHandler:(id)arg0 reachableForOutgoingMessage:(id)arg1 ;
-(id)attributeDescriptions;
-(id)dataSourceDestinationControllerWithIdentifier:(id)arg0 ;
-(id)defaultDestination;
-(id)deriveAudioDestination;
-(id)initWithDestination:(id)arg0 messageDispatcher:(id)arg1 notificationCenter:(id)arg2 dataSource:(id)arg3 delegate:(id)arg4 ;
-(id)initWithDestination:(id)arg0 messageHandler:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3 ;
-(id)logIdentifier;
-(id)messageHandler:(id)arg0 deviceForOutgoingMessage:(id)arg1 ;
-(id)messageHandler:(id)arg0 shouldRelayIncomingMessage:(id)arg1 ;
-(id)privateDescription;
-(id)sendRequestsToUpdateAudioGroupIdentifier:(id)arg0 ;
-(id)sendRequestsToUpdateSupportOptions:(NSUInteger)arg0 ;
-(void)configureWithHome:(id)arg0 ;
-(void)mediaDestinationMessageHandler:(id)arg0 didReceiveUpdateAudioGroupIdentifierRequestMessage:(id)arg1 audioGroupIdentifier:(id)arg2 ;
-(void)mediaDestinationMessageHandler:(id)arg0 didReceiveUpdateSupportedOptionsRequestMessage:(id)arg1 supportOptions:(NSUInteger)arg2 ;
-(void)mediaDestinationsMessageHandler:(id)arg0 didReceiveDestinationUpdatedNotification:(id)arg1 destination:(id)arg2 ;
-(void)refreshDestination;
-(void)stageAudioGroupIdentifier:(id)arg0 ;


@end


#endif