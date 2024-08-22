// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTRAITSCOVERSHEETFOLLOWSSECUREAPPORIENTATIONPOLICYSPECIFIER_H
#define SBTRAITSCOVERSHEETFOLLOWSSECUREAPPORIENTATIONPOLICYSPECIFIER_H

@class NSNumber, NSString;
@protocol SBFTraitsPreferencesStageResolutionPolicySpecifying;


#import "SBTraitsOrientationStageComponent.h"

@interface SBTraitsCoverSheetFollowsSecureAppOrientationPolicySpecifier : SBTraitsOrientationStageComponent <SBFTraitsPreferencesStageResolutionPolicySpecifying>



@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)updateStageParticipantsResolutionPolicies:(id)arg0 context:(id)arg1 ;


@end


#endif