// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNWIDEQUEUE_H
#define CALNWIDEQUEUE_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface CalNWideQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}




-(id)initWithSerialQueue:(id)arg0 andWidth:(NSUInteger)arg1 ;
-(void)executeBlock:(id)arg0 ;


@end


#endif