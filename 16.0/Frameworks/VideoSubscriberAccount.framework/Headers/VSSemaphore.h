// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSSEMAPHORE_H
#define VSSEMAPHORE_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface VSSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}




-(id)init;
-(void)signal;
-(void)wait;


@end


#endif