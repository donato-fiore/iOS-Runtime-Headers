// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTRAITSROLEAFOLLOWSROLEBPOLICYSPECIFIER_H
#define SBTRAITSROLEAFOLLOWSROLEBPOLICYSPECIFIER_H

@class NSString, NSNumber;
@protocol SBFTraitsPreferencesStageResolutionPolicySpecifying;


#import "SBFTraitsOrientationStageComponent.h"

@interface SBTraitsRoleAFollowsRoleBPolicySpecifier : SBFTraitsOrientationStageComponent <SBFTraitsPreferencesStageResolutionPolicySpecifying>

 {
    BOOL _force;
    BOOL _animate;
    NSString *_roleA;
    NSString *_roleB;
}


@property (readonly, nonatomic) BOOL animate;
@property (nonatomic) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL force;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *roleA;
@property (readonly, nonatomic) NSString *roleB;
@property (readonly) Class superclass;


-(id)init;
-(void)updateStageParticipantsResolutionPolicies:(id)arg0 context:(id)arg1 ;


@end


#endif