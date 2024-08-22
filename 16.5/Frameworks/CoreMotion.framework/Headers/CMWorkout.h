// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
    NSUInteger fMode;
}


@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL isUserInitiated; // ivar: _isUserInitiated
@property (readonly, nonatomic) NSInteger locationType;
@property (readonly, nonatomic) NSUInteger mode;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)isAvailable;
+(BOOL)supportsSecureCoding;
+(BOOL)workoutIsSupportedForLowPower:(NSInteger)arg0 ;
+(BOOL)workoutIsTypePedestrian:(NSInteger)arg0 ;
+(BOOL)workoutIsTypeRunning:(NSInteger)arg0 ;
+(BOOL)workoutIsTypeWalking:(NSInteger)arg0 ;
+(NSInteger)CMSwimWorkoutLocationFromCMWorkoutLocationType:(NSInteger)arg0 ;
+(NSInteger)CMWorkoutLocationTypeFromCMSwimWorkoutLocation:(NSInteger)arg0 ;
+(NSInteger)CMWorkoutTypeFromCLMotionActivityType:(int)arg0 ;
+(NSInteger)workoutLocationTypeFromCMWorkoutType:(NSInteger)arg0 ;
+(id)workoutLocationName:(NSInteger)arg0 ;
+(id)workoutModeName:(NSUInteger)arg0 ;
+(id)workoutName:(NSInteger)arg0 ;
+(int)CLMotionActivityTypeFromCMWorkoutType:(NSInteger)arg0 ;
-(BOOL)isSameWorkout:(id)arg0 ;
-(id)_initWithSessionId:(id)arg0 type:(NSInteger)arg1 locationType:(NSInteger)arg2 mode:(NSUInteger)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionId:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithSessionId:(id)arg0 type:(NSInteger)arg1 locationType:(NSInteger)arg2 ;
-(id)initWithSessionId:(id)arg0 type:(NSInteger)arg1 locationType:(NSInteger)arg2 mode:(NSUInteger)arg3 ;
-(id)initWithSessionId:(id)arg0 type:(NSInteger)arg1 locationType:(NSInteger)arg2 mode:(NSUInteger)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setWorkoutMode:(NSUInteger)arg0 ;
-(void)setWorkoutType:(NSInteger)arg0 ;


@end


#endif