// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERITEMSAMPLEBUFFEROUTPUTINTERNAL_H
#define AVPLAYERITEMSAMPLEBUFFEROUTPUTINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVWeakReferencingDelegateStorage.h"

@interface AVPlayerItemSampleBufferOutputInternal : NSObject {
    AVWeakReference *weakReference;
    NSObject<OS_dispatch_queue> *stateQueue;
    AVWeakReference *weakReferenceToPlayerItemTrack;
    AVWeakReferencingDelegateStorage *delegateStorage;
    *OpaqueFigPlaybackItem figPlaybackItem;
    int trackID;
    int extractionID;
}






@end


#endif