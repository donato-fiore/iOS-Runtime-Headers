// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSINDEXINGQUEUE_H
#define CSINDEXINGQUEUE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CSIndexingQueue : NSObject

@property (retain) NSObject<OS_dispatch_queue> *coalescingQueue; // ivar: _coalescingQueue
@property (retain) NSObject<OS_dispatch_source> *coalescingTimer; // ivar: _coalescingTimer
@property CGFloat idleTime; // ivar: _idleTime
@property CGFloat idleTimeLeeway; // ivar: _idleTimeLeeway
@property NSUInteger maximumBatchSize; // ivar: _maximumBatchSize
@property NSInteger mode; // ivar: _mode
@property (copy) id *notifyBlock; // ivar: _notifyBlock
@property (retain) NSMutableDictionary *queuedItems; // ivar: _queuedItems


-(id)initWithIdleTime:(CGFloat)arg0 idleTimeLeeway:(CGFloat)arg1 maximumBatchSize:(NSUInteger)arg2 mode:(NSInteger)arg3 notifyBlock:(id)arg4 ;
-(id)initWithMode:(NSInteger)arg0 notifyBlock:(id)arg1 ;
-(void)_applicationWillResign:(id)arg0 ;
-(void)_flushWithAppResigned:(BOOL)arg0 forced:(BOOL)arg1 ;
-(void)_queueItems:(id)arg0 ;
-(void)dealloc;
-(void)flush;
-(void)queueItem:(id)arg0 ;
-(void)queueItems:(id)arg0 ;


@end


#endif