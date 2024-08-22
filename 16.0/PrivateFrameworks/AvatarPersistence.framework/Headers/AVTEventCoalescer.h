// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTEVENTCOALESCER_H
#define AVTEVENTCOALESCER_H

@class NSString;
@protocol AVTEventCoalescer, AVTUILogger, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVTEventCoalescer : NSObject <AVTEventCoalescer>



@property (readonly, nonatomic) CGFloat delay; // ivar: _delay
@property (nonatomic) BOOL eventDeliveryScheduled; // ivar: _eventDeliveryScheduled
@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (copy, nonatomic) NSString *eventLabel; // ivar: _eventLabel
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithDelay:(CGFloat)arg0 queue:(id)arg1 logger:(id)arg2 ;
-(void)eventDidOccur:(id)arg0 ;
-(void)registerEventForCoalescingWithLabel:(id)arg0 handler:(id)arg1 ;


@end


#endif