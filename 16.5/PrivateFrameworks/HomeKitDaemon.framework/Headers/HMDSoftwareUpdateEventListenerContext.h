// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSOFTWAREUPDATEEVENTLISTENERCONTEXT_H
#define HMDSOFTWAREUPDATEEVENTLISTENERCONTEXT_H

@class HMFObject, NSString, HMSoftwareUpdateDescriptor;
@protocol HMFLogging, HMELastEventStoreReadHandle, HMESubscriptionProviding;


#import "HMDAccessory.h"

@interface HMDSoftwareUpdateEventListenerContext : HMFObject <HMFLogging>



@property (readonly, weak) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMELastEventStoreReadHandle> *eventStoreReadHandle; // ivar: _eventStoreReadHandle
@property (readonly) NSUInteger hash;
@property (readonly) HMSoftwareUpdateDescriptor *softwareUpdateDescriptorForLastEvent;
@property (readonly) NSInteger softwareUpdateStatusForLastEvent;
@property (readonly) NSObject<HMESubscriptionProviding> *subscriptionProvider; // ivar: _subscriptionProvider
@property (readonly) Class superclass;
@property (readonly, copy) NSString *topicForSoftwareUpdateDescriptor;


+(id)logCategory;
-(id)initWithAccessory:(id)arg0 subscriptionProvider:(id)arg1 eventStoreReadHandle:(id)arg2 ;
-(id)logIdentifier;
-(void)handleSoftwareUpdateDidBecomeAvailableWithDescriptor:(id)arg0 ;
-(void)registerConsumer:(id)arg0 topicFilters:(id)arg1 completion:(id)arg2 ;
-(void)updateAppBadgeAndBulletinNotification;


@end


#endif