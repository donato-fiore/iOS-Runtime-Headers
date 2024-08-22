// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCWASYNCSERIALQUEUE_H
#define SCWASYNCSERIALQUEUE_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>


@interface SCWAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue; // ivar: _serialOperationQueue
@property (getter=isSuspended) BOOL suspended;


-(id)initWithQualityOfService:(NSInteger)arg0 ;
-(void)enqueueBlock:(id)arg0 ;
-(void)waitUntilEmpty;


@end


#endif