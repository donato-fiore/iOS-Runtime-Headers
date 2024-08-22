// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMINVOCATIONQUEUE_H
#define IMINVOCATIONQUEUE_H

@class NSMutableArray, Protocol, NSProtocolChecker;

#import <Foundation/Foundation.h>


@interface IMInvocationQueue : NSObject

@property (readonly, nonatomic) NSUInteger count;
@property id *delegate; // ivar: _delegate
@property (nonatomic) CGFloat dequeueRate; // ivar: _dequeueRate
@property (readonly, nonatomic) BOOL holdQueue; // ivar: _holdQueue
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, retain, nonatomic) NSMutableArray *options; // ivar: _options
@property (retain, nonatomic) Protocol *protocol;
@property (readonly, retain, nonatomic) NSProtocolChecker *protocolChecker; // ivar: _protocolChecker
@property (readonly, retain, nonatomic) NSMutableArray *queue; // ivar: _queue
@property id *target; // ivar: _target


-(BOOL)_acceptsOptions:(NSUInteger)arg0 ;
-(BOOL)_insertInvocation:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)_invokeInvocation:(id)arg0 ;
-(BOOL)_replaceSimilarInvocation:(id)arg0 ;
-(NSInteger)_enqueueInvocation:(id)arg0 options:(NSUInteger)arg1 ;
-(NSUInteger)_optionsForInvocation:(id)arg0 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)peek;
-(int)_maxQueueLimitSize;
-(int)_numberOfLimitedMessagesInQueue;
-(void)_checkQueue;
-(void)_holdQueueNotification:(id)arg0 ;
-(void)_releaseQueueNotification:(id)arg0 ;
-(void)_stepQueueNotification:(id)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)invokeAll;
-(void)removeAllInvocations;


@end


#endif