// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPCORECLIENT_H
#define CPCORECLIENT_H

@class NSString, NSPointerArray, NSArray;
@protocol CPCoreServiceObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CPCoreXPCServiceClient.h"

@interface CPCoreClient : NSObject <CPCoreServiceObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // ivar: _observerQueue
@property (retain, nonatomic) NSPointerArray *observers; // ivar: _observers
@property (readonly, nonatomic) NSArray *participants;
@property (retain, nonatomic) CPCoreXPCServiceClient *serviceClient; // ivar: _serviceClient
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)_destroySharedInstance;
-(BOOL)_isLoggedIn;
-(id)_allParticipants;
-(id)_localParticipant;
-(id)initWithObserver:(id)arg0 ;
-(id)initWithObserver:(id)arg0 queue:(id)arg1 ;
-(id)initWithObserver:(id)arg0 queue:(id)arg1 serviceClient:(id)arg2 ;
-(id)localParticipant;
-(void)_activeSceneSharingRequestsWithReply:(id)arg0 ;
-(void)_activeSession:(id)arg0 ;
-(void)_activeSharingRequestsWithReply:(id)arg0 ;
-(void)_addObserver:(id)arg0 ;
-(void)_currentlySharedAppsWithReply:(id)arg0 ;
-(void)_getSessionStatusEx:(id)arg0 ;
-(void)_removeObserver:(id)arg0 ;
-(void)_sendAppSharingRequest:(id)arg0 completion:(id)arg1 ;
-(void)_sendModelSyncData:(id)arg0 toParticipants:(id)arg1 completion:(id)arg2 ;
-(void)didFailWithError:(id)arg0 ;
-(void)didInitiateAppSharingRequest:(id)arg0 ;
-(void)didReceiveAppSharingRequestFrom:(id)arg0 sharingRequest:(id)arg1 ;
-(void)didReceiveData:(id)arg0 ofType:(unsigned char)arg1 fromParticipant:(id)arg2 ;
-(void)didReceiveModelSyncData:(id)arg0 fromParticipant:(id)arg1 ;
-(void)participantDidJoinSession:(id)arg0 ;
-(void)participantDidLeaveSession:(id)arg0 ;
-(void)participantProcessConnectedFrom:(id)arg0 ;
-(void)participantProcessDisconnectedFrom:(id)arg0 ;
-(void)resetPriorityForReliableLink:(unsigned int)arg0 ;
-(void)resetPriorityForUnreliableLink:(unsigned int)arg0 ;
-(void)sendDataReliably:(id)arg0 toParticipants:(id)arg1 completion:(id)arg2 ;
-(void)sendDataReliablyToAllParticipants:(id)arg0 completion:(id)arg1 ;
-(void)sendDataUnreliably:(id)arg0 toParticipants:(id)arg1 completion:(id)arg2 ;
-(void)sendDataUnreliablyToAllParticipants:(id)arg0 completion:(id)arg1 ;
-(void)sessionDidChange:(id)arg0 ;
-(void)sessionDidEnd:(id)arg0 ;
-(void)sessionDidStart:(id)arg0 ;
-(void)willInitiateAppSharingRequest:(id)arg0 sharingHandler:(id)arg1 ;


@end


#endif