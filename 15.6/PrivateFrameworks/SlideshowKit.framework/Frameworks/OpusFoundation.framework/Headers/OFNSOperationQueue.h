// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OFNSOPERATIONQUEUE_H
#define OFNSOPERATIONQUEUE_H

@class NSOperationQueue, NSPointerArray, NSMutableIndexSet;
@protocol OS_dispatch_queue;



@interface OFNSOperationQueue : NSOperationQueue {
    NSObject<OS_dispatch_queue> *_operationsLookupTableQueue;
    NSPointerArray *_operationsLookupTable;
    NSMutableIndexSet *_operationsLookupTableFreeIndices;
}




-(NSUInteger)addOperation:(id)arg0 withPriority:(NSInteger)arg1 ;
-(id)_operationLookupObjectForKey:(NSUInteger)arg0 ;
-(id)init;
-(void)_setOperationLookupObject:(id)arg0 forKey:(NSUInteger)arg1 ;
-(void)_setupOperationsLookupTable;
-(void)addOperation:(id)arg0 context:(id)arg1 identifier:(id)arg2 queuePriority:(NSInteger)arg3 ;
-(void)cancelAllOperationsWithContext:(id)arg0 ;
-(void)cancelAllOperationsWithContext:(id)arg0 andIdentifier:(id)arg1 ;
-(void)cancelAllOperationsWithIdentifier:(id)arg0 ;
-(void)cancelSlideshowOperationWithID:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif