// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKSYNCSERIALIZER_H
#define _DKSYNCSERIALIZER_H

@class NSOperationQueue, NSOperation;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _DKSyncSerializer : NSObject {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_underlyingQueue;
    NSOperation *_previousOperation;
}




+(id)operationQueue;
+(id)underlyingQueue;
+(void)addDependentOperation:(id)arg0 ;
+(void)addDependentOperationWithBlock:(id)arg0 ;
+(void)addOperation:(id)arg0 ;
+(void)addOperationWithBlock:(id)arg0 ;
+(void)addOperations:(id)arg0 waitUntilFinished:(BOOL)arg1 ;
+(void)performAfter:(CGFloat)arg0 block:(id)arg1 ;
+(void)performAsyncBlock:(id)arg0 ;
+(void)performSyncBlock:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;


@end


#endif