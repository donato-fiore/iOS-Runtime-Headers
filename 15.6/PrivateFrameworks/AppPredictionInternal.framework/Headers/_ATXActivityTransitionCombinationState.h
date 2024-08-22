// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ATXACTIVITYTRANSITIONCOMBINATIONSTATE_H
#define _ATXACTIVITYTRANSITIONCOMBINATIONSTATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _ATXActivityTransitionCombinationState : NSObject <NSCopying>



@property (nonatomic) NSUInteger appLaunchActivity; // ivar: _appLaunchActivity
@property (nonatomic) CGFloat appLaunchConfidence; // ivar: _appLaunchConfidence
@property (nonatomic) NSUInteger computedModeActivity; // ivar: _computedModeActivity
@property (nonatomic) CGFloat computedModeConfidence; // ivar: _computedModeConfidence
@property (nonatomic) NSUInteger heuristicActivity; // ivar: _heuristicActivity
@property (nonatomic) CGFloat heuristicConfidence; // ivar: _heuristicConfidence
@property (readonly, nonatomic) CGFloat scaledAppLaunchConfidence;
@property (readonly, nonatomic) CGFloat scaledComputedModeConfidence;
@property (readonly, nonatomic) CGFloat scaledHeuristicConfidence;
@property (readonly, nonatomic) CGFloat scaledTimeBasedConfidence;
@property (nonatomic) NSUInteger timeBasedActivity; // ivar: _timeBasedActivity
@property (nonatomic) CGFloat timeBasedConfidence; // ivar: _timeBasedConfidence
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(BOOL)hasSameTopActivityAndConfidenceAsOther:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)endTransitionWithTimestamp:(CGFloat)arg0 ;
-(id)init;
-(id)newStateFromTransition:(id)arg0 ;
-(id)startTransition;
-(id)topActivityWithConfidence;


@end


#endif