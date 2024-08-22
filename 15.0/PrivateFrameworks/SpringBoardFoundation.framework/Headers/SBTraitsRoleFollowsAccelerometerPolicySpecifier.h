// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTRAITSROLEFOLLOWSACCELEROMETERPOLICYSPECIFIER_H
#define SBTRAITSROLEFOLLOWSACCELEROMETERPOLICYSPECIFIER_H

@class NSString, NSArray, NSNumber;
@protocol SBFTraitsPreferencesStageResolutionPolicySpecifying;


#import "SBFTraitsOrientationStageComponent.h"

@interface SBTraitsRoleFollowsAccelerometerPolicySpecifier : SBFTraitsOrientationStageComponent <SBFTraitsPreferencesStageResolutionPolicySpecifying>

 {
    NSString *_targetRole;
}


@property (copy, nonatomic) NSArray *accelerometerStateTypes; // ivar: _accelerometerStateTypes
@property (nonatomic) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *targetRole;


-(id)init;
-(void)updateStageParticipantsResolutionPolicies:(id)arg0 context:(id)arg1 ;


@end


#endif