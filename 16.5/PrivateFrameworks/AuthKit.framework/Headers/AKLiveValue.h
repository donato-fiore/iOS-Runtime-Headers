// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKLIVEVALUE_H
#define AKLIVEVALUE_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AKLiveValue : NSObject {
    id *_value;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    id *_syncProducer;
    id *_asyncProducer;
    NSMutableArray *_cleanupBlocks;
}




+(id)liveValueWithAsyncProducer:(id)arg0 ;
+(id)liveValueWithSyncProducer:(id)arg0 ;
-(id)captureCurrentValue;
-(id)init;
-(id)initWithAsyncProducer:(id)arg0 ;
-(id)initWithSyncProducer:(id)arg0 ;
-(id)newTrigger:(SEL)arg0 ;
-(id)newTriggerWithCleanup:(SEL)arg0 ;
-(void)_onqueue_updateValue;
-(void)_setValue:(id)arg0 ;
-(void)_updateValue;
-(void)dealloc;


@end


#endif