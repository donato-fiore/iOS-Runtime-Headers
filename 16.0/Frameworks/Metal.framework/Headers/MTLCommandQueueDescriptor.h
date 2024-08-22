// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLCOMMANDQUEUEDESCRIPTOR_H
#define MTLCOMMANDQUEUEDESCRIPTOR_H

@protocol NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MTLCommandQueueDescriptor : NSObject <NSCopying>



@property (nonatomic) NSObject<OS_dispatch_queue> *commitQueue;
@property (nonatomic) BOOL commitSynchronously;
@property (nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic) NSUInteger devicePartition;
@property (nonatomic) BOOL disableAsyncCompletionDispatch;
@property (nonatomic) BOOL disableCrossQueueHazardTracking;
@property (nonatomic) NSUInteger maxCommandBufferCount;
@property (nonatomic) NSUInteger qosLevel;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)commandQueueDescriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif