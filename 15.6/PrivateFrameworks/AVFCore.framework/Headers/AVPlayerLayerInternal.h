// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERLAYERINTERNAL_H
#define AVPLAYERLAYERINTERNAL_H

@class NSString, NSDictionary, FigBaseCALayer, FigVideoContainerLayer, FigSubtitleCALayer, CALayer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVNetworkPlaybackPerfHUDLayer.h"
#import "AVKeyPathDependencyManager.h"
#import "AVPlayer.h"
#import "AVPlayerLayer.h"
#import "AVSinkSubscriber.h"

@interface AVPlayerLayerInternal : NSObject {
    AVNetworkPlaybackPerfHUDLayer *hudLayer;
    NSObject<OS_dispatch_queue> *serialQueue;
    BOOL isPresentationLayer;
    *OpaqueFigSimpleMutex isReadyForDisplayMutex;
    NSObject<OS_dispatch_queue> *configurationQueue;
    AVKeyPathDependencyManager *dependencyManager;
    id *playerItemHasEnqueuedVideoFrameListener;
    id *windowSceneDidEnterBackgroundListener;
    id *windowSceneWillEnterForegroundListener;
    AVPlayer *player;
    NSString *videoGravity;
    NSDictionary *pixelBufferAttributes;
    BOOL lanczosDownscalingEnabled;
    NSInteger lanczosDownscalingFactor;
    FigBaseCALayer *maskLayer;
    FigVideoContainerLayer *videoLayer;
    FigSubtitleCALayer *subtitleLayer;
    FigBaseCALayer *closedCaptionLayer;
    AVPlayerLayer *interstitialLayer;
    BOOL isLegibleDisplayEnabled;
    BOOL isForScrubbingOnly;
    AVPlayerLayer *associatedRemoteModeLayer;
    BOOL willManageSublayersAsSwappedLayers;
    NSInteger activeMode;
    BOOL isPartOfForegroundScene;
    BOOL showInterstitialInstead;
    BOOL isReadyForDisplay;
    AVPlayer *playerBeingObserved;
    CGSize latestAppliedPresentationSize;
    BOOL preventsChangesToSublayerHierarchy;
    NSDictionary *clientLayers;
    BOOL isPIPModeEnabled;
    CALayer *placeholderContentLayerDuringPIPMode;
    BOOL isConnectedToSecondScreen;
    NSEdgeInsets legibleContentInsets;
    BOOL honorContentScale;
    CGFloat screenScale;
    int lastWindowSceneEvent;
    BOOL isVisible;
    AVSinkSubscriber *playerCurrentItemSink;
    AVSinkSubscriber *currentItemPresentationSizeSink;
    AVSinkSubscriber *currentItemTracksSink;
    AVSinkSubscriber *currentItemNonForcedSubtitlesEnabledSink;
    AVSinkSubscriber *playerIsDisplayingClosedCaptionsSink;
}






@end


#endif