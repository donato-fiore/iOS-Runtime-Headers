// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCKASYNCSERIALQUEUE_H
#define SCKASYNCSERIALQUEUE_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>


@interface SCKAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue; // ivar: _serialOperationQueue
@property (getter=isSuspended) BOOL suspended;


-(id)init;
-(void)enqueueBlock:(id)arg0 ;
-(void)waitUntilEmpty;


@end


#endif