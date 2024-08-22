// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSLEEPMODEEXITDETECTOR_H
#define HDSPSLEEPMODEEXITDETECTOR_H

@class NSString;
@protocol HDSPSleepModeObserver, HDSPWakeDetector, HDSPEnvironmentAware, HDSPWakeDetectorDelegate;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPSleepModeExitDetector : NSObject <HDSPSleepModeObserver, HDSPWakeDetector, HDSPEnvironmentAware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDetecting; // ivar: _isDetecting
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;
@property (weak, nonatomic) NSObject<HDSPWakeDetectorDelegate> *wakeDetectorDelegate; // ivar: _wakeDetectorDelegate


-(id)initWithEnvironment:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)sleepModeDidChange:(NSInteger)arg0 previousMode:(NSInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)startDetecting;
-(void)stopDetecting;


@end


#endif