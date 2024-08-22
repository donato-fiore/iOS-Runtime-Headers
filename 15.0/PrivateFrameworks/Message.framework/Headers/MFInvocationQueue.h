// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFINVOCATIONQUEUE_H
#define MFINVOCATIONQUEUE_H

@class NSConditionLock, NSMutableArray, NSString;
@protocol MFDiagnosticsGenerator;

#import <Foundation/Foundation.h>


@interface MFInvocationQueue : NSObject <MFDiagnosticsGenerator>

 {
    NSConditionLock *_lock;
    NSMutableArray *_items;
    NSUInteger _maxThreads;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger invocationCount;
@property (nonatomic) NSUInteger maxThreadCount;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger threadCount; // ivar: _numThreads
@property (nonatomic) NSUInteger threadPriorityTrigger; // ivar: _threadPriorityTrigger
@property (nonatomic) CGFloat threadRecycleTimeout; // ivar: _threadRecycleTimeout


+(id)sharedInvocationQueue;
+(void)flushAllInvocationQueues;
-(id)copyDiagnosticInformation;
-(id)init;
-(id)initWithMaxThreadCount:(NSUInteger)arg0 ;
-(void)_drainQueue:(id)arg0 ;
-(void)addInvocation:(id)arg0 ;
-(void)dealloc;
-(void)didCancel:(id)arg0 ;
-(void)removeAllItems;


@end


#endif