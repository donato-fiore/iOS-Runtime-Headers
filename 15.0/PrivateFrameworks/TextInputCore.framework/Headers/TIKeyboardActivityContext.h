// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYBOARDACTIVITYCONTEXT_H
#define TIKEYBOARDACTIVITYCONTEXT_H


#import <Foundation/Foundation.h>


@interface TIKeyboardActivityContext : NSObject

@property (nonatomic) NSUInteger excessMemoryInBytes; // ivar: _excessMemoryInBytes
@property (nonatomic) NSUInteger fromState; // ivar: _fromState
@property (nonatomic) NSUInteger toState; // ivar: _toState


+(id)contextFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 ;


@end


#endif