// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCICONTEXTSHANDLER_H
#define VNCICONTEXTSHANDLER_H

@class NSMutableArray, NSMutableSet;
@protocol MTLDevice, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface VNCIContextsHandler : NSObject {
    id<MTLDevice> *_metalDevice;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    os_unfair_lock_s _contextsLock;
    NSMutableArray *_freeContexts;
    NSMutableSet *_inUseContexts;
}






@end


#endif