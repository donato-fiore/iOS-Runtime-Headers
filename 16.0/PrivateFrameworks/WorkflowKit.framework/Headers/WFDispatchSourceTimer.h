// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDISPATCHSOURCETIMER_H
#define WFDISPATCHSOURCETIMER_H

@class RBSAssertion;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface WFDispatchSourceTimer : NSObject

@property (retain, nonatomic) RBSAssertion *assertion; // ivar: _assertion
@property (nonatomic) BOOL preventSuspension; // ivar: _preventSuspension
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *source; // ivar: _source


-(BOOL)isCancelled;
-(id)initWithInterval:(CGFloat)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(id)initWithInterval:(CGFloat)arg0 repeatInterval:(CGFloat)arg1 queue:(id)arg2 handler:(id)arg3 ;
-(id)initWithInterval:(CGFloat)arg0 repeatIntervalInt:(NSUInteger)arg1 queue:(id)arg2 handler:(id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(void)start;


@end


#endif