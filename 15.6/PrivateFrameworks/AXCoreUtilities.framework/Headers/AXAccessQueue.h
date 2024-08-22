// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXACCESSQUEUE_H
#define AXACCESSQUEUE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXAccessQueue : NSObject

@property (readonly, nonatomic) BOOL behavesAsMainQueue;
@property (readonly, nonatomic) BOOL behavesWithoutErrorReporting;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // ivar: _concurrentQueue
@property (readonly, copy, nonatomic) NSString *label;
@property (nonatomic) NSUInteger specialBehaviors; // ivar: _specialBehaviors
@property (copy, nonatomic) NSString *threadLocalStorageKey; // ivar: _threadLocalStorageKey


+(id)backgroundAccessQueue;
+(id)mainAccessQueue;
-(BOOL)canOnlyReadInCurrentExecutionThread;
-(BOOL)canReadInCurrentExecutionThread;
-(BOOL)canWriteInCurrentExecutionThread;
-(NSUInteger)_accessQueueContextInCurrentExecutionThread;
-(id)_initWithLabel:(id)arg0 appendUUIDToLabel:(BOOL)arg1 specialBehaviors:(NSUInteger)arg2 ;
-(id)description;
-(id)init;
-(id)initWithLabel:(id)arg0 appendUUIDToLabel:(BOOL)arg1 ;
-(id)initWithParentClass:(Class)arg0 description:(id)arg1 appendUUIDToLabel:(BOOL)arg2 ;
// -(void)_performBlock:(id)arg0 withDispatchFunction:(unk)arg1 synchronously:(*unk)arg2 accessQueueContext:(BOOL)arg3  ;
-(void)afterDelay:(CGFloat)arg0 processReadingBlock:(id)arg1 ;
-(void)afterDelay:(CGFloat)arg0 processWritingBlock:(id)arg1 ;
-(void)performAsynchronousReadingBlock:(id)arg0 ;
-(void)performAsynchronousWritingBlock:(id)arg0 ;
-(void)performSynchronousReadingBlock:(id)arg0 ;
-(void)performSynchronousWritingBlock:(id)arg0 ;


@end


#endif