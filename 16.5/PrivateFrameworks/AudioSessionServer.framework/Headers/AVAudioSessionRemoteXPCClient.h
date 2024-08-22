// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOSESSIONREMOTEXPCCLIENT_H
#define AVAUDIOSESSIONREMOTEXPCCLIENT_H

@protocol SessionManagerXPCProtocol, AVAudioSessionServerDelegate;

#import <Foundation/Foundation.h>

#import "AVAudioSessionXPCServer.h"
#import "AVAudioSessionXPCClientRelay.h"

@interface AVAudioSessionRemoteXPCClient : NSObject <SessionManagerXPCProtocol>

 {
    AVAudioSessionXPCServer *_server;
    ProcessInfo _clientProcess;
    AVAudioSessionXPCClientRelay *_clientRelay;
    id<AVAudioSessionServerDelegate> *_serverDelegate;
    BOOL _invalidated;
    char * _replyWatchdogFunctionName;
    time_point<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1, 1000000>>> _replyWatchdogMinTimestamp;
    reply_watchdog_factory _defaultReplyWatchdogFactory;
    reply_watchdog_factory _longReplyWatchdogFactory;
}




-(id)clientRelay;
-(id)initWithServer:(id)arg0 process:(struct ProcessInfo )arg1 delegate:(id)arg2 ;
-(id)setPropertiesMX:(unsigned int)arg0 token:(struct ? *)arg1 values:(id)arg2 ;
-(struct World *)world;
-(struct tuple<NSError *, NSDictionary *> )setPriorityPropertiesMX:(unsigned int)arg0 token:(struct ? *)arg1 values:(id)arg2 ;
-(void)activateSession:(unsigned int)arg0 options:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)addMXNotificationListener:(unsigned int)arg0 notificationName:(id)arg1 reply:(id)arg2 ;
-(void)createProxySession:(unsigned int)arg0 reply:(id)arg1 ;
-(void)createSession:(NSUInteger)arg0 sourceSessionID:(unsigned int)arg1 nameOrDeviceUID:(id)arg2 reply:(id)arg3 ;
-(void)deactivateSession:(unsigned int)arg0 options:(NSUInteger)arg1 priority:(id)arg2 reply:(id)arg3 ;
-(void)dealloc;
-(void)destroySession:(unsigned int)arg0 reply:(id)arg1 ;
-(void)getDeferredMessages:(unsigned int)arg0 reply:(id)arg1 ;
-(void)getIOControllerPeriod:(unsigned int)arg0 decoupledInput:(BOOL)arg1 reply:(id)arg2 ;
-(void)getMXPropertyGenericPipe:(unsigned int)arg0 propertyName:(id)arg1 reply:(id)arg2 ;
-(void)getProperty:(unsigned int)arg0 propertyName:(id)arg1 MXProperty:(BOOL)arg2 reply:(id)arg3 ;
-(void)invalidate;
-(void)pingWithReply:(id)arg0 ;
-(void)removeMXNotificationListener:(unsigned int)arg0 notificationName:(id)arg1 reply:(id)arg2 ;
-(void)setMXPropertyGenericPipe:(unsigned int)arg0 values:(id)arg1 reply:(id)arg2 ;
-(void)setProperties:(unsigned int)arg0 values:(id)arg1 MXProperties:(BOOL)arg2 reply:(id)arg3 ;
-(void)setSession:(unsigned int)arg0 decoupledInput:(BOOL)arg1 hasIOEventListeners:(BOOL)arg2 reply:(id)arg3 ;
-(void)silenceOutput:(unsigned int)arg0 options:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)simulatePrimarySessionCreationInsideServerWithReply:(id)arg0 ;
-(void)sleepWithReply:(unsigned int)arg0 reply:(id)arg1 ;
-(void)updateMicrophonePermissionWithReply:(id)arg0 ;
-(void)verifySessionExists:(unsigned int)arg0 reply:(id)arg1 ;


@end


#endif