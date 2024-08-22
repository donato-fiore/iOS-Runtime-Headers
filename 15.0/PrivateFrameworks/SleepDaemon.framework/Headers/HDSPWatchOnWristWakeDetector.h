// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPWATCHONWRISTWAKEDETECTOR_H
#define HDSPWATCHONWRISTWAKEDETECTOR_H

@class NSString;
@protocol HDSPWatchOnWristObserver, HDSPWakeDetector, HDSPEnvironmentAware, HDSPWakeDetectorDelegate;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPWatchOnWristWakeDetector : NSObject <HDSPWatchOnWristObserver, HDSPWakeDetector, HDSPEnvironmentAware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger detectionWindowMinutes;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDetecting; // ivar: _isDetecting
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<HDSPWakeDetectorDelegate> *wakeDetectorDelegate; // ivar: _wakeDetectorDelegate


-(id)initWithEnvironment:(id)arg0 ;
-(id)onWristMonitor;
-(void)detectedOffWristOnDate:(id)arg0 ;
-(void)detectedOnWristOnDate:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)startDetecting;
-(void)stopDetecting;


@end


#endif