// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPUITHROTTLE_H
#define CPUITHROTTLE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface CPUIThrottle : NSObject

@property (readonly, nonatomic) NSUInteger attempts; // ivar: _attempts
@property (readonly, nonatomic) CGFloat base; // ivar: _base
@property (readonly, nonatomic) CGFloat factor; // ivar: _factor
@property (readonly, nonatomic) CGFloat max; // ivar: _max
@property (readonly, nonatomic) NSDate *throttleDate; // ivar: _throttleDate
@property (readonly, nonatomic, getter=isThrottled) BOOL throttled;
@property (readonly, nonatomic) NSDate *unthrottleDate; // ivar: _unthrottleDate


-(BOOL)incrementAttempts;
-(id)initWithBase:(CGFloat)arg0 ;
-(id)initWithBase:(CGFloat)arg0 factor:(CGFloat)arg1 max:(CGFloat)arg2 ;
-(void)unthrottle;


@end


#endif