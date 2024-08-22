// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CARSESSIONSTATUS_H
#define CARSESSIONSTATUS_H

@protocol OS_dispatch_source, CARSessionObserving;

#import <Foundation/Foundation.h>

#import "CARSession.h"
#import "CARSessionChangedNotificationConverter.h"
#import "CARObserverHashTable.h"

@interface CARSessionStatus : NSObject

@property (readonly, nonatomic) BOOL clientIsCarPlayShell; // ivar: _clientIsCarPlayShell
@property (retain, nonatomic) NSObject<OS_dispatch_source> *connectingTimer; // ivar: _connectingTimer
@property (readonly, nonatomic) CARSession *currentSession;
@property (retain, nonatomic) CARSessionChangedNotificationConverter *notificationConverter; // ivar: _notificationConverter
@property (retain, nonatomic) CARSession *session; // ivar: _session
@property (weak, nonatomic) NSObject<CARSessionObserving> *sessionObserver; // ivar: _sessionObserver
@property (retain, nonatomic) CARObserverHashTable *sessionObservers; // ivar: _sessionObservers
@property (nonatomic) NSUInteger timeoutInterval; // ivar: _timeoutInterval


-(id)init;
-(id)initAndWaitUntilSessionUpdated;
-(id)initForCarPlayShell;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(void)_handleAuthenticationSucceeded:(id)arg0 ;
-(void)_handleCarCapabilitiesUpdated;
-(void)_handleConfigurationUpdated;
-(void)_handleConnectingTimeout;
-(void)_handleEndpointActivated:(id)arg0 ;
-(void)_handleInCarNotification;
-(void)_handleSessionChanged;
-(void)_handleStartingWiredConnectionNotification;
-(void)_notifyCancelledConnectionAttemptOnTransport:(NSUInteger)arg0 ;
-(void)_notifyDidConnectSession:(id)arg0 ;
-(void)_notifyDidDisconnectSession:(id)arg0 ;
-(void)_notifyDidUpdateSession:(id)arg0 ;
-(void)_notifyStartedConnectionAttemptOnTransport:(NSUInteger)arg0 ;
-(void)_startConnectingTimer;
-(void)_stopConnectingTimer;
-(void)_updateSession;
-(void)addSessionObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeSessionObserver:(id)arg0 ;
-(void)waitForSessionInitialization;


@end


#endif