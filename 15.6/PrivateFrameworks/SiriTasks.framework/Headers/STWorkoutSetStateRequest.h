// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STWORKOUTSETSTATEREQUEST_H
#define STWORKOUTSETSTATEREQUEST_H

@class AFSiriRequest;



@interface STWorkoutSetStateRequest : AFSiriRequest {
    NSInteger _workoutState;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)workoutState;
-(id)_initWithState:(NSInteger)arg0 ;
-(id)createResponse;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif