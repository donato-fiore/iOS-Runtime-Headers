// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CFXCAMERASTREAMBUFFERQUEUE_H
#define CFXCAMERASTREAMBUFFERQUEUE_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CFXCameraStreamBufferQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (nonatomic) NSUInteger maxCapacity; // ivar: _maxCapacity
@property (retain, nonatomic) NSMutableArray *outputBuffers; // ivar: _outputBuffers


-(BOOL)enqueue:(id)arg0 ;
-(CGFloat)headBufferTimestamp;
-(NSUInteger)count;
-(id)dequeue;
-(id)initWithMaxCapacity:(NSUInteger)arg0 ;


@end


#endif