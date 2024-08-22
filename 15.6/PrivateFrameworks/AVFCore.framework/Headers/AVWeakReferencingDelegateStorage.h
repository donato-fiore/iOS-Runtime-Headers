// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVWEAKREFERENCINGDELEGATESTORAGE_H
#define AVWEAKREFERENCINGDELEGATESTORAGE_H

@class NSString;
@protocol AVDelegateStorage, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVWeakReferencingDelegateStorage : NSObject <AVDelegateStorage>

 {
    NSObject<OS_dispatch_queue> *_delegateReadWriteQueue;
    *OpaqueConcurrentAccessDetector _detectorForWeakReferenceToDelegate;
    AVWeakReference *_weakReferenceToDelegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)init;
-(void)_collectUncollectables;
-(void)dealloc;
-(void)getRetainedDelegate:(*id)arg0 retainedDelegateQueue:(*id)arg1 ;
-(void)invokeDelegateCallbackWithBlock:(id)arg0 ;
// -(void)invokeDelegateCallbackWithBlock:(id)arg0 synchronouslyIfDelegateQueueIsQueue:(unk)arg1  ;


@end


#endif