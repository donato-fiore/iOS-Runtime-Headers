// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERINTERNAL_H
#define AVPLAYERINTERNAL_H

@class NSError, NSMutableSet, NSArray, NSMutableDictionary, AVAudioSession, NSDictionary, NSMutableArray, NSString, NSNumber, NSHashTable;
@protocol OS_dispatch_queue, AVBlockScheduler, AVLoggingIdentifier;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVPixelBufferAttributeMediator.h"
#import "AVAudioSessionMediaPlayerOnly.h"
#import "AVPlayerItem.h"
#import "AVOutputContext.h"
#import "AVPlayerPlaybackCoordinator.h"
#import "AVQueuePlayer.h"

@interface AVPlayerInternal : NSObject {
    BOOL fullyInitializedAndNotDeallocating;
    AVWeakReference *weakReference;
    AVPixelBufferAttributeMediator *pixelBufferAttributeMediator;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    NSObject<OS_dispatch_queue> *figConfigurationQueue;
    NSObject<OS_dispatch_queue> *layerInteractionQueue;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSObject<OS_dispatch_queue> *currentItemPropertyUpdateQueue;
    NSObject<OS_dispatch_queue> *layersQ;
    *OpaqueCMTimebase proxyTimebase;
    BOOL logPerformanceData;
    id *didFinishSuspensionNotificationToken;
    id *didEnterBackgroundNotificationToken;
    id *willEnterForegroundNotificationToken;
    AVAudioSessionMediaPlayerOnly *audioSessionMediaPlayerOnly;
    *void IAPDCallbackToken;
    *OpaqueFigSimpleMutex prerollIDMutex;
    NSObject<OS_dispatch_queue> *configurationQueue;
    id *layerForegroundingChangeToken;
    id<AVBlockScheduler> *KVOChangeSerializer;
    NSInteger status;
    NSError *error;
    AVPlayerItem *currentItem;
    AVPlayerItem *lastItem;
    NSMutableSet *items;
    NSArray *queueModifications;
    NSMutableDictionary *pendingFigPlayerProperties;
    AVAudioSession *audioSession;
    NSDictionary *vibrationPattern;
    AVOutputContext *outputContext;
    BOOL IOwnTheFigPlayer;
    NSInteger audiovisualBackgroundPlaybackPolicy;
    NSMutableArray *handlersToCallWhenReadyToPlay;
    BOOL shouldReduceResourceUsage;
    NSInteger resourceConservationLevelWhilePaused;
    NSString *playerRole;
    BOOL usesDedicatedNotificationQueueForMediaServices;
    CGSize dimensionsOfReservedVideoMemory;
    NSString *externalPlaybackVideoGravity;
    NSInteger actionAtItemEnd;
    float volume;
    float userVolume;
    float minRateForAudioPlayback;
    float maxRateForAudioPlayback;
    BOOL autoSwitchStreamVariants;
    BOOL preparesItemsForPlaybackAsynchronously;
    BOOL allowsOutOfBandTextTrackRendering;
    BOOL muted;
    BOOL closedCaptionDisplayEnabled;
    BOOL appliesMediaSelectionCriteriaAutomatically;
    BOOL dynamicallyChoosesInitialVariant;
    BOOL limitsBandwidthForCellularAccess;
    BOOL usesAudioOnlyModeForExternalPlayback;
    BOOL allowsPixelBufferPoolSharing;
    BOOL disallowsAMRAudio;
    BOOL disallowsHardwareAcceleratedVideoDecoder;
    BOOL layerDestinationIsTVOut;
    BOOL preventsDisplaySleepDuringVideoPlayback;
    BOOL disallowsVideoLayerDisplayCompositing;
    BOOL allowsExternalPlayback;
    BOOL usesExternalPlaybackWhileExternalScreenIsActive;
    NSString *captionPipelineStrategy;
    NSString *audioOutputDeviceUniqueID;
    NSString *clientName;
    NSString *STSLabel;
    NSString *multichannelAudioStrategy;
    NSInteger clientPriority;
    BOOL PIPModePossible;
    BOOL isDisplayingClosedCaptions;
    BOOL externalPlaybackActive;
    BOOL airPlayVideoActive;
    BOOL isConnectedToPhysicalSecondScreen;
    BOOL outputObscuredDueToInsufficientExternalProtection;
    NSInteger externalProtectionStatus;
    NSString *ancillaryPerformanceInformationForDisplay;
    float rate;
    int rateChangeIdentifier;
    BOOL automaticallyWaitsToMinimizeStalling;
    BOOL usesLegacyAutomaticWaitingBehavior;
    NSInteger timeControlStatus;
    NSString *reasonForWaitingToPlay;
    CGSize currentItemPresentationSize;
    BOOL currentItemNonForcedSubtitlesEnabled;
    NSUInteger preferredVideoDecoderGPURegistryID;
    BOOL disallowsAutoPauseOnRouteRemovalIfNoAudio;
    BOOL ensuresActiveAudioSessionWhenStartingPlayback;
    BOOL hostApplicationInForeground;
    BOOL preservesAudioSessionSampleRate;
    BOOL silencesOtherPlaybackDuringPIP;
    BOOL prefersPlayingSilentlyWhenConflictingWithOtherPlayback;
    BOOL suppressesAudioRendering;
    BOOL isInterstitialPlayer;
    BOOL isSilencedDueToConflictWithOtherPlayback;
    NSNumber *mxSessionID;
    NSArray *videoTargets;
    AVPlayerPlaybackCoordinator *playbackCoordinator;
    BOOL clientRequestedPlaybackCoordinator;
    NSString *backgroundPIPAuthorizationToken;
    BOOL rateDidChangeNotificationIncludesExtendedDiagnosticPayload;
    AVQueuePlayer *interstitialPlayer;
    *OpaqueFigPlayerInterstitialCoordinator interstitialEventCoordinator;
    NSMutableArray *videoLayers;
    NSMutableArray *subtitleLayers;
    NSMutableArray *closedCaptionLayers;
    NSHashTable *avPlayerLayers;
    int nextPrerollIDToGenerate;
    int pendingPrerollID;
    id *prerollCompletionHandler;
    id *currentItemSuppressesVideoLayersNotificationToken;
    id *currentItemPreferredPixelBufferAttributesNotificationToken;
    *OpaqueFigPlayer figPlayer;
    *OpaqueFigPlaybackItem figPlaybackItemToIdentifyNextCurrentItem;
    BOOL needsToCreateFigPlayer;
    NSDictionary *cachedFigMediaSelectionCriteriaProperty;
    NSArray *itemsInFigPlayQueue;
    NSArray *expectedAssetTypes;
    BOOL reevaluateBackgroundPlayback;
    BOOL hadAssociatedOnscreenPlayerLayerWhenSuspended;
    BOOL suspensionExpected;
    BOOL rateUpdateDuringTransitionDecided;
    BOOL videoLayersAreAttached;
    *OpaqueCMClock figMasterClock;
    NSString *captionRenderingStrategy;
    NSArray *displaysUsedForPlayback;
    id<AVLoggingIdentifier> *loggingIdentifier;
}






@end


#endif