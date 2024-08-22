// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPLAYERITEMINTERNAL_H
#define AVPLAYERITEMINTERNAL_H

@class NSURL, NSArray, NSMutableArray, NSMutableDictionary, NSError, NSDictionary, NSString, NSDate;
@protocol OS_dispatch_queue, AVPlayerItemDelegate, NSObject><NSCopying, AVLoggingIdentifier;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVAsset.h"
#import "AVAudioMix.h"
#import "AVPlayerItemInterstitialEventCollector.h"
#import "AVMediaSelection.h"
#import "AVPlayerPlaybackCoordinator.h"
#import "AVPlayerItem.h"
#import "AVPlayerConnection.h"
#import "AVVideoComposition.h"
#import "AVCustomVideoCompositorSession.h"

@interface AVPlayerItemInternal : NSObject {
    NSURL *URL;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVWeakReference *weakReference;
    NSObject<OS_dispatch_queue> *figConfigurationQueue;
    NSObject<OS_dispatch_queue> *figPlaybackItemAccessorQueue;
    NSObject<OS_dispatch_queue> *figPlaybackItemSetterQueue;
    NSObject<OS_dispatch_queue> *seekQueue;
    *OpaqueFigSimpleMutex seekIDMutex;
    *OpaqueVTPixelBufferAttributesMediator pixelBufferAttributeMediator;
    *OpaqueCMTimebase proxyUnfoldedTimebase;
    *OpaqueCMTimebase proxyFoldedTimebase;
    NSArray *automaticallyLoadedAssetKeys;
    BOOL wasInitializedWithURL;
    AVAsset *asset;
    *OpaqueFigPlaybackItem figPlaybackItem;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    NSArray *cachedTracks;
    NSArray *tracks;
    NSMutableArray *syncLayers;
    NSArray *itemOutputs;
    NSMutableArray *itemVideoOutputs;
    NSMutableDictionary *itemLegibleOutputsForKeys;
    NSMutableDictionary *itemMetadataOutputsForKeys;
    BOOL suppressesVideoLayers;
    *OpaqueCMTimebase foldedTimebase;
    *OpaqueCMTimebase unfoldedFigTimebase;
    BOOL didBecomeReadyForInspectionOfTracks;
    BOOL didBecomeReadyForInspectionOfPresentationSize;
    BOOL didBecomeReadyForInspectionOfDuration;
    BOOL figAssetDidBecomeReadyForInspectionOfMediaSelectionOptions;
    BOOL didBecomeReadyForInspectionOfRecommendedTimeOffsetFromLive;
    AVAsset *assetWithFigPlaybackItem;
    NSArray *trackIDsForAssetWithFigPlaybackItem;
    BOOL needTimedMetadataNotification;
    BOOL didBecomeReadyForBasicInspection;
    id<AVPlayerItemDelegate> *delegate;
    AVAudioMix *audioMix;
    NSInteger status;
    NSError *error;
    ? forwardPlaybackEndTime;
    ? reversePlaybackEndTime;
    ? timeToPauseBuffering;
    ? timeToPausePlayback;
    ? advanceTimeForOverlappedPlayback;
    BOOL advanceTimeForOverlappedPlaybackWasSet;
    BOOL preservesTimeOffsetFromLive;
    ? configuredTimeOffsetFromLive;
    ? recommendedTimeOffsetFromLive;
    ? duration;
    BOOL seekingWaitsForVideoCompositionRendering;
    NSArray *textStyleRules;
    NSArray *textHighlightArray;
    *__CFString initialFigTimePitchAlgorithm;
    BOOL canUseNetworkResourcesForLiveStreamingWhilePaused;
    ? maximumForwardBufferDuration;
    ? maximumTrailingBufferDuration;
    CGFloat preferredPeakBitRate;
    CGFloat preferredPeakBitRateForExpensiveNetworks;
    int startsOnFirstEligibleVariant;
    NSArray *itemCollectors;
    NSMutableArray *itemMetadataCollectors;
    AVPlayerItemInterstitialEventCollector *interstitialEventCollector;
    unsigned int RTCReportingFlags;
    NSDictionary *gaplessInfo;
    float soundCheckVolumeNormalization;
    float volumeAdjustment;
    NSDictionary *loudnessInfo;
    *opaqueMTAudioProcessingTap audioProcessingTap;
    BOOL initialLimitReadAhead;
    NSUInteger restrictions;
    NSString *mediaKind;
    BOOL reversesMoreVideoFramesInMemory;
    BOOL reversesMoreVideoFramesInMemoryWasSet;
    BOOL aggressivelyCachesVideoFrames;
    BOOL aggressivelyCachesVideoFramesWasSet;
    BOOL decodesAllFramesDuringOrdinaryPlayback;
    BOOL decodesAllFramesDuringOrdinaryPlaybackWasSet;
    BOOL initialContinuesPlayingDuringPrerollForSeek;
    BOOL initialContinuesPlayingDuringPrerollForRateChange;
    BOOL usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
    BOOL usesIFrameOnlyPlaybackForHighRateScaledEdits;
    ? minimumIntervalForIFrameOnlyPlayback;
    BOOL minimumIntervalForIFrameOnlyPlaybackWasSet;
    float speedThresholdForIFrameOnlyPlayback;
    BOOL speedThresholdForIFrameOnlyPlaybackWasSet;
    NSDate *initialDate;
    NSDate *initialEstimatedDate;
    BOOL requiresAccessLog;
    BOOL suppressesAudioOnlyVariants;
    BOOL prefersOfflinePlayableVariants;
    NSUInteger variantPreferences;
    CGFloat preferredMaximumAudioSampleRate;
    NSArray *imageQueueInterpolationCurve;
    BOOL imageQueueInterpolationCurveWasSet;
    BOOL blendsVideoFrames;
    BOOL blendsVideoFramesWasSet;
    BOOL appliesPerFrameHDRDisplayMetadata;
    BOOL appliesPerFrameHDRDisplayMetadataWasSet;
    NSString *videoApertureMode;
    BOOL usesMinimalLatencyForVideoCompositionRendering;
    BOOL initialAlwaysMonitorsPlayability;
    NSInteger initialPlaybackLikelyToKeepUpTrigger;
    BOOL savesDownloadedDataToDiskWhenDone;
    BOOL networkUsuallyExceedsMaxBitRate;
    BOOL allowProgressiveSwitchUp;
    BOOL allowProgressiveStartup;
    BOOL allowProgressiveResume;
    CGSize IFramePrefetchTargetDimensions;
    id<NSObject><NSCopying> *AVKitData;
    BOOL playHapticTracks;
    CGSize preferredMaximumResolution;
    CGSize preferredMaximumResolutionForExpensiveNetworks;
    CGSize preferredMinimumResolution;
    BOOL canPlayFastForward;
    BOOL canPlayFastReverse;
    BOOL canPlayReverse;
    BOOL canPlaySlowReverse;
    BOOL canPlaySlowForward;
    BOOL canStepForward;
    BOOL canStepBackward;
    CGSize presentationSize;
    BOOL playbackBufferEmpty;
    BOOL playbackBufferFull;
    BOOL playbackLikelyToKeepUp;
    BOOL restrictsAutomaticMediaSelectionToAvailableOfflineOptions;
    BOOL nonForcedSubtitlesEnabled;
    BOOL hasEnabledVideo;
    BOOL hasVideo;
    BOOL hasEnabledAudio;
    BOOL hasEnqueuedVideoFrame;
    BOOL externalProtectionRequested;
    BOOL automaticallyHandlesInterstitialEvents;
    NSArray *seekableTimeRanges;
    CGFloat seekableTimeRangesLastModifiedTime;
    NSArray *loadedTimeRanges;
    ? loopTimeRange;
    id<AVLoggingIdentifier> *loggingIdentifier;
    AVMediaSelection *currentMediaSelection;
    NSString *videoEnhancementMode;
    BOOL isRenderingSpatialAudio;
    AVPlayerPlaybackCoordinator *playerPlaybackCoordinator;
    id *coordinatedPlaybackIdentifierChangeNotificationToken;
    BOOL needToSeekAfterCreatingFigPlaybackItem;
    ? initialTime;
    unsigned int initialSetTimeFlags;
    ? initialMinSnapTime;
    ? initialMaxSnapTime;
    unsigned int nextSeekIDToGenerate;
    int pendingSeekID;
    id *seekCompletionHandler;
    AVPlayerItem *previousItem;
    AVPlayerItem *nextItem;
    AVPlayerConnection *playerConnection;
    BOOL initialWillNeverSeekBackwardsHint;
    AVVideoComposition *videoComposition;
    AVWeakReference *clientsOriginalVideoComposition;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    *void figVideoCompositor;
    AVPlayerItem *interstitialTemplate;
    int eqPreset;
    NSDictionary *rampInOutInfo;
    NSDictionary *audibleDRMInfo;
    NSInteger initialVariantIndex;
    NSString *currentStableVariantID;
    NSMutableDictionary *mediaOptionsSelectedByClient;
    NSString *serviceIdentifier;
    NSArray *timedMetadata;
    NSMutableArray *handlersToCallWhenReadyForEnqueueing;
    BOOL haveInitialSamples;
    BOOL haveCPEProtector;
    BOOL didInformObserversAboutAvailabilityOfTracks;
    BOOL didFireKVOForAssetForNonStreamingItem;
    AVAudioMix *mostRecentlyAppliedAudioMix;
    BOOL audioSpatializationAllowed;
    BOOL audioSpatializationAllowedWasSet;
    NSUInteger allowedAudioSpatializationFormats;
    BOOL allowedAudioSpatializationFormatsWasSet;
    AVWeakReference *playerReference;
    BOOL didSetAssetToAssetWithFigPlaybackItem;
    *OpaqueFigCPEProtector figCPEProtector;
}






@end


#endif