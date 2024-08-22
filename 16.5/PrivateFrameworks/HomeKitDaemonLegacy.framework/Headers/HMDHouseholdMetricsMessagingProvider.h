// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOUSEHOLDMETRICSMESSAGINGPROVIDER_H
#define HMDHOUSEHOLDMETRICSMESSAGINGPROVIDER_H

@protocol HMDHouseholdMetricsMessaging, HMFMessageReceiver;

#import <Foundation/Foundation.h>

#import "HMDMessageDispatcher.h"

@interface HMDHouseholdMetricsMessagingProvider : NSObject <HMDHouseholdMetricsMessaging>



@property (readonly, nonatomic) HMDMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<HMFMessageReceiver> *receiver; // ivar: _receiver


+(id)logCategory;
-(id)initWithReceiver:(id)arg0 ;
-(id)initWithReceiver:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)deregisterForMessage:(id)arg0 ;
-(void)registerForMessage:(id)arg0 messageHandler:(id)arg1 ;
-(void)sendMessage:(id)arg0 toDevice:(id)arg1 withPayload:(id)arg2 responseHandler:(id)arg3 ;


@end


#endif