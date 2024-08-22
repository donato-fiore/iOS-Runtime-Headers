// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXVIDEOADPROVIDER_H
#define SXVIDEOADPROVIDER_H

@class NSString, UIView, UIButton;
@protocol SXVideoAdProviding, SXAnalyticsReporting, SXVideoAdViewControllerProviding, SXVideoMetadata, SXVisibilityMonitoring;

#import <Foundation/Foundation.h>

#import "SXVideoComponent.h"
#import "SXVideoAdStateManager.h"

@interface SXVideoAdProvider : NSObject <SXVideoAdProviding>



@property (retain, nonatomic) NSObject<SXAnalyticsReporting> *analyticsReporter; // ivar: _analyticsReporter
@property (readonly, nonatomic) SXVideoComponent *component; // ivar: _component
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXVideoAdViewControllerProviding> *fullscreenViewControllerProvider; // ivar: _fullscreenViewControllerProvider
@property (readonly, nonatomic) BOOL hasAction;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat impressionThreshold;
@property (weak, nonatomic) NSObject<SXVideoMetadata> *metadata; // ivar: _metadata
@property (readonly, nonatomic) UIView *metricsView;
@property (readonly, nonatomic) UIButton *privacyMarker;
@property (readonly, nonatomic) NSUInteger skipThreshold;
@property (readonly, nonatomic) SXVideoAdStateManager *stateManager; // ivar: _stateManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXVisibilityMonitoring> *videoPlayerVisibilityMonitor; // ivar: _videoPlayerVisibilityMonitor
@property (readonly, nonatomic) NSObject<SXVisibilityMonitoring> *videoVisibilityMonitor; // ivar: _videoVisibilityMonitor


-(CGFloat)threshold;
-(id)initWithViewControllerProvider:(id)arg0 videoPlayerVisibilityMonitor:(id)arg1 videoVisibilityMonitor:(id)arg2 component:(id)arg3 ;
-(id)loadWithCompletionBlock:(SEL)arg0 ;
-(void)adVisibilityStateChanged;
-(void)nextVideoStartedPlaying;
-(void)playbackFailedWithError:(id)arg0 ;
-(void)playbackFinished;
-(void)playbackInitiatedWithButtonTapped:(BOOL)arg0 ;
-(void)playbackPassedImpressionThreshold;
-(void)playbackPassedQuartile:(NSUInteger)arg0 ;
-(void)playbackPaused;
-(void)playbackResumed;
-(void)playbackStarted;
-(void)presentAction;
-(void)presentPrivacyStatement;
-(void)skipped;


@end


#endif