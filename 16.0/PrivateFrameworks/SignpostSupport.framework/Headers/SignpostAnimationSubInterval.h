// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTANIMATIONSUBINTERVAL_H
#define SIGNPOSTANIMATIONSUBINTERVAL_H

@class NSString, NSMutableArray;
@protocol SignpostSupportTimeInterval;

#import <Foundation/Foundation.h>


@interface SignpostAnimationSubInterval : NSObject <SignpostSupportTimeInterval>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger endMachContinuousTime; // ivar: _endMachContinuousTime
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *parentAnimationIntervals; // ivar: _parentAnimationIntervals
@property (readonly, nonatomic) NSUInteger startMachContinuousTime; // ivar: _startMachContinuousTime
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timebaseRatio; // ivar: _timebaseRatio


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)durationMs;
-(CGFloat)endMs;
-(CGFloat)endSeconds;
-(CGFloat)startMs;
-(CGFloat)startSeconds;
-(NSUInteger)durationMachContinuousTime;
-(NSUInteger)durationNanoseconds;
-(NSUInteger)endNanoseconds;
-(NSUInteger)startNanoseconds;
-(float)durationSeconds;
-(id)initWithInterval:(id)arg0 ;
-(id)initWithStartMCT:(NSUInteger)arg0 endMCT:(NSUInteger)arg1 timebaseRatio:(CGFloat)arg2 ;


@end


#endif