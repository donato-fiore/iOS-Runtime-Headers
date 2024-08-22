// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIRENTALEXPIRATIONMONITOR_H
#define VUIRENTALEXPIRATIONMONITOR_H

@class NSDate, NSTimer, TVPStateMachine;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VUIRentalExpirationMonitor : NSObject

@property (retain, nonatomic) NSDate *dateOfLastRentalExpirationHandling; // ivar: _dateOfLastRentalExpirationHandling
@property (retain, nonatomic) NSTimer *earliestExpirationTimer; // ivar: _earliestExpirationTimer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (retain, nonatomic) TVPStateMachine *stateMachine; // ivar: _stateMachine


+(id)sharedInstance;
-(id)init;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_expirationTimerDidFire:(id)arg0 ;
-(void)_isPlaybackUIBeingShownDidChange:(id)arg0 ;
-(void)_libraryContentsDidChange:(id)arg0 ;
-(void)_registerStateMachineHandlers;
-(void)dealloc;
-(void)startMonitoring;


@end


#endif