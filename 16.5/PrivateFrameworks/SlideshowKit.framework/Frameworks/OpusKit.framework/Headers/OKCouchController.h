// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKCOUCHCONTROLLER_H
#define OKCOUCHCONTROLLER_H

@protocol OS_dispatch_source, OKCouchControllerDelegate;

#import <Foundation/Foundation.h>

#import "OKPresentationCouch.h"
#import "OKPresentationCouchStep.h"

@interface OKCouchController : NSObject {
    OKPresentationCouch *_couch;
    OKPresentationCouchStep *_lastStep;
    NSUInteger _stepMode;
    CGFloat _currentStepStartTime;
    CGFloat _readinessWaitStartTime;
    CGFloat _progress;
    NSObject<OS_dispatch_source> *_timer;
    NSUInteger _startValidityBarrier;
    NSInteger _stopCounter;
    BOOL _isPlaying;
    BOOL _hasStartedToWait;
}


@property (readonly, nonatomic) CGFloat currentStepDuration; // ivar: _currentStepDuration
@property (nonatomic) CGFloat defaultStepDuration; // ivar: _defaultStepDuration
@property (nonatomic) CGFloat delayForReadinessWaitNotification; // ivar: _delayForReadinessWaitNotification
@property NSObject<OKCouchControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL loops; // ivar: _loops


-(BOOL)canStartPlayback;
-(id)_nextCouchStep:(id)arg0 ;
-(id)initWithCouch:(id)arg0 andDelegate:(id)arg1 ;
-(void)_dispatchNextStep;
-(void)_executeStep:(id)arg0 forTargetPageViewController:(id)arg1 ;
-(void)_setupTimer;
-(void)_timerEventHandler;
-(void)allowPlayback;
-(void)dealloc;
-(void)overrideMode:(NSUInteger)arg0 andCurrentStepDuration:(CGFloat)arg1 ;
-(void)preventPlayback;
-(void)startPlayback;
-(void)startPlaybackAfterDelay:(CGFloat)arg0 ;
-(void)stopPlayback;


@end


#endif