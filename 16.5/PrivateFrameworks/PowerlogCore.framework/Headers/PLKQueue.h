// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLKQUEUE_H
#define PLKQUEUE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLKQueue : NSObject

@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property int fileDescriptor; // ivar: _fileDescriptor
@property int kQueue; // ivar: _kQueue
@property (copy, nonatomic) id *kQueueBlock; // ivar: _kQueueBlock
@property *__CFFileDescriptor kqueueDescriptorRef; // ivar: _kqueueDescriptorRef
@property *__CFRunLoopSource kqueueDescriptorSource; // ivar: _kqueueDescriptorSource
@property (copy) NSString *path; // ivar: _path


-(id)initWithPath:(id)arg0 withDispatchQueue:(id)arg1 withBlock:(id)arg2 ;


@end


#endif