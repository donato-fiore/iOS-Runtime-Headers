// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTRAITSSWITCHERLIVEOVERLAYPOLICYSPECIFIER_H
#define SBTRAITSSWITCHERLIVEOVERLAYPOLICYSPECIFIER_H

@class NSString;


#import "SBAbstractTraitsSwitcherPolicySpecifier.h"

@interface SBTraitsSwitcherLiveOverlayPolicySpecifier : SBAbstractTraitsSwitcherPolicySpecifier

@property (nonatomic) NSInteger nonPrimaryResolutionPolicy; // ivar: _nonPrimaryResolutionPolicy
@property (copy, nonatomic) NSString *primaryElementParticipantIdentifier; // ivar: _primaryElementParticipantIdentifier
@property (nonatomic) NSInteger primaryElementResolutionPolicy; // ivar: _primaryElementResolutionPolicy


-(id)_specifierDescription;
-(id)initWithComponentOrder:(id)arg0 arbiter:(id)arg1 ;
-(void)_updateAcquiredParticipantsPolicies:(id)arg0 context:(id)arg1 ;
-(void)_updateParticipant:(id)arg0 withPolicy:(NSInteger)arg1 context:(id)arg2 ;


@end


#endif