// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIDROPINSESSIONMANAGER_H
#define DIDROPINSESSIONMANAGER_H

@protocol DISessionStatusDelegate, DIXPCManagerCheckInObserver, DIDropInSessionManagerDelegate;

#import <Foundation/Foundation.h>

#import "DIDropInSession.h"
#import "DIXPCConnectionManager.h"

@interface DIDropInSessionManager : NSObject <DISessionStatusDelegate, DIXPCManagerCheckInObserver>



@property (retain, nonatomic) DIDropInSession *activeSession; // ivar: _activeSession
@property (readonly, weak, nonatomic) DIXPCConnectionManager *connectionManager; // ivar: _connectionManager
@property (weak, nonatomic) NSObject<DIDropInSessionManagerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) DIDropInSession *incomingPendingSession; // ivar: _incomingPendingSession


-(id)initWithConnectionManager:(id)arg0 ;
-(void)didAddSession:(id)arg0 ;
-(void)didRemoveSession:(id)arg0 ;
-(void)didUpdateSession:(id)arg0 ;
-(void)session:(id)arg0 didFailWithError:(id)arg1 ;
-(void)session:(id)arg0 didUpdateUplinkMuteStatus:(BOOL)arg1 ;
-(void)xpcManagerDidPerformDaemonCheckIn:(id)arg0 ;


@end


#endif