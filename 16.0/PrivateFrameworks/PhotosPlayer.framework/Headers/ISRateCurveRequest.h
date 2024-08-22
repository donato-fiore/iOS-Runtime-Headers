// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISRATECURVEREQUEST_H
#define ISRATECURVEREQUEST_H


#import <Foundation/Foundation.h>

#import "ISAVPlayer.h"

@interface ISRateCurveRequest : NSObject {
    CGFloat _startTime;
    ? _startVideoTime;
    BOOL _cancelled;
    id *_boundaryObserver;
    CGFloat _stepInterval;
    NSInteger _stepIndex;
}


@property (readonly, weak, nonatomic) ISAVPlayer *avPlayer; // ivar: _avPlayer
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) float initialRate; // ivar: _initialRate
@property (readonly, copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (readonly, nonatomic) ? targetTime; // ivar: _targetTime


-(id)initWithTargetTime:(struct ? )arg0 duration:(CGFloat)arg1 initialRate:(float)arg2 avPlayer:(id)arg3 progressHandler:(id)arg4 ;
-(void)_didReachTargetTime;
-(void)_stepDownRate;
-(void)_stopObservingPlayer;
-(void)cancel;
-(void)dealloc;
-(void)start;


@end


#endif