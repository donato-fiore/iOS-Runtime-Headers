// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTTIMERSERVER_H
#define MTTIMERSERVER_H

@class NSString;
@protocol MTTimerObserver, MTTimerServer, MTAgentDiagnosticDelegate, NAScheduler;

#import <Foundation/Foundation.h>

#import "MTXPCConnectionListenerProvider.h"
#import "MTTimerStorage.h"

@interface MTTimerServer : NSObject <MTTimerObserver, MTTimerServer, MTAgentDiagnosticDelegate>



@property (readonly, nonatomic) MTXPCConnectionListenerProvider *connectionListenerProvider; // ivar: _connectionListenerProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (readonly, nonatomic) MTTimerStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSystemReady) BOOL systemReady; // ivar: _systemReady


-(id)_systemNotReadyError;
-(id)gatherDiagnostics;
-(id)initWithStorage:(id)arg0 ;
-(id)initWithStorage:(id)arg0 connectionListenerProvider:(id)arg1 ;
-(void)addTimer:(id)arg0 withCompletion:(id)arg1 ;
-(void)checkIn;
-(void)dismissTimerWithIdentifier:(id)arg0 withCompletion:(id)arg1 ;
-(void)getTimersWithCompletion:(id)arg0 ;
-(void)handleSystemReady;
-(void)nextTimerDidChange:(id)arg0 ;
-(void)printDiagnostics;
-(void)removeTimer:(id)arg0 withCompletion:(id)arg1 ;
-(void)repeatTimerWithIdentifier:(id)arg0 withCompletion:(id)arg1 ;
-(void)source:(id)arg0 didAddTimers:(id)arg1 ;
-(void)source:(id)arg0 didDismissTimer:(id)arg1 ;
-(void)source:(id)arg0 didFireTimer:(id)arg1 ;
-(void)source:(id)arg0 didRemoveTimers:(id)arg1 ;
-(void)source:(id)arg0 didUpdateTimers:(id)arg1 ;
-(void)startListening;
-(void)stopListening;
-(void)updateTimer:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif