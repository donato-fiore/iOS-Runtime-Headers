// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETDOWNLOADSESSIONINTERNAL_H
#define AVASSETDOWNLOADSESSIONINTERNAL_H

@class NSError, NSArray, NSURL, NSNumber;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVWeakReferencingDelegateStorage.h"
#import "AVURLAsset.h"

@interface AVAssetDownloadSessionInternal : NSObject {
    AVWeakReference *weakReference;
    *OpaqueFigPlayer player;
    *OpaqueFigPlaybackItem playbackItem;
    *OpaqueFigAsset figAsset;
    NSInteger assetTypeLoadingStatus;
    NSInteger status;
    BOOL didStartLoadingMetadata;
    NSError *error;
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *stateQueue;
    NSArray *mediaSelections;
    NSInteger priority;
    NSURL *URL;
    NSURL *destinationURL;
    NSUInteger downloadToken;
    NSNumber *cachePrimingDownloadTokenNum;
    AVURLAsset *asset;
    *CMBaseObject assetDownloader;
    NSObject<OS_dispatch_source> *fileDownloadProgressTimer;
}






@end


#endif