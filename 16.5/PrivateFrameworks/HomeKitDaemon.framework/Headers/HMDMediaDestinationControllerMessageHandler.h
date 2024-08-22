// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIADESTINATIONCONTROLLERMESSAGEHANDLER_H
#define HMDMEDIADESTINATIONCONTROLLERMESSAGEHANDLER_H

@class NSString;
@protocol HMFLogging, HMDMediaDestinationControllerMessageHandlerDataSource, HMDMediaDestinationControllerMessageHandlerDelegate;


#import "HMDAppleMediaAccessoryMessageHandler.h"
#import "HMDMediaDestinationControllerMetricsEventDispatcher.h"

@interface HMDMediaDestinationControllerMessageHandler : HMDAppleMediaAccessoryMessageHandler <HMFLogging>



@property (weak) NSObject<HMDMediaDestinationControllerMessageHandlerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDMediaDestinationControllerMessageHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) HMDMediaDestinationControllerMetricsEventDispatcher *metricsEventDispatcher; // ivar: _metricsEventDispatcher
@property (readonly) Class superclass;


+(id)logCategory;
-(NSUInteger)upateOptionsInMessage:(id)arg0 error:(*id)arg1 ;
-(id)destinationIdentifierInMessage:(id)arg0 error:(*id)arg1 ;
-(id)initWithMessageTargetUUID:(id)arg0 messageDispatcher:(id)arg1 notificationCenter:(id)arg2 metricsEventDispatcher:(id)arg3 targetDevice:(BOOL)arg4 dataSource:(id)arg5 delegate:(id)arg6 ;
-(id)logIdentifier;
-(void)handleHomeAccessoryRemovedNotification:(id)arg0 ;
-(void)handleMediaDestinationControllerUpdateDestinationRequestMessage:(id)arg0 ;
-(void)handleMediaDestinationControllerUpdatedDestinationNotification:(id)arg0 ;
-(void)handleMediaDestinationUpdatedNotification:(id)arg0 ;
-(void)handleMediaGroupsAggregateConsumerUpdatedAggregateDataNotification:(id)arg0 ;
-(void)handleMediaSystemAddedNotification:(id)arg0 ;
-(void)handleMediaSystemRemovedNotification:(id)arg0 ;
-(void)handleNotificationAccessoryChangedRoom:(id)arg0 ;
-(void)notifyUpdatedDestinationWithIdentifier:(id)arg0 ;


@end


#endif