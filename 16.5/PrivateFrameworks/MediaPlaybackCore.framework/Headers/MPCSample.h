// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCSAMPLE_H
#define MPCSAMPLE_H


#import <Foundation/Foundation.h>


@interface MPCSample : NSObject

@property (readonly, nonatomic) CGFloat level; // ivar: _level
@property (readonly, nonatomic) int number; // ivar: _number
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) int thermalLevel; // ivar: _thermalLevel
@property (readonly, nonatomic) CGFloat time; // ivar: _time


-(id)initWithLevel:(CGFloat)arg0 time:(CGFloat)arg1 state:(NSInteger)arg2 ;


@end


#endif