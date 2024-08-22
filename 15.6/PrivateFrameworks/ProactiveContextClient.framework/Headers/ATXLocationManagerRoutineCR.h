// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXLOCATIONMANAGERROUTINECR_H
#define ATXLOCATIONMANAGERROUTINECR_H

@class RTRoutineManager;
@protocol ATXLocationManagerRoutine;

#import <Foundation/Foundation.h>


@interface ATXLocationManagerRoutineCR : NSObject <ATXLocationManagerRoutine>

 {
    RTRoutineManager *_routineManager;
}




+(id)closestLOI:(id)arg0 toLocation:(id)arg1 ;
-(NSUInteger)fetchRoutineModeFromLocation:(id)arg0 ;
-(id)init;
-(id)initWithRoutineManager:(id)arg0 ;
-(void)fetchClosestLOIWithinDistance:(CGFloat)arg0 ofLocation:(id)arg1 reply:(id)arg2 ;
-(void)fetchLOILocationOfType:(NSInteger)arg0 reply:(id)arg1 ;
-(void)fetchLOIVisitedDuring:(id)arg0 reply:(id)arg1 ;
-(void)fetchNextPredictedLOIFromLocation:(id)arg0 startDate:(id)arg1 timeInterval:(CGFloat)arg2 requireHighConfidence:(BOOL)arg3 reply:(id)arg4 ;
-(void)fetchPredictedExitDatesFromLocation:(id)arg0 onDate:(id)arg1 requireHighConfidence:(BOOL)arg2 reply:(id)arg3 ;


@end


#endif