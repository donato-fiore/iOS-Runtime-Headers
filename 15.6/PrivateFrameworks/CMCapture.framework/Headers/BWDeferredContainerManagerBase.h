// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWDEFERREDCONTAINERMANAGERBASE_H
#define BWDEFERREDCONTAINERMANAGERBASE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BWDeferredContainerManagerBase : NSObject {
    _opaque_pthread_rwlock_t _lock;
    NSObject<OS_dispatch_queue> *_timerQueue;
}




+(void)initialize;
-(id)_containerURLForApplicationID:(id)arg0 captureRequestIdentifier:(id)arg1 exists:(*BOOL)arg2 isDirectory:(*BOOL)arg3 ;
-(id)initWithQueuePriority:(unsigned int)arg0 ;
-(id)manifestForApplicationID:(id)arg0 captureRequestIdentifier:(id)arg1 err:(*int)arg2 ;
-(id)manifestsForApplicationID:(id)arg0 err:(*int)arg1 ;
-(int)deleteContainerForApplicationID:(id)arg0 captureRequestIdentifier:(id)arg1 ;
-(void)dealloc;


@end


#endif