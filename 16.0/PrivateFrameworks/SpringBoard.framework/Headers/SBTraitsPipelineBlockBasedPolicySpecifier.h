// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTRAITSPIPELINEBLOCKBASEDPOLICYSPECIFIER_H
#define SBTRAITSPIPELINEBLOCKBASEDPOLICYSPECIFIER_H

@class NSNumber, SBFTraitsArbiter, NSString;
@protocol BSInvalidatable, SBFTraitsPreferencesStageResolutionPolicySpecifying;

#import <Foundation/Foundation.h>


@interface SBTraitsPipelineBlockBasedPolicySpecifier : NSObject <BSInvalidatable, SBFTraitsPreferencesStageResolutionPolicySpecifying>

 {
    BOOL _isValid;
    NSNumber *_componentOrder;
}


@property (readonly, weak, nonatomic) SBFTraitsArbiter *arbiter; // ivar: _arbiter
@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) id *specifierBlock; // ivar: _specifierBlock
@property (copy, nonatomic) NSString *specifierDescription; // ivar: _specifierDescription
@property (readonly) Class superclass;


-(NSInteger)preferencesType;
// -(id)initWithPolicySpecifierBlock:(id)arg0 specifierDescription:(unk)arg1 componentOrder:(id)arg2 arbiter:(id)arg3  ;
-(void)dealloc;
-(void)invalidate;
-(void)updateStageParticipantsResolutionPolicies:(id)arg0 context:(id)arg1 ;


@end


#endif