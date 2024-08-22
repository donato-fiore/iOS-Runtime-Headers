// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETTRACKINTERNAL_H
#define AVASSETTRACKINTERNAL_H


#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVAssetTrackInspector.h"

@interface AVAssetTrackInternal : NSObject {
    AVWeakReference *weakReferenceToSelf;
    AVAssetTrackInspector *trackInspector;
    AVWeakReference *assetWeakReference;
    AVWeakReference *figAssetTrackNotificationListenerWeakReference;
    *OpaqueFigAssetTrack figAssetTrackNotificationSource;
}






@end


#endif