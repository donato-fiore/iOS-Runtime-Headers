// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
+(id)logger;
-(id)_createPayloadDataFromData:(id)arg0 ;
-(id)_getJWTToken;
-(id)initWithPushManager:(id)arg0 accountProvider:(id)arg1 delegate:(id)arg2 ;
-(id)serverTime;
-(void)activeChannelSubscriptionsWithCompletion:(id)arg0 ;
-(void)createChannelWithCompletion:(id)arg0 ;
-(void)publishData:(id)arg0 onChannel:(id)arg1 withChannelToken:(id)arg2 publishInitiateTime:(id)arg3 isPendingPublish:(BOOL)arg4 isScheduledPublish:(BOOL)arg5 completion:(id)arg6 ;
-(void)pushManager:(id)arg0 didReceiveData:(id)arg1 onChannel:(id)arg2 dateReceived:(id)arg3 dateExpired:(id)arg4 ;
-(void)pushManager:(id)arg0 failedToSubscribeToChannel:(id)arg1 withError:(id)arg2 ;
-(void)subscribeToChannels:(id)arg0 ;
-(void)unsubscribeFromChannels:(id)arg0 ;


@end


#endif