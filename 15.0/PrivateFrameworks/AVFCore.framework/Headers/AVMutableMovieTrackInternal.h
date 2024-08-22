// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVMUTABLEMOVIETRACKINTERNAL_H
#define AVMUTABLEMOVIETRACKINTERNAL_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVMutableMovieTrackInternal : NSObject {
    *OpaqueFigMutableMovie figMutableMovie;
    int trackID;
    *OpaqueFigAssetTrack figAssetTrack;
    NSObject<OS_dispatch_semaphore> *metadataWaitingSemaphore;
    AVWeakReference *figAssetTrackNotificationListenerWeakReference;
    *OpaqueFigAssetTrack figAssetTrackNotificationSource;
}






@end


#endif