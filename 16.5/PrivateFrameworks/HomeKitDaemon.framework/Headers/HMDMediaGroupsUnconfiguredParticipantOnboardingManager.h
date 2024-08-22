// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIAGROUPSUNCONFIGUREDPARTICIPANTONBOARDINGMANAGER_H
#define HMDMEDIAGROUPSUNCONFIGUREDPARTICIPANTONBOARDINGMANAGER_H

@class NSMutableDictionary, NSString, NSUUID;
@protocol HMFLogging, HMDMediaGroupsUnconfiguredParticipantOnboardingManagerDataSource;

#import <Foundation/Foundation.h>


@interface HMDMediaGroupsUnconfiguredParticipantOnboardingManager : NSObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_queuedAssociatedGroupIdentifiers;
}


@property (weak) NSObject<HMDMediaGroupsUnconfiguredParticipantOnboardingManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(id)logCategory;
-(id)dequeuedAssociatedGroupIdentifierForParticipantAccessoryUUID:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)logIdentifier;
-(id)mediaDestinationManagerWithParticipantAccessoryUUID:(id)arg0 ;
-(id)queuedParticipantAccessoryUUIDs;
-(void)attemptOnboardingForParticipantAccessoryUUID:(id)arg0 ;
-(void)configureWithNotificationCenter:(id)arg0 ;
-(void)dequeueAvailableOnboadedParticipants;
-(void)handleMediaGroupsAggregateConsumerUpdatedAggregateDataNotification:(id)arg0 ;
-(void)queueOnboardingParticipantWithAccessoryUUID:(id)arg0 withAssociatedGroupIdentifier:(id)arg1 ;
-(void)setQueuedAssociatedGroupIdentifier:(id)arg0 forParticipantAccessoryUUID:(id)arg1 ;


@end


#endif