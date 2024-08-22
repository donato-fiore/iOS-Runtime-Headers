// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCASYNCSERIALQUEUE_H
#define FCASYNCSERIALQUEUE_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>


@interface FCAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue; // ivar: _serialOperationQueue
@property (nonatomic) BOOL suspended;
@property (readonly, nonatomic) NSOperationQueue *underlyingOperationQueue;


-(id)init;
-(id)initWithQualityOfService:(NSInteger)arg0 ;
-(id)initWithUnderlyingQueue:(id)arg0 qualityOfService:(NSInteger)arg1 ;
-(void)cancelAllBlocks;
-(void)enqueueBlock:(id)arg0 ;
-(void)enqueueBlockForMainThread:(id)arg0 ;
-(void)enqueueOperation:(id)arg0 ;
-(void)withQualityOfService:(NSInteger)arg0 enqueueBlock:(id)arg1 ;
-(void)withQualityOfService:(NSInteger)arg0 enqueueBlockForMainThread:(id)arg1 ;


@end


#endif