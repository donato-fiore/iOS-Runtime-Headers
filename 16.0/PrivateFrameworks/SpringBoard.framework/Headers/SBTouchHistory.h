// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTOUCHHISTORY_H
#define SBTOUCHHISTORY_H

@class NSString;
@protocol SBGestureRecognizerTouchHistoryProviding;

#import <Foundation/Foundation.h>


@interface SBTouchHistory : NSObject <SBGestureRecognizerTouchHistoryProviding>

 {
    NSUInteger _depth;
    NSUInteger _count;
    NSUInteger _start;
    *TouchHistory _history;
    CGFloat _peakSpeed;
    CGFloat _lastTouchLatency;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)averageTouchPathAngleOverTimeDuration:(CGFloat)arg0 ;
-(CGFloat)peakSpeed;
-(id)init;
-(id)initWithDepth:(NSUInteger)arg0 ;
-(int)touchHistoryDepthForTimeDuration:(CGFloat)arg0 forComputingDerivative:(BOOL)arg1 ;
-(struct CGPoint )averageTouchVelocityOverTimeDuration:(CGFloat)arg0 ;
-(void)conformsToSBGestureRecognizerTouchHistoryProviding;
-(void)dealloc;
-(void)reset;
-(void)updateWithLocation:(struct CGPoint )arg0 timestamp:(CGFloat)arg1 ;
-(void)updateWithLocation:(struct CGPoint )arg0 timestamp:(CGFloat)arg1 touchLatency:(CGFloat)arg2 ;


@end


#endif