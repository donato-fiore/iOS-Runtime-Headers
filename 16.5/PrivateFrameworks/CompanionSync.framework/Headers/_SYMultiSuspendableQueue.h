// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SYMULTISUSPENDABLEQUEUE_H
#define _SYMULTISUSPENDABLEQUEUE_H

@class NSString, NSMutableArray, PBCodable;
@protocol SYStateLoggable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _SYMultiSuspendableQueue : NSObject <SYStateLoggable>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSUInteger _stateHandle;
    uint8_t _resumeCount;
    NSString *_logDescriptor;
    NSMutableArray *_latestSuspendBacktraces;
    NSMutableArray *_latestResumeBacktraces;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int qosClass;
@property (readonly, nonatomic) PBCodable *stateForLogging;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;


-(id)init;
-(id)initWithName:(id)arg0 qosClass:(unsigned int)arg1 serial:(BOOL)arg2 ;
-(id)initWithName:(id)arg0 qosClass:(unsigned int)arg1 serial:(BOOL)arg2 target:(id)arg3 ;
-(void)async:(id)arg0 ;
-(void)barrierAsync:(id)arg0 ;
-(void)barrierSync:(id)arg0 ;
-(void)dealloc;
-(void)resume;
-(void)suspend;
-(void)sync:(id)arg0 ;


@end


#endif