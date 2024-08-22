// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDSQUEUEPROXY_H
#define PDSQUEUEPROXY_H

@class NSProxy;
@protocol OS_dispatch_queue;



@interface PDSQueueProxy : NSProxy

@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) id *target; // ivar: _target


-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithTarget:(id)arg0 queue:(id)arg1 mode:(NSUInteger)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif