// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIADESTINATIONMESSAGEHANDLER_H
#define HMDMEDIADESTINATIONMESSAGEHANDLER_H

@protocol HMDMediaDestinationMessageHandlerDataSource, HMDMediaDestinationMessageHandlerDelegate;


#import "HMDAppleMediaAccessoryMessageHandler.h"

@interface HMDMediaDestinationMessageHandler : HMDAppleMediaAccessoryMessageHandler

@property (weak) NSObject<HMDMediaDestinationMessageHandlerDataSource> *dataSource; // ivar: _dataSource
@property (weak) NSObject<HMDMediaDestinationMessageHandlerDelegate> *delegate; // ivar: _delegate


+(id)logCategory;
-(NSUInteger)supportedOptionsInMessage:(id)arg0 error:(*id)arg1 ;
-(id)audioGroupIdentifierInMessage:(id)arg0 error:(*id)arg1 ;
-(id)initWithDestination:(id)arg0 messageDispatcher:(id)arg1 notificationCenter:(id)arg2 dataSource:(id)arg3 delegate:(id)arg4 ;
-(id)initWithDestination:(id)arg0 messageDispatcher:(id)arg1 notificationCenter:(id)arg2 notifications:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5 ;
-(void)handleMediaDestinationUpdateAudioGroupIdentifierRequestMessage:(id)arg0 ;
-(void)handleMediaDestinationUpdateSupportedOptionsRequestMessage:(id)arg0 ;
-(void)handleUpdatedDestination:(id)arg0 ;
-(void)sendRequestToUpdateAudioGroupIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)sendRequestToUpdateSupportOptions:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif