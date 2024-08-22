// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKACHANNELMANAGER_H
#define SKACHANNELMANAGER_H

@class NSString;
@protocol SKAPushManagingDelegate, SKAChannelManaging, SKAAccountProviding, SKAChannelManagingDelegate, SKAPushManaging;

#import <Foundation/Foundation.h>


@interface SKAChannelManager : NSObject <SKAPushManagingDelegate, SKAChannelManaging>



@property (retain, nonatomic) NSObject<SKAAccountProviding> *accountProvider; // ivar: _accountProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKAChannelManagingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SKAPushManaging> *pushManager; // ivar: _pushManager
@property (readonly) Class superclass;


+(id)_jwtTokenNotFoundError;
+(id)_serverResponseError;
+(id)logger;
-(id)_createPayloadDataFromData:(id)arg0 ;
-(id)_getNonce;
-(id)_getPresenceJWTToken;
-(id)_getStatusJWTToken;
-(id)initWithPushManager:(id)arg0 accountProvider:(id)arg1 delegate:(id)arg2 ;
-(id)serverTime;
-(void)activePresenceChannelSubscriptionsWithCompletion:(id)arg0 ;
-(void)activeStatusChannelSubscriptionsWithCompletion:(id)arg0 ;
-(void)assertPresence:(id)arg0 onChannel:(id)arg1 membershipKey:(id)arg2 serverKey:(id)arg3 timestamp:(id)arg4 withChannelToken:(id)arg5 isRefresh:(BOOL)arg6 completion:(id)arg7 ;
-(void)createChannelWithCompletion:(id)arg0 ;
-(void)createPresenceChannelWithMembershipKey:(id)arg0 serverKey:(id)arg1 completion:(id)arg2 ;
-(void)disableActivityTracking;
-(void)enableActivityTracking;
-(void)pollActiveParticipantsForChannel:(id)arg0 membershipKey:(id)arg1 serverKey:(id)arg2 withChannelToken:(id)arg3 completion:(id)arg4 ;
-(void)publishData:(id)arg0 onChannel:(id)arg1 withChannelToken:(id)arg2 publishInitiateTime:(id)arg3 isPendingPublish:(BOOL)arg4 isScheduledPublish:(BOOL)arg5 retryCount:(NSUInteger)arg6 completion:(id)arg7 ;
-(void)pushManager:(id)arg0 didReceiveData:(id)arg1 onChannel:(id)arg2 dateReceived:(id)arg3 dateExpired:(id)arg4 ;
-(void)pushManager:(id)arg0 failedToSubscribeToChannel:(id)arg1 withError:(id)arg2 ;
-(void)releasePresenceOnChannel:(id)arg0 membershipKey:(id)arg1 serverKey:(id)arg2 timestamp:(id)arg3 withChannelToken:(id)arg4 completion:(id)arg5 ;
-(void)subscribeToPresenceChannels:(id)arg0 ;
-(void)subscribeToStatusChannels:(id)arg0 ;
-(void)unsubscribeFromPresenceChannels:(id)arg0 ;
-(void)unsubscribeFromStatusChannels:(id)arg0 ;


@end


#endif