// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTRANSIENTLYVISIBLESLIDEOVERTONGUESWITCHERMODIFIER_H
#define SBTRANSIENTLYVISIBLESLIDEOVERTONGUESWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"

@interface SBTransientlyVisibleSlideOverTongueSwitcherModifier : SBSwitcherModifier {
    NSUInteger _rightEdgeHintState;
    NSUInteger _edgeProtectEdge;
}


@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode


+(NSUInteger)slideOverTongueTransientlyVisibleModeForEvent:(id)arg0 ;
-(NSUInteger)slideOverTongueDirection;
-(NSUInteger)slideOverTongueState;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleSlideOverEdgeProtectTongueEvent:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithMode:(NSUInteger)arg0 ;


@end


#endif