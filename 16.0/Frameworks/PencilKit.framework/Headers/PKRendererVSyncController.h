// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKRENDERERVSYNCCONTROLLER_H
#define PKRENDERERVSYNCCONTROLLER_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKRendererVSyncController : NSObject {
    NSObject<OS_dispatch_queue> *_vSyncQueue;
    NSObject<OS_dispatch_queue> *_runloopQueue;
    NSHashTable *_rendererControllers;
    *__IOMobileFramebuffer _ioMobileFramebuffer;
}




-(id)init;


@end


#endif