// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSSTATETRANSITION_H
#define VSSTATETRANSITION_H


#import <Foundation/Foundation.h>

#import "VSOptional.h"

@interface VSStateTransition : NSObject

@property (retain, nonatomic) VSOptional *nextState; // ivar: _nextState
@property (retain, nonatomic) VSOptional *previousState; // ivar: _previousState
@property (retain, nonatomic) VSOptional *triggeringEvent; // ivar: _triggeringEvent


-(id)init;


@end


#endif