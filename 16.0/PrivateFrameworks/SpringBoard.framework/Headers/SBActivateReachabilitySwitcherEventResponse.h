// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBACTIVATEREACHABILITYSWITCHEREVENTRESPONSE_H
#define SBACTIVATEREACHABILITYSWITCHEREVENTRESPONSE_H



#import "SBSwitcherModifierEventResponse.h"

@interface SBActivateReachabilitySwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBReachabilityActivationContext reachabilityActivationContext; // ivar: _reachabilityActivationContext


-(NSInteger)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithReachabilityContext:(struct SBReachabilityActivationContext )arg0 ;


@end


#endif