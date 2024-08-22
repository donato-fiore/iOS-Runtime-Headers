// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIPOSTERVARIANTVIEWCONTROLLER_H
#define PBUIPOSTERVARIANTVIEWCONTROLLER_H

@class UIViewController, UIView, UIView<UIScenePresentation>, UIVisualEffectView, BSAtomicFlag, UIColor, BSUIMappedImageCache, NSString, _UILegibilitySettings, FBScene, UIImage;
@protocol BSDescriptionProviding, FBSceneLayerManagerObserver, PBUIURLSourceDelegate, FBSceneObserver, PBUIColorStatisticsDelegate, PBUIPosterComponent, PBUIPosterComponentDelegate, UIScenePresenter;


#import "PBUIColorStatistics.h"
#import "PBUIURLBackedSnapshotSource.h"
#import "PBUIFixedReplicaSourceProvider.h"
#import "PBUICachedSnapshotEffectProvider.h"
#import "PBUISnapshotReplicaView.h"
#import "PBUIPosterVariantViewController.h"

@interface PBUIPosterVariantViewController : UIViewController <BSDescriptionProviding, FBSceneLayerManagerObserver, PBUIURLSourceDelegate, FBSceneObserver, PBUIColorStatisticsDelegate, PBUIPosterComponent>

 {
    UIView *_contentContainer;
    UIView<UIScenePresentation> *_sceneView;
    PBUIColorStatistics *_posterColorStatistics;
    PBUIURLBackedSnapshotSource *_snapshotSource;
    PBUIFixedReplicaSourceProvider *_portalProvider;
    NSUInteger _lastExtantUpdate;
    UIVisualEffectView *_blurView;
    PBUICachedSnapshotEffectProvider *_snapshotProvider;
    BSAtomicFlag *_snapshotNeeded;
    BSAtomicFlag *_snapshotScheduled;
    BOOL _parallaxApplied;
    PBUISnapshotReplicaView *_snapshotView;
}


@property (readonly, nonatomic) UIColor *averageColor;
@property (readonly, nonatomic) CGFloat averageContrast;
@property (readonly, nonatomic) BSUIMappedImageCache *cache; // ivar: _cache
@property (readonly, nonatomic) PBUIColorStatistics *contentColorStatistics;
@property (weak, nonatomic) PBUIPosterVariantViewController *counterpart; // ivar: _counterpart
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PBUIPosterComponentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) NSObject<UIScenePresenter> *presenter; // ivar: _presenter
@property (readonly, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly, nonatomic) UIImage *snapshot;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger variant; // ivar: _variant


-(BOOL)_canShowWhileLocked;
-(BOOL)areSettingsAppropriateForSnapshotting:(id)arg0 ;
-(BOOL)evaluateSnapshotPreconditions;
-(BOOL)postprocessNewSnapshot:(id)arg0 colorStatistics:(id)arg1 error:(*id)arg2 ;
-(BOOL)updatePresentation;
-(id)_posterInstanceURL;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithScene:(id)arg0 cache:(id)arg1 ;
-(id)initWithScene:(id)arg0 storagePath:(id)arg1 ;
-(id)makePortalSourceWithLegibilitySettings:(id)arg0 ;
-(id)portalSourceProvider;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(unsigned char)snapshotVersionForURL:(id)arg0 ;
-(void)_monitorScene:(id)arg0 ;
-(void)_scheduleSnapshotIfNeeded;
-(void)_updateParallax;
-(void)_updatePresentation;
-(void)colorStatisticsDidChange:(id)arg0 ;
-(void)invalidate;
-(void)invalidateSnapshotPreconditions;
-(void)performSnapshotOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)scene:(id)arg0 clientDidConnect:(id)arg1 ;
-(void)scene:(id)arg0 didApplyUpdateWithContext:(id)arg1 ;
-(void)scene:(id)arg0 didCompleteUpdateWithContext:(id)arg1 error:(id)arg2 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneDidActivate:(id)arg0 ;
-(void)sceneLayerManagerDidUpdateLayers:(id)arg0 ;
-(void)sceneWillDeactivate:(id)arg0 withError:(id)arg1 ;
-(void)setBlurEnabled:(BOOL)arg0 ;
-(void)setNeedsNewSnapshot;
-(void)setPosterAverageColor:(id)arg0 ;
-(void)snapshotSource:(id)arg0 failedToReadColorStatisticsAtURL:(id)arg1 error:(id)arg2 ;
-(void)snapshotSource:(id)arg0 failedToReadSnapshotAtURL:(id)arg1 error:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif