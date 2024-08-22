// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFTRAITSARBITERUPDATEORIENTATIONRESOLUTIONPOLICYSPECIFIER_H
#define SBFTRAITSARBITERUPDATEORIENTATIONRESOLUTIONPOLICYSPECIFIER_H

@class NSNumber, NSString, NSArray;
@protocol SBFTraitsPreferencesStageResolutionPolicySpecifying;

#import <Foundation/Foundation.h>

#import "SBFTraitsSettingsActuationContext.h"

@interface SBFTraitsArbiterUpdateOrientationResolutionPolicySpecifier : NSObject <SBFTraitsPreferencesStageResolutionPolicySpecifying>



@property (retain, nonatomic) SBFTraitsSettingsActuationContext *actuationContext; // ivar: _actuationContext
@property (nonatomic) NSNumber *componentOrder; // ivar: componentOrder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceResolution; // ivar: _forceResolution
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSArray *participantsUniqueIdentifiers; // ivar: _participantsUniqueIdentifiers
@property (readonly) Class superclass;


-(NSInteger)preferencesType;
-(void)updateStageParticipantsResolutionPolicies:(id)arg0 context:(id)arg1 ;


@end


#endif