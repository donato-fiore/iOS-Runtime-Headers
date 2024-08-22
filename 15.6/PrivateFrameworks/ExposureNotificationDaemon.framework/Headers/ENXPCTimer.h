// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENXPCTIMER_H
#define ENXPCTIMER_H

@class NSDate, NSString;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface ENXPCTimer : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (copy, nonatomic) id *block; // ivar: _block
@property (nonatomic) NSUInteger cadence; // ivar: _cadence
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) CGFloat gracePeriod; // ivar: _gracePeriod
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) NSInteger priority; // ivar: _priority


-(id)criteria;
-(id)description;
-(id)initWithName:(id)arg0 date:(id)arg1 gracePeriod:(CGFloat)arg2 cadence:(NSUInteger)arg3 priority:(NSInteger)arg4 options:(NSUInteger)arg5 block:(id)arg6 ;
-(id)initWithName:(id)arg0 date:(id)arg1 gracePeriod:(CGFloat)arg2 priority:(NSInteger)arg3 options:(NSUInteger)arg4 block:(id)arg5 ;
-(id)initWithName:(id)arg0 date:(id)arg1 priority:(NSInteger)arg2 options:(NSUInteger)arg3 block:(id)arg4 ;
-(id)initWithName:(id)arg0 delay:(CGFloat)arg1 gracePeriod:(CGFloat)arg2 cadence:(NSUInteger)arg3 priority:(NSInteger)arg4 options:(NSUInteger)arg5 block:(id)arg6 ;
-(id)initWithName:(id)arg0 delay:(CGFloat)arg1 gracePeriod:(CGFloat)arg2 priority:(NSInteger)arg3 options:(NSUInteger)arg4 block:(id)arg5 ;
-(id)initWithName:(id)arg0 timeInterval:(CGFloat)arg1 priority:(NSInteger)arg2 options:(NSUInteger)arg3 block:(id)arg4 ;
-(void)handleActivity;


@end


#endif