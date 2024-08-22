// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMWORKOUT_H
#define CMWORKOUT_H

@class NSUUID, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMWorkout : NSObject <NSSecureCoding, NSCopying>

 {
    NSUUID *fSessionId;
    NSInteger fType;
    NSInteger fLocationType;
    NSDate *fStartDate;
    NSDate *fEndDate;
    BOOL fIsUserInitiated;
}


@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL isUserInitiated; // ivar: _isUserInitiated
@property (readonly, nonatomic) NSInteger locationType;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)isAvailable;
+(BOOL)supportsSecureCoding;
+(BOOL)workoutIsTypePedestrian:(NSInteger)arg0 ;
+(BOOL)workoutIsTypeRunning:(NSInteger)arg0 ;
+(BOOL)workoutIsTypeWalking:(NSInteger)arg0 ;
+(NSInteger)CMSwimWorkoutLocationFromCMWorkoutLocationType:(NSInteger)arg0 ;
+(NSInteger)CMWorkoutLocationTypeFromCMSwimWorkoutLocation:(NSInteger)arg0 ;
+(NSInteger)CMWorkoutTypeFromCLMotionActivityType:(int)arg0 ;
+(NSInteger)workoutLocationTypeFromCMWorkoutType:(NSInteger)arg0 ;
+(id)workoutLocationName:(NSInteger)arg0 ;
+(id)workoutName:(NSInteger)arg0 ;
+(int)CLMotionActivityTypeFromCMWorkoutType:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionId:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithSessionId:(id)arg0 type:(NSInteger)arg1 locationType:(NSInteger)arg2 ;
-(id)initWithSessionId:(id)arg0 type:(NSInteger)arg1 locationType:(NSInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setWorkoutType:(NSInteger)arg0 ;


@end


#endif