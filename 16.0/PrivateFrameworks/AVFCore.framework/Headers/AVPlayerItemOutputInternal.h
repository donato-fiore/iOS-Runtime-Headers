// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYERITEMOUTPUTINTERNAL_H
#define AVPLAYERITEMOUTPUTINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVPlayerItemOutputInternal : NSObject {
    AVWeakReference *weakReference;
    NSObject<OS_dispatch_queue> *timebaseReadWriteQueue;
    *OpaqueCMTimebase timebase;
}






@end


#endif