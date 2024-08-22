// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIAGROUPSCONTROLLER_H
#define HMDMEDIAGROUPSCONTROLLER_H

@class HMFObject, NSString, NSUUID;
@protocol HMFLogging, HMDMediaGroupsMessageHandlerDelegate, HMDMediaGroupsControllerDataSource;


#import "HMDMediaGroupsAggregator.h"
#import "HMDMediaGroupsMessageHandler.h"

@interface HMDMediaGroupsController : HMFObject <HMFLogging, HMDMediaGroupsMessageHandlerDelegate>



@property (readonly) HMDMediaGroupsAggregator *aggregator; // ivar: _aggregator
@property (weak) NSObject<HMDMediaGroupsControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) HMDMediaGroupsMessageHandler *messageHandler; // ivar: _messageHandler
@property (readonly, copy) NSUUID *parentIdentifier; // ivar: _parentIdentifier
@property (readonly) Class superclass;


+(id)logCategory;
-(id)addedDestinationIdentifiersForGroup:(id)arg0 destinationIdentifiers:(id)arg1 ;
-(id)associatedAccessoriesWithDestinationIdentifiers:(id)arg0 ;
-(id)attributeDescriptions;
-(id)createGroupWithIdentifier:(id)arg0 name:(id)arg1 destinationIdentifiers:(id)arg2 destinationParentIdentifiers:(id)arg3 ;
-(id)destinationManagersWithGroupableDestinations;
-(id)groupableDestinations;
-(id)initWithIdentifier:(id)arg0 parentIdentifier:(id)arg1 aggregator:(id)arg2 messageHandler:(id)arg3 ;
-(id)localGroupWithIdentifier:(id)arg0 ;
-(id)locallyCreateGroupWithIdentifer:(id)arg0 name:(id)arg1 destinationIdentifiers:(id)arg2 destinationParentIdentifiers:(id)arg3 ;
-(id)locallyUpdateGroup:(id)arg0 name:(id)arg1 destinationIdentifiers:(id)arg2 destinationParentIdentifiers:(id)arg3 ;
-(id)logIdentifier;
-(id)privateDescription;
-(id)removeGroup:(id)arg0 ;
-(id)removeGroupWithIdentifier:(id)arg0 ;
-(id)removedDestinationIdentifiersForGroup:(id)arg0 destinationIdentifiers:(id)arg1 ;
-(id)sendRequestsToUpdateAudioGroupIdentifier:(id)arg0 destinationIdentifiers:(id)arg1 ;
-(id)sendRequestsToUpdateAudioGroupIdentifier:(id)arg0 destinationManager:(id)arg1 ;
-(id)updateGroupWithIdentifier:(id)arg0 name:(id)arg1 destinationIdentifiers:(id)arg2 destinationParentIdentifiers:(id)arg3 ;
-(void)configureWithHome:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)mediaGroupsMessageHandler:(id)arg0 didReceiveCreateGroupRequestMessage:(id)arg1 payload:(id)arg2 ;
-(void)mediaGroupsMessageHandler:(id)arg0 didReceiveRemoveGroupRequestMessage:(id)arg1 identifier:(id)arg2 ;
-(void)mediaGroupsMessageHandler:(id)arg0 didReceiveUpdateGroupRequestMessage:(id)arg1 payload:(id)arg2 ;


@end


#endif