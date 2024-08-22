// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HULOCKICONSTATETRANSITION_H
#define HULOCKICONSTATETRANSITION_H


#import <Foundation/Foundation.h>


@interface HULockIconStateTransition : NSObject

@property (readonly, nonatomic) NSUInteger fromState; // ivar: _fromState
@property (readonly, nonatomic) NSUInteger toState; // ivar: _toState


+(id)transitionFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 ;


@end


#endif