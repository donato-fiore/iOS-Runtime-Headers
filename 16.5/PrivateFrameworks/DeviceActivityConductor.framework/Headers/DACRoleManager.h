// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DACROLEMANAGER_H
#define DACROLEMANAGER_H

@class NSXPCConnection, NSString, NSDate;
@protocol DACRoleClientInterface, DACRoleManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DACDeviceRole.h"

@interface DACRoleManager : NSObject <DACRoleClientInterface>



@property (nonatomic, getter=isConnected) BOOL connected; // ivar: _connected
@property (weak, nonatomic) NSXPCConnection *currentConnection; // ivar: _currentConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<DACRoleManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastLeaderAt; // ivar: _lastLeaderAt
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) int resetNotifyToken; // ivar: _resetNotifyToken
@property (retain, nonatomic) DACDeviceRole *role; // ivar: _role
@property (nonatomic) BOOL shouldAttemptReconnect; // ivar: _shouldAttemptReconnect
@property (readonly) Class superclass;


-(id)_remoteInterfaceWithErrorHandler:(id)arg0 ;
-(id)_serviceConnection;
-(id)initWithDelegate:(id)arg0 lastLeaderAt:(id)arg1 cluster:(id)arg2 queue:(id)arg3 ;
-(id)initWithDelegate:(id)arg0 lastLeaderAt:(id)arg1 queue:(id)arg2 ;
-(void)_conductordResetOnQueue;
-(void)_lostConnectionToService;
-(void)_notifyDelegate;
-(void)dealloc;
-(void)requestSpeakerGroupLeaderRole;
-(void)roleChanged:(id)arg0 ;


@end


#endif