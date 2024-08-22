// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCASYNCSERIALQUEUE_H
#define RCASYNCSERIALQUEUE_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>


@interface RCAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue; // ivar: _serialOperationQueue
@property (nonatomic) BOOL suspended;


-(id)init;
-(id)initWithQualityOfService:(NSInteger)arg0 ;
-(void)cancelAllBlocks;
-(void)enqueueBlock:(id)arg0 ;
-(void)enqueueBlockForMainThread:(id)arg0 ;
-(void)enqueueOperation:(id)arg0 ;
-(void)withQualityOfService:(NSInteger)arg0 enqueueBlockForMainThread:(id)arg1 ;


@end


#endif