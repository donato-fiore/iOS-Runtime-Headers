// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKAPUSHMANAGER_H
#define SKAPUSHMANAGER_H

@class APSConnection, NSString, FTMessageDelivery;
@protocol APSConnectionDelegate, SKASystemMonitorListener, SKAPushManaging, SKAPushManagingDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SKASystemMonitor.h"

@interface SKAPushManager : NSObject <APSConnectionDelegate, SKASystemMonitorListener, SKAPushManaging>



@property (retain, nonatomic) APSConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKAPushManagingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FTMessageDelivery *messageDelivery; // ivar: _messageDelivery
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) SKASystemMonitor *systemMonitor; // ivar: _systemMonitor
@property (nonatomic) BOOL trafficModeEnabled; // ivar: _trafficModeEnabled


+(id)logger;
-(BOOL)_sharedChannelsIsDisabledByServer;
-(id)_pushEnvironment;
-(id)initWithQueue:(id)arg0 systemMonitor:(id)arg1 inTrafficMode:(BOOL)arg2 ;
-(id)pushToken;
-(id)serverTime;
-(void)_initializeAPSConnection;
-(void)_subscribeToChannels:(id)arg0 forTopic:(id)arg1 ;
-(void)_subscribedChannelsForTopic:(id)arg0 WithCompletion:(id)arg1 ;
-(void)_switchFilterToEnabledForTopic:(id)arg0 ;
-(void)_switchFilterToNonwakingForTopic:(id)arg0 ;
-(void)_unsubscribeFromChannels:(id)arg0 forTopic:(id)arg1 ;
-(void)connection:(id)arg0 channelSubscriptionsFailedWithFailures:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)createChannelWithProtoData:(id)arg0 completion:(id)arg1 ;
-(void)disableActivityTracking;
-(void)enableActivityTracking;
-(void)publishStatus:(id)arg0 completion:(id)arg1 ;
-(void)sendPresenceMessage:(id)arg0 completion:(id)arg1 ;
-(void)subscribeToPresenceChannels:(id)arg0 ;
-(void)subscribeToStatusChannels:(id)arg0 ;
-(void)subscribedPresenceChannelsWithCompletion:(id)arg0 ;
-(void)subscribedStatusChannelsWithCompletion:(id)arg0 ;
-(void)switchPresenceFilterToEnabled;
-(void)switchPresenceFilterToNonwaking;
-(void)switchStatusFilterToEnabled;
-(void)switchStatusFilterToNonwaking;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)unsubscribeFromPresenceChannels:(id)arg0 ;
-(void)unsubscribeFromStatusChannels:(id)arg0 ;


@end


#endif