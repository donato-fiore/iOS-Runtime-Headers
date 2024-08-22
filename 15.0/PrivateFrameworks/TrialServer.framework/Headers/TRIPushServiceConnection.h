// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPUSHSERVICECONNECTION_H
#define TRIPUSHSERVICECONNECTION_H

@class APSConnection, NSString;
@protocol APSConnectionDelegate, TRIPushServiceChannelSubscribing, OS_dispatch_queue, TRIPushServiceConnectionDelegate;

#import <Foundation/Foundation.h>


@interface TRIPushServiceConnection : NSObject <APSConnectionDelegate, TRIPushServiceChannelSubscribing>



@property (readonly, nonatomic) APSConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *pushServiceQueue; // ivar: _pushServiceQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *subscriptionRequestQueue; // ivar: _subscriptionRequestQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<TRIPushServiceConnectionDelegate> *triDelegate; // ivar: _triDelegate


-(NSUInteger)_subscribedChannelCount;
-(id)_publicChannelForChannelId:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)subscribedChannels;
-(void)_subscribeToChannel:(id)arg0 ;
-(void)_unsubscribeFromChannel:(id)arg0 ;
-(void)connection:(id)arg0 channelSubscriptionsFailedWithFailures:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)dealloc;
-(void)subscribeToChannel:(id)arg0 ;
-(void)unsubscribeFromChannel:(id)arg0 ;


@end


#endif