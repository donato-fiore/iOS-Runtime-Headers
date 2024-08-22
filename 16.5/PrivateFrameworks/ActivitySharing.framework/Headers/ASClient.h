// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCLIENT_H
#define ASCLIENT_H

@class HKProxyProvider, NSString;
@protocol _HKXPCExportable, OS_dispatch_queue, ASServerInterface;

#import <Foundation/Foundation.h>


@interface ASClient : NSObject <_HKXPCExportable>

 {
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id<ASServerInterface> *_serverProxy;
    HKProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_clientQueueSuccessCompletion:(SEL)arg0 ;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
// -(void)_remoteProxy:(id)arg0 errorHandler:(unk)arg1  ;
-(void)acceptCompetitionRequestFromFriendWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)acceptInviteRequestFromFriendWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)clearFriendListWithCompletion:(id)arg0 ;
-(void)cloudKitAccountStatusWithCompletion:(id)arg0 ;
-(void)completeCompetitionWithFriendWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)connectionInvalidated;
-(void)expireChangeTokenWithCompletion:(id)arg0 ;
-(void)fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)fetchAllDataWithCompletion:(id)arg0 ;
-(void)fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)arg0 withCompletion:(id)arg1 ;
-(void)friendWithRemoteUUID:(id)arg0 completion:(id)arg1 ;
-(void)handleNotificationResponse:(id)arg0 completion:(id)arg1 ;
-(void)ignoreCompetitionRequestFromFriendWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)ignoreInviteRequestFromFriendWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)pushActivityDataToAllFriendsWithCompletion:(id)arg0 ;
-(void)pushFakeActivityDataToAllFriendsWithCompletion:(id)arg0 ;
-(void)queryAppBadgeCountWithCompletion:(id)arg0 ;
-(void)removeFriendWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)sendCompetitionRequestToFriendWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)sendInviteRequestToDestination:(id)arg0 callerID:(id)arg1 serviceIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)sendWithdrawInviteRequestToFriendWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)setActivityDataVisible:(BOOL)arg0 toFriendWithUUID:(id)arg1 completion:(id)arg2 ;
-(void)setMuteEnabled:(BOOL)arg0 forFriendWithUUID:(id)arg1 completion:(id)arg2 ;


@end


#endif