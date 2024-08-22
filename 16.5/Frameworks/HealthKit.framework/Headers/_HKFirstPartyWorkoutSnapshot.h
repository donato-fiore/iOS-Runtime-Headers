// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKFIRSTPARTYWORKOUTSNAPSHOT_H
#define _HKFIRSTPARTYWORKOUTSNAPSHOT_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface _HKFirstPartyWorkoutSnapshot : NSObject {
    CGFloat _elapsedTime;
    NSDate *_snapshotDate;
}


@property (readonly, nonatomic) NSUInteger activityType; // ivar: _activityType
@property (readonly, nonatomic) NSInteger state; // ivar: _state


+(id)firstPartyWorkoutSnapshotWithCurrentWorkoutSnapshot:(id)arg0 ;
-(CGFloat)durationForDate:(id)arg0 ;
-(id)_initWithState:(NSInteger)arg0 activityType:(NSUInteger)arg1 elapsedTime:(CGFloat)arg2 snapshotDate:(id)arg3 ;
-(id)description;


@end


#endif