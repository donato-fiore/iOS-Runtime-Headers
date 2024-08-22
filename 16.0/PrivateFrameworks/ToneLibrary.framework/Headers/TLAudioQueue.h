// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLAUDIOQUEUE_H
#define TLAUDIOQUEUE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TLAudioQueue : NSObject {
    NSString *_assumeRunningOnAudioQueueThreadLocalStorageKey;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_underlyingSerialQueue;


+(id)sharedAudioQueue;
-(BOOL)_shouldAssumeRunningOnAudioQueue;
-(id)_init;
-(void)assertNotRunningOnAudioQueue;
-(void)assertRunningOnAudioQueue;
-(void)performSynchronousTaskWithBlock:(id)arg0 ;
-(void)performSynchronousTaskWithOptions:(NSUInteger)arg0 block:(id)arg1 ;
-(void)performTaskWithBlock:(id)arg0 ;


@end


#endif