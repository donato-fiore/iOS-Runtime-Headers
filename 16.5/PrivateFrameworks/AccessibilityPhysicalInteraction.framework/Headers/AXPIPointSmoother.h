// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXPIPOINTSMOOTHER_H
#define AXPIPOINTSMOOTHER_H

@class NSMutableArray;
@protocol AXPIPointSmootherClientDelegate;

#import <Foundation/Foundation.h>


@interface AXPIPointSmoother : NSObject

@property (nonatomic) NSUInteger bufferSize; // ivar: _bufferSize
@property (weak, nonatomic) NSObject<AXPIPointSmootherClientDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger framesPerSecond; // ivar: _framesPerSecond
@property (nonatomic) NSUInteger lastTimePointAdded; // ivar: _lastTimePointAdded
@property (nonatomic) NSUInteger lowFPSDetectedCount; // ivar: _lowFPSDetectedCount
@property (readonly, nonatomic) CGPoint point;
@property (retain, nonatomic) NSMutableArray *pointBuffer; // ivar: _pointBuffer
@property (nonatomic) BOOL shouldOffsetBufferPoints; // ivar: _shouldOffsetBufferPoints
@property (nonatomic) CGFloat smoothingMaxDelta; // ivar: _smoothingMaxDelta
@property (nonatomic) BOOL useWeightedMovingAverage; // ivar: _useWeightedMovingAverage
@property (nonatomic) CGFloat xOffset; // ivar: _xOffset
@property (nonatomic) CGFloat xOrder; // ivar: _xOrder
@property (nonatomic) CGFloat yOffset; // ivar: _yOffset
@property (nonatomic) CGFloat yOrder; // ivar: _yOrder


+(struct CGPoint )_averagePointsInArray:(id)arg0 ;
-(id)init;
-(struct CGSize )_deltaForPoint:(struct CGPoint )arg0 ;
-(void)addPoint:(struct CGPoint )arg0 ;
-(void)removeAllPoints;
-(void)updateFPS;


@end


#endif