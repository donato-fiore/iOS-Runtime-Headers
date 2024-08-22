// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSFLUIDPROGRESSSTATE_H
#define WBSFLUIDPROGRESSSTATE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "WBSFluidProgressAnimation.h"

@interface WBSFluidProgressState : NSObject {
    CGFloat _webKitProgressValue;
    CGFloat _linearFunctionM;
    CGFloat _linearFunctionB;
    CGFloat _startTimeForFluidProgress;
    CGFloat _lastTimeProgressValueWasUpdated;
    NSInteger _fluidProgressAnimationPhase;
    CGFloat _previousDestinationPosition;
    CGFloat _animationDuration;
    CGFloat _minProgressPosition;
}


@property (nonatomic) NSInteger fluidProgressAnimationPhase;
@property (nonatomic) NSInteger fluidProgressType; // ivar: _fluidProgressType
@property (readonly, nonatomic) CGFloat fluidProgressValue; // ivar: _fluidProgressValue
@property (nonatomic) BOOL hasCanceledLoad; // ivar: _hasCanceledLoad
@property (nonatomic) BOOL hasCommittedLoad; // ivar: _hasCommittedLoad
@property (nonatomic) BOOL hasCompletedLoad; // ivar: _hasCompletedLoad
@property (readonly, nonatomic) BOOL isFluidProgressStalled;
@property (copy, nonatomic) NSString *loadURL; // ivar: _loadURL
@property (nonatomic) CGFloat minProgressPosition;
@property (readonly, nonatomic) WBSFluidProgressAnimation *nextFluidProgressAnimation; // ivar: _nextFluidProgressAnimation
@property (nonatomic) BOOL shouldAnimateUsingInitialPosition; // ivar: _shouldAnimateUsingInitialPosition


+(CGFloat)_estimatedLoadTimeRemainingFromProgressValue:(CGFloat)arg0 ;
-(CGFloat)_adjustProgressPosition:(CGFloat)arg0 ;
-(CGFloat)_animationDuration;
-(CGFloat)_estimatedLoadTimeRemaining;
-(CGFloat)_fractionCompleteAtElapsedTime:(CGFloat)arg0 ;
-(CGFloat)_nextProgressPosition:(CGFloat)arg0 ;
-(CGFloat)secondsElapsedSinceLoadBegan;
-(id)description;
-(id)initWithType:(NSInteger)arg0 ;
-(void)_updateLinearFunction;
-(void)setWebKitProgressValue:(CGFloat)arg0 ;
-(void)updateFluidProgressValue;
-(void)updateNextFluidProgressAnimation;


@end


#endif