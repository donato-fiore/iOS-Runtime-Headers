// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2SERIALIZEDOPERATIONQUEUE_H
#define HAP2SERIALIZEDOPERATIONQUEUE_H

@class NSOperation, NSString, NSOperationQueue;


#import "HAP2LoggingObject.h"
#import "HAP2Lock.h"

@interface HAP2SerializedOperationQueue : HAP2LoggingObject

@property (weak, nonatomic) NSOperation *lastOperation; // ivar: _lastOperation
@property (readonly, nonatomic) HAP2Lock *lock; // ivar: _lock
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSOperationQueue *queue; // ivar: _queue


+(id)commonOperationQueue;
-(id)_swapLastOperation:(id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 operationQueue:(id)arg1 ;
-(void)addBlock:(id)arg0 ;
-(void)addConcurrentBlock:(id)arg0 ;
-(void)addConcurrentOperation:(id)arg0 ;
-(void)addOperation:(id)arg0 ;
-(void)assertCurrentQueue;


@end


#endif