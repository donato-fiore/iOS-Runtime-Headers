// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMWORKOUTMANAGER_H
#define CMWORKOUTMANAGER_H

@protocol CMWorkoutManagerDelegate;

#import <Foundation/Foundation.h>

#import "CMWorkoutManagerInternal.h"

@interface CMWorkoutManager : NSObject

@property (readonly, nonatomic) CMWorkoutManagerInternal *_internal; // ivar: _internal
@property (nonatomic) NSObject<CMWorkoutManagerDelegate> *delegate;


+(BOOL)isAvailable;
-(NSUInteger)supportedMetricsForWorkoutType:(NSInteger)arg0 ;
-(id)init;
-(void)beginWorkoutSession:(id)arg0 withWorkout:(id)arg1 enableWorkoutChangeDetection:(BOOL)arg2 ;
-(void)dealloc;
-(void)endWorkoutSession:(id)arg0 ;
-(void)getPromptsNeededForWorkoutType:(NSInteger)arg0 handler:(id)arg1 ;
-(void)pauseWorkout:(id)arg0 ;
-(void)resumeWorkout:(id)arg0 ;
-(void)setCurrentWorkoutType:(id)arg0 isManualTransition:(BOOL)arg1 ;
-(void)setMode:(NSUInteger)arg0 forWorkout:(id)arg1 ;
-(void)setSuggestedStopTimeout:(CGFloat)arg0 ;
-(void)startWorkout:(id)arg0 ;
-(void)stopWorkout:(id)arg0 ;
-(void)triggerWorkoutLocationUpdateForTesting:(NSInteger)arg0 ;
-(void)userDismissedWorkoutAlert;


@end


#endif