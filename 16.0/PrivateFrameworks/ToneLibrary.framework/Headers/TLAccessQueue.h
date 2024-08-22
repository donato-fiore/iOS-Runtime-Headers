// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLACCESSQUEUE_H
#define TLACCESSQUEUE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TLAccessQueue : NSObject {
    NSString *_threadLocalStorageKey;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (readonly, nonatomic) NSString *label; // ivar: _label


-(id)initWithLabel:(id)arg0 appendUUIDToLabel:(BOOL)arg1 ;
-(void)_performSynchronousBlockInSerialQueue:(id)arg0 ;
-(void)assertNotRunningInAccessQueue;
-(void)performAsynchronousBlock:(id)arg0 ;
-(void)performSynchronousBlock:(id)arg0 ;


@end


#endif