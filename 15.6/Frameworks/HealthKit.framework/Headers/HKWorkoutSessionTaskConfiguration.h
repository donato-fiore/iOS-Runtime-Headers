// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKWORKOUTSESSIONTASKCONFIGURATION_H
#define HKWORKOUTSESSIONTASKCONFIGURATION_H

@class NSUUID;


#import "HKTaskConfiguration.h"
#import "HKWorkoutConfiguration.h"

@interface HKWorkoutSessionTaskConfiguration : HKTaskConfiguration

@property (nonatomic) BOOL requiresCoreLocationAssertion; // ivar: _requiresCoreLocationAssertion
@property (nonatomic) BOOL requiresRecovery; // ivar: _requiresRecovery
@property (copy, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (nonatomic) BOOL shouldStopPreviousSession; // ivar: _shouldStopPreviousSession
@property (nonatomic) BOOL supports3rdPartyAOT; // ivar: _supports3rdPartyAOT
@property (nonatomic) BOOL supportsAppRelaunchForRecovery; // ivar: _supportsAppRelaunchForRecovery
@property (copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration; // ivar: _workoutConfiguration


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif