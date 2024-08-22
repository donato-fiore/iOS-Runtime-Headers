// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMXPCACTIVITYCRITERIA_H
#define FMXPCACTIVITYCRITERIA_H


#import <Foundation/Foundation.h>


@interface FMXPCActivityCriteria : NSObject

@property (nonatomic) NSInteger delay; // ivar: _delay
@property (nonatomic) NSInteger gracePeriod; // ivar: _gracePeriod
@property (nonatomic) NSInteger interval; // ivar: _interval
@property (nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (nonatomic) BOOL repeating; // ivar: _repeating


+(NSUInteger)_optionsFromXPCObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_priorityFromString:(char *)arg0 ;
-(id)description;
-(id)initWithPriority:(NSInteger)arg0 repeating:(BOOL)arg1 delay:(NSInteger)arg2 gracePeriod:(NSInteger)arg3 interval:(NSInteger)arg4 options:(NSUInteger)arg5 ;
-(id)initWithXPCObject:(id)arg0 ;
-(id)xpcDictionary;


@end


#endif