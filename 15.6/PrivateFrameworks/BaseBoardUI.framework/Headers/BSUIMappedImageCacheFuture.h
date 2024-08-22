// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSUIMAPPEDIMAGECACHEFUTURE_H
#define BSUIMAPPEDIMAGECACHEFUTURE_H

@class BSAtomicSignal, NSThread, UIImage;

#import <Foundation/Foundation.h>


@interface BSUIMappedImageCacheFuture : NSObject {
    os_unfair_lock_s _lock;
    BSAtomicSignal *_submitted;
    NSThread *_submissionThread;
    id *_lock_workBlock;
    BOOL _lock_workCompletionWasCalled;
    UIImage *_postlock_cachedImage;
}




-(id)init;
-(void)dealloc;


@end


#endif