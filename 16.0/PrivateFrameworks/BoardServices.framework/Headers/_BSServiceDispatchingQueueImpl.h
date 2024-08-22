// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BSSERVICEDISPATCHINGQUEUEIMPL_H
#define _BSSERVICEDISPATCHINGQUEUEIMPL_H

@class NSString;
@protocol BSServiceDispatchingQueue, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _BSServiceDispatchingQueueImpl : NSObject <BSServiceDispatchingQueue>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)backingQueueIfExists;
-(void)assertBarrierOnQueue;
-(void)performAsync:(id)arg0 ;
// -(void)performAsync:(id)arg0 withHandoff:(unk)arg1  ;


@end


#endif