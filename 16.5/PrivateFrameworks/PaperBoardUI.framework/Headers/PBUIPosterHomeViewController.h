// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIPOSTERHOMEVIEWCONTROLLER_H
#define PBUIPOSTERHOMEVIEWCONTROLLER_H

@class PRPosterHomeScreenConfiguration, MTMaterialView, NSString;
@protocol PBUIEffectTrackingReplicaViewDelegate;


#import "PBUIPosterVariantViewController.h"
#import "PBUIEffectTrackingReplicaView.h"
#import "PBUIGradientView.h"
#import "PBUIColorStatistics.h"

@interface PBUIPosterHomeViewController : PBUIPosterVariantViewController <PBUIEffectTrackingReplicaViewDelegate>

 {
    NSInteger _currentMode;
    PRPosterHomeScreenConfiguration *_homeConfiguration;
    PBUIEffectTrackingReplicaView *_effectView;
    PBUIGradientView *_gradientView;
    PBUIColorStatistics *_fixedColorStatistics;
    MTMaterialView *_wallpaperCaptureView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBlurred;
@property (readonly) Class superclass;


+(NSInteger)presentationModeForHomeConfiguration:(id)arg0 ;
-(BOOL)areSettingsAppropriateForSnapshotting:(id)arg0 ;
-(BOOL)canShowSnapshot;
-(BOOL)evaluateSnapshotPreconditions;
-(BOOL)isSettledPosition;
-(BOOL)reflectsLock;
-(BOOL)showsSnapshotWhenIdleForMode:(NSInteger)arg0 ;
-(BOOL)updateGradientViewWithGradient:(id)arg0 ;
-(BOOL)updatePresentation;
-(CGFloat)averageContrast;
-(CGFloat)unlockProgress;
-(CGFloat)weightingForEffectView;
-(NSInteger)variant;
-(id)averageColor;
-(id)contentColorStatistics;
-(id)homeScreenConfiguration;
-(void)configureEffectViewForMode;
-(void)effectTrackingReplicaViewHasValidSnapshot:(id)arg0 ;
-(void)performSnapshotOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)setCounterpart:(id)arg0 ;
-(void)setFixedAverageColor:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif