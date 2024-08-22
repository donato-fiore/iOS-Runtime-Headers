// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMXPCTIMER_H
#define FMXPCTIMER_H

@class NSDate, NSString;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface FMXPCTimer : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSObject<OS_xpc_object> *duetActivitySchedulerData; // ivar: _duetActivitySchedulerData
@property (nonatomic) CGFloat gracePeriod; // ivar: _gracePeriod
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) NSInteger priority; // ivar: _priority


-(id)activityHandler:(SEL)arg0 ;
-(id)criteria;
-(id)initWithName:(id)arg0 date:(id)arg1 gracePeriod:(CGFloat)arg2 priority:(NSInteger)arg3 options:(NSUInteger)arg4 block:(id)arg5 ;
-(id)initWithName:(id)arg0 date:(id)arg1 priority:(NSInteger)arg2 options:(NSUInteger)arg3 block:(id)arg4 ;
-(id)initWithName:(id)arg0 timeInterval:(CGFloat)arg1 gracePeriod:(CGFloat)arg2 priority:(NSInteger)arg3 options:(NSUInteger)arg4 block:(id)arg5 ;
-(id)initWithName:(id)arg0 timeInterval:(CGFloat)arg1 priority:(NSInteger)arg2 options:(NSUInteger)arg3 block:(id)arg4 ;
-(void)handleActivity;
-(void)schedule;


@end


#endif