// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(void)dealloc;
-(void)getPromptsNeededForWorkoutType:(NSInteger)arg0 handler:(id)arg1 ;
-(void)setSuggestedStopTimeout:(CGFloat)arg0 ;
-(void)startWorkout:(id)arg0 ;
-(void)stopWorkout:(id)arg0 ;
-(void)triggerWorkoutLocationUpdateForTesting:(NSInteger)arg0 ;
-(void)userDismissedWorkoutAlert;


@end


#endif