// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFTRAITSORIENTATIONDEFAULTRESOLUTIONPOLICYSPECIFIER_H
#define SBFTRAITSORIENTATIONDEFAULTRESOLUTIONPOLICYSPECIFIER_H

@class NSNumber, NSString;
@protocol SBFTraitsPreferencesStageResolutionPolicySpecifying;


#import "SBFTraitsOrientationStageComponent.h"

@interface SBFTraitsOrientationDefaultResolutionPolicySpecifier : SBFTraitsOrientationStageComponent <SBFTraitsPreferencesStageResolutionPolicySpecifying>



@property (nonatomic) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)updateStageParticipantsResolutionPolicies:(id)arg0 context:(id)arg1 ;


@end


#endif