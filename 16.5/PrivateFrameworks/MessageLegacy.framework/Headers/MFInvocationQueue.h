// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFINVOCATIONQUEUE_H
#define MFINVOCATIONQUEUE_H

@class NSConditionLock, NSMutableArray, NSMutableSet, NSString;
@protocol MFDiagnosticsGenerator, MFContentProtectionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MFInvocationQueue : NSObject <MFDiagnosticsGenerator, MFContentProtectionObserver>

 {
    NSConditionLock *_lock;
    NSMutableArray *_items;
    NSUInteger _maxThreads;
    NSMutableSet *_threadOverrides;
    BOOL _isForeground;
    NSObject<OS_dispatch_queue> *_keybagQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger invocationCount;
@property (nonatomic) NSUInteger maxThreadCount;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger threadCount; // ivar: _numThreads
@property (nonatomic) int threadPriorityTrigger; // ivar: _threadPriorityTrigger
@property (nonatomic) CGFloat threadRecycleTimeout; // ivar: _threadRecycleTimeout


+(NSUInteger)totalInvocationCount;
+(id)sharedInvocationQueue;
+(void)flushAllInvocationQueues;
-(id)copyDiagnosticInformation;
-(id)init;
-(id)initWithMaxThreadCount:(NSUInteger)arg0 ;
-(void)_adjustThreadPrioritiesIsForeground:(BOOL)arg0 ;
-(void)_drainQueue:(id)arg0 ;
-(void)_processInvocation:(id)arg0 ;
-(void)addInvocation:(id)arg0 ;
-(void)applicationWillResume;
-(void)applicationWillSuspend;
-(void)contentProtectionStateChanged:(int)arg0 previousState:(int)arg1 ;
-(void)dealloc;
-(void)didCancel:(id)arg0 ;
-(void)removeAllItems;


@end


#endif