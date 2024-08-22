// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPERFORMTRANSITIONSWITCHEREVENTRESPONSE_H
#define SBPERFORMTRANSITIONSWITCHEREVENTRESPONSE_H



#import "SBSwitcherModifierEventResponse.h"
#import "SBSwitcherTransitionRequest.h"

@interface SBPerformTransitionSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic, getter=isGestureInitiated) BOOL gestureInitiated; // ivar: _gestureInitiated
@property (readonly, nonatomic) SBSwitcherTransitionRequest *transitionRequest; // ivar: _transitionRequest


-(NSInteger)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithTransitionRequest:(id)arg0 gestureInitiated:(BOOL)arg1 ;


@end


#endif