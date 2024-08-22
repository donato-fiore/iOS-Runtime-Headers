// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBABSTRACTTRAITSSWITCHERPOLICYSPECIFIER_H
#define SBABSTRACTTRAITSSWITCHERPOLICYSPECIFIER_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBTraitsPipelineBlockBasedPolicySpecifier.h"

@interface SBAbstractTraitsSwitcherPolicySpecifier : NSObject <BSInvalidatable>

 {
    SBTraitsPipelineBlockBasedPolicySpecifier *_blockBasedPolicySpecifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_blockBasedPolicySpecifier;
-(id)_specifierDescription;
-(id)initWithComponentOrder:(id)arg0 arbiter:(id)arg1 ;
-(void)_updateAcquiredParticipantsPolicies:(id)arg0 context:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif