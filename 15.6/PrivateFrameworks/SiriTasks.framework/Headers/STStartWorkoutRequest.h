// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSTARTWORKOUTREQUEST_H
#define STSTARTWORKOUTREQUEST_H

@class AFSiriRequest, HKQuantity;



@interface STStartWorkoutRequest : AFSiriRequest {
    NSInteger _activityType;
    NSInteger _locationType;
    NSInteger _goalType;
    NSInteger _userMode;
    HKQuantity *_goal;
    BOOL _isOpenGoal;
    BOOL _skipActivitySetup;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isOpenGoal;
-(BOOL)skipActivitySetup;
-(NSInteger)activityType;
-(NSInteger)goalType;
-(NSInteger)locationType;
-(NSInteger)userMode;
-(id)_initWithType:(NSInteger)arg0 location:(NSInteger)arg1 goal:(id)arg2 goalType:(NSInteger)arg3 userMode:(NSInteger)arg4 isOpenGoal:(BOOL)arg5 skipActivitySetup:(BOOL)arg6 ;
-(id)createResponse;
-(id)initWithCoder:(id)arg0 ;
-(id)workoutGoal;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif