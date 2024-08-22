// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTTIMERSESSIONSCOORDINATOR_H
#define MTTIMERSESSIONSCOORDINATOR_H

@class BSServiceConnection<BSServiceConnectionClient>, NSString, MTSessionsManager;
@protocol MTTimerObserver, ClockAngelClient, MTSource, OS_dispatch_queue, NAScheduler;

#import <Foundation/Foundation.h>

#import "MTTimerStorage.h"

@interface MTTimerSessionsCoordinator : NSObject <MTTimerObserver, ClockAngelClient, MTSource>



@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionClient> *connection; // ivar: _connection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (retain, nonatomic) MTSessionsManager *sessionsManager; // ivar: _sessionsManager
@property (readonly, nonatomic) MTTimerStorage *storage; // ivar: _storage
@property (readonly) Class superclass;


+(BOOL)supportsSessions;
-(id)currentTimer;
-(id)initWithStorage:(id)arg0 ;
-(id)normalizedTimeString:(CGFloat)arg0 state:(NSUInteger)arg1 ;
-(id)server;
-(id)setupInterface;
-(id)sourceIdentifier;
-(void)buildConnection;
-(void)dealloc;
-(void)handleSystemReady;
-(void)nextTimerDidChange:(id)arg0 ;
-(void)pauseTimer;
-(void)processTimerUpdate:(id)arg0 ;
-(void)resendTimerDataEntry;
-(void)resumeTimer;
-(void)source:(id)arg0 didAddTimers:(id)arg1 ;
-(void)source:(id)arg0 didDismissTimer:(id)arg1 ;
-(void)source:(id)arg0 didFireTimer:(id)arg1 ;
-(void)source:(id)arg0 didRemoveTimers:(id)arg1 ;
-(void)source:(id)arg0 didUpdateTimers:(id)arg1 ;
-(void)stopTimer;
-(void)updateTimerWithState:(NSUInteger)arg0 ;


@end


#endif