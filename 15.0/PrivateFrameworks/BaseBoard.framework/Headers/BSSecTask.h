// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSSECTASK_H
#define BSSECTASK_H


#import <Foundation/Foundation.h>


@interface BSSecTask : NSObject {
    *__SecTask _lock_taskRef;
    os_unfair_lock_s _lock;
}




-(void)dealloc;


@end


#endif