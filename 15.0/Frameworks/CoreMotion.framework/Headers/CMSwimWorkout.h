// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMSWIMWORKOUT_H
#define CMSWIMWORKOUT_H



#import "CMWorkout.h"

@interface CMSwimWorkout : CMWorkout {
    NSInteger fLocation;
    CGFloat fPoolLength;
}


@property (readonly, nonatomic) NSInteger location;
@property (readonly, nonatomic) CGFloat poolLength;


+(BOOL)isAvailable;
+(BOOL)supportsSecureCoding;
+(id)swimLocationName:(NSInteger)arg0 ;
+(id)swimWorkoutInstance:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionId:(id)arg0 location:(NSInteger)arg1 poolLength:(CGFloat)arg2 ;
-(id)initWithSessionId:(id)arg0 locationType:(NSInteger)arg1 poolLength:(CGFloat)arg2 ;
-(id)initWithSessionId:(id)arg0 locationType:(NSInteger)arg1 poolLength:(CGFloat)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif