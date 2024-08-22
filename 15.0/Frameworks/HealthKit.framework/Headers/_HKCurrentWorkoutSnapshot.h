// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKCURRENTWORKOUTSNAPSHOT_H
#define _HKCURRENTWORKOUTSNAPSHOT_H

@class NSString, NSUUID, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKWorkoutConfiguration.h"

@interface _HKCurrentWorkoutSnapshot : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly, nonatomic) HKWorkoutConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (readonly, nonatomic) NSInteger internalState; // ivar: _internalState
@property (readonly, nonatomic) BOOL isFirstPartyWorkout;
@property (readonly, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) NSInteger sessionState; // ivar: _sessionState
@property (readonly, nonatomic) NSDate *snapshotDate; // ivar: _snapshotDate


+(BOOL)supportsSecureCoding;
-(CGFloat)elapsedTimeAtDate:(id)arg0 ;
-(NSInteger)state;
-(id)_initWithSessionIdentifier:(id)arg0 workoutConfiguration:(id)arg1 sessionServerState:(NSInteger)arg2 applicationIdentifier:(id)arg3 elapsedTime:(CGFloat)arg4 snapshotDate:(id)arg5 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif