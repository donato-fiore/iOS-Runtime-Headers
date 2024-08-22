// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERITEMTRACKINTERNAL_H
#define AVPLAYERITEMTRACKINTERNAL_H

@class NSString, NSDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVAsset.h"

@interface AVPlayerItemTrackInternal : NSObject {
    AVWeakReference *weakReferenceToPlayerItem;
    *OpaqueFigPlaybackItem figPlaybackItem;
    BOOL figPlaybackItemIsReadyForInspection;
    AVAsset *asset;
    int trackID;
    NSString *videoFieldMode;
    NSDictionary *loudnessInfo;
    NSDictionary *videoEnhancementFilterOptions;
    BOOL enabled;
    BOOL enabledWasSet;
    BOOL disableColorMatching;
    BOOL disableColorMatchingWasSet;
    NSInteger activeHapticChannelIndex;
    BOOL activeHapticChannelIndexWasSet;
    float hapticVolume;
    BOOL hapticVolumeWasSet;
    NSMutableArray *sampleBufferOutputs;
}






@end


#endif