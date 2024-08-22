// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNBINARYSEMAPHORELOCK_H
#define CNBINARYSEMAPHORELOCK_H

@class NSString;
@protocol NSLocking, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface CNBinarySemaphoreLock : NSObject <NSLocking>

 {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}


@property (copy) NSString *name; // ivar: _name


-(id)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)lock;
-(void)unlock;


@end


#endif