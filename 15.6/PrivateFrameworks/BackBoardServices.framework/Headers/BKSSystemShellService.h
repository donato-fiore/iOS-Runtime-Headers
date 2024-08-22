// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSSYSTEMSHELLSERVICE_H
#define BKSSYSTEMSHELLSERVICE_H

@class BSServiceConnection, BSAtomicSignal, NSString;
@protocol BKSSystemShellClientInterface, BKSSystemShellServiceConfiguration, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BKSSystemShellService : NSObject <BKSSystemShellClientInterface, BKSSystemShellServiceConfiguration>

 {
    BSServiceConnection *_connection;
    os_unfair_lock_s _lock;
    BSAtomicSignal *_checkInCompleted;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    CGFloat _idleSleepInterval;
    BOOL _waitForDataMigration;
    BOOL _configurationFinished;
    id *_watchdogPingBlock;
    BOOL _lock_didCheckIn;
    BOOL _lock_didFinishLaunching;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (copy, nonatomic) id *collectiveWatchdogPingBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat idleSleepInterval;
@property (readonly) Class superclass;
@property (nonatomic) BOOL waitForDataMigration;


-(BOOL)collectiveWatchdogPing;
-(id)initWithConfigurator:(id)arg0 ;
-(void)_activateServerConnectionWithIdleSleepInterval:(CGFloat)arg0 ;
-(void)_checkIn;
-(void)_reconnect:(id)arg0 ;
-(void)didFinishLaunching;
-(void)restartWithOptions:(NSUInteger)arg0 ;
-(void)setIndependentWatchdogEnabled:(BOOL)arg0 ;
-(void)start;


@end


#endif