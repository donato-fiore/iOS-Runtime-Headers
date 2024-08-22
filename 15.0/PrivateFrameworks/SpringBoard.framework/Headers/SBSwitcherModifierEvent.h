// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSWITCHERMODIFIEREVENT_H
#define SBSWITCHERMODIFIEREVENT_H



#import "SBChainableModifierEvent.h"

@interface SBSwitcherModifierEvent : SBChainableModifierEvent

@property (readonly, nonatomic) NSInteger type;


-(BOOL)isGestureEvent;
-(BOOL)isTransitionEvent;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)loggingCategory;


@end


#endif