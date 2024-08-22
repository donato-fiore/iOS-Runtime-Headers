// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSDAEMON_H
#define MSDAEMON_H

@class NSTimer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MSDaemon : NSObject

@property (nonatomic) int UIBusyCount; // ivar: _UIBusyCount
@property (nonatomic) int busyCount; // ivar: _busyCount
@property (retain, nonatomic) NSTimer *hysteresisTimer; // ivar: _hysteresisTimer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *idleCountQueue; // ivar: _idleCountQueue
@property (nonatomic) BOOL stabilizedIsBusy; // ivar: _stabilizedIsBusy


-(BOOL)isBusy;
-(id)init;
-(void)_didChangeIdleBusyState:(BOOL)arg0 ;
-(void)_hysteresisTimerDidFire:(id)arg0 ;
-(void)didIdle;
-(void)didUnidle;
-(void)releaseBusy;
-(void)releasePowerAssertion;
-(void)releaseUIBusy;
-(void)retainBusy;
-(void)retainPowerAssertion;
-(void)retainUIBusy;
-(void)stabilizedDidIdle;
-(void)stabilizedDidUnidle;


@end


#endif