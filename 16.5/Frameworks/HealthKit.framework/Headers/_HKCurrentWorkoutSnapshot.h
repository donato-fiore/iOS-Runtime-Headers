// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKCURRENTWORKOUTSNAPSHOT_H
#define _HKCURRENTWORKOUTSNAPSHOT_H

@class NSString, NSDate, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKWorkoutConfiguration.h"

@interface _HKCurrentWorkoutSnapshot : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly, copy, nonatomic) NSDate *builderStartDate; // ivar: _builderStartDate
@property (readonly, nonatomic) HKWorkoutConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (readonly, nonatomic) NSInteger internalState; // ivar: _internalState
@property (readonly, nonatomic) BOOL isBuilderPaused; // ivar: _isBuilderPaused
@property (readonly, nonatomic) BOOL isFirstPartyWorkout;
@property (readonly, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) NSInteger sessionState; // ivar: _sessionState
@property (readonly, nonatomic) NSDate *snapshotDate; // ivar: _snapshotDate


+(BOOL)supportsSecureCoding;
-(CGFloat)elapsedTimeAtDate:(id)arg0 ;
-(NSInteger)state;
-(id)_initWithSessionIdentifier:(id)arg0 workoutConfiguration:(id)arg1 sessionServerState:(NSInteger)arg2 isBuilderPaused:(BOOL)arg3 applicationIdentifier:(id)arg4 elapsedTime:(CGFloat)arg5 snapshotDate:(id)arg6 builderStartDate:(id)arg7 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif