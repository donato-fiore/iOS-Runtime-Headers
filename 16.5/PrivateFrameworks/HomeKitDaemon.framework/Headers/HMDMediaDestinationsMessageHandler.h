// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIADESTINATIONSMESSAGEHANDLER_H
#define HMDMEDIADESTINATIONSMESSAGEHANDLER_H

@protocol HMDMediaDestinationsMessageHandlerDataSource, HMDMediaDestinationsMessageHandlerDelegate;


#import "HMDMediaDestinationMessageHandler.h"

@interface HMDMediaDestinationsMessageHandler : HMDMediaDestinationMessageHandler

@property (weak) NSObject<HMDMediaDestinationsMessageHandlerDataSource> *dataSource; // ivar: _dataSource
@property (weak) NSObject<HMDMediaDestinationsMessageHandlerDelegate> *delegate; // ivar: _delegate


-(id)initWithDestination:(id)arg0 messageDispatcher:(id)arg1 notificationCenter:(id)arg2 dataSource:(id)arg3 delegate:(id)arg4 ;
-(void)handleMediaDestinationUpdatedNotification:(id)arg0 ;
-(void)handleUpdatedDestination:(id)arg0 ;


@end


#endif