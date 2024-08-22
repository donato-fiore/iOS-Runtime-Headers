// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSLOGSYSTEMENUMERATOR_H
#define OSLOGSYSTEMENUMERATOR_H

@class OSLogEventStream;
@protocol OS_dispatch_semaphore;


#import "OSLogEnumerator.h"
#import "OSLogEntry.h"

@interface OSLogSystemEnumerator : OSLogEnumerator {
    OSLogEventStream *_stream;
    OSLogEntry *_next;
    BOOL _done;
    NSObject<OS_dispatch_semaphore> *_pushDone;
    NSObject<OS_dispatch_semaphore> *_handlerDone;
}




-(id)initWithEventStream:(id)arg0 options:(NSUInteger)arg1 position:(id)arg2 ;
-(id)nextObject;
-(void)_handleEventProxy:(id)arg0 ;
-(void)_handleInvalidation;
-(void)dealloc;


@end


#endif