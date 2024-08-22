// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMODESCORINGSESSION_H
#define ATXMODESCORINGSESSION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ATXModeEntityAffinityVector.h"

@interface ATXModeScoringSession : NSObject

@property (readonly, nonatomic) NSArray *appLaunches; // ivar: _appLaunches
@property (readonly, nonatomic) CGFloat endTimestamp; // ivar: _endTimestamp
@property (retain, nonatomic) ATXModeEntityAffinityVector *sessionAffinityVector; // ivar: _sessionAffinityVector
@property (readonly, nonatomic) CGFloat startTimestamp; // ivar: _startTimestamp


+(id)coalesceSessions:(id)arg0 ;
-(BOOL)hasModeWithinRank:(NSUInteger)arg0 rank:(NSUInteger)arg1 ;
-(BOOL)isLabeled;
-(BOOL)isStronglyCorrelatedWithTopMode;
-(CGFloat)affinityForMode:(NSUInteger)arg0 ;
-(CGFloat)duration;
-(CGFloat)numScoredAppLaunches;
-(CGFloat)secondsUntilOtherSession:(id)arg0 ;
-(NSUInteger)topMode;
-(id)_initFromStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 appLaunches:(id)arg2 sessionAffinityVector:(id)arg3 ;
-(id)_weightForLaunch:(id)arg0 ;
-(id)initFromStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 ;
-(void)_populateAffinity;
-(void)debug_prettyPrintSession:(BOOL)arg0 ;
-(void)populateAppLaunches:(id)arg0 ;


@end


#endif