// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPCOREXPCSERVICE_H
#define CPCOREXPCSERVICE_H

@class LSApplicationWorkspace, NSMutableSet, NSMutableDictionary, NSString;
@protocol CPCoreSessionControllerDelegate, CPCoreService, XPCServerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TUSessionController.h"
#import "CPCoreApplicationHandler.h"
#import "CPIDSHelper.h"
#import "XPCServer.h"

@interface CPCoreXPCService : NSObject <CPCoreSessionControllerDelegate, CPCoreService, XPCServerDelegate>

 {
    TUSessionController *_tuSessionControllerImp;
    LSApplicationWorkspace *_applicationWorkspace;
    NSMutableSet *_cachedParticipants;
    NSMutableDictionary *_cachedSharingRequests;
}


@property (retain, nonatomic) CPCoreApplicationHandler *appHandler; // ivar: _appHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CPIDSHelper *idsHelper; // ivar: _idsHelper
@property (retain, nonatomic) TUSessionController *sessionController; // ivar: _sessionController
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue; // ivar: _xpcQueue
@property (retain, nonatomic) XPCServer *xpcServer; // ivar: _xpcServer


+(id)service;
-(BOOL)_connectionFromCPApp:(id)arg0 ;
-(id)init;
-(id)localParticipant;
-(void)_notifyClientsWithSharingRequest:(id)arg0 fromID:(id)arg1 ;
-(void)_removeCachedRequest:(id)arg0 from:(id)arg1 ;
-(void)activeSceneSharingRequestsWithReply:(id)arg0 ;
-(void)activeSession:(id)arg0 ;
-(void)activeSharingRequestsWithReply:(id)arg0 ;
-(void)connectionDidConnect:(id)arg0 ;
-(void)connectionDidDisconnect:(id)arg0 ;
-(void)currentlySharedAppsWithReply:(id)arg0 ;
-(void)didFailWithError:(id)arg0 ;
-(void)didJoinSession:(id)arg0 ;
-(void)didLeaveSession:(id)arg0 ;
-(void)didReceiveAppBroadcast:(id)arg0 fromID:(id)arg1 ;
-(void)didReceiveAppSharingRequest:(id)arg0 fromID:(id)arg1 ;
-(void)getConnectedParticipantsWithReply:(id)arg0 ;
-(void)isAppRunningWithBundleId:(id)arg0 result:(id)arg1 ;
-(void)isConnectedToSession:(id)arg0 ;
-(void)localAccountName:(id)arg0 ;
-(void)participantDidJoinSession:(id)arg0 ;
-(void)participantDidLeaveSession:(id)arg0 ;
-(void)requestBroadcastConnectionForService:(id)arg0 completion:(id)arg1 ;
-(void)requestConnectionObjectForRemoteParticipant:(id)arg0 linkType:(unsigned char)arg1 completion:(id)arg2 ;
-(void)sendAppSharingRequest:(id)arg0 completion:(id)arg1 ;
-(void)sessionDidChange:(id)arg0 ;


@end


#endif