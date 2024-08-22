// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATTRANSITION_H
#define CATTRANSITION_H


#import <Foundation/Foundation.h>

#import "CATState.h"

@interface CATTransition : NSObject

@property (readonly, nonatomic) SEL action; // ivar: _action
@property (readonly, weak, nonatomic) CATState *state; // ivar: _state


+(id)new;
-(id)description;
-(id)init;
-(id)initWithState:(id)arg0 action:(SEL)arg1 ;


@end


#endif