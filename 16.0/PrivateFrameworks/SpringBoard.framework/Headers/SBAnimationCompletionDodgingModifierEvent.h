// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBANIMATIONCOMPLETIONDODGINGMODIFIEREVENT_H
#define SBANIMATIONCOMPLETIONDODGINGMODIFIEREVENT_H

@class NSString;


#import "SBDodgingModifierEvent.h"

@interface SBAnimationCompletionDodgingModifierEvent : SBDodgingModifierEvent

@property (readonly, nonatomic) BOOL finished; // ivar: _finished
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL retargeted; // ivar: _retargeted


-(NSUInteger)type;
-(id)description;
-(id)initWithIdentifier:(id)arg0 finished:(BOOL)arg1 retargeted:(BOOL)arg2 ;


@end


#endif