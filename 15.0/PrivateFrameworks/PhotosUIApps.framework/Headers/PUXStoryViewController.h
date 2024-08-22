// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUXSTORYVIEWCONTROLLER_H
#define PUXSTORYVIEWCONTROLLER_H

@class UIViewController, PXStoryConfiguration, PXStoryView;
@protocol PXStoryViewController, PXTapToRadarDiagnosticProvider, PXStoryPlayerTestElement, PXStoryViewActionPerformer, PXStoryViewControllerTransitionEndPoint, PXAssetCollectionActionPerformerDelegate;



@interface PUXStoryViewController : UIViewController <PXStoryViewController, PXTapToRadarDiagnosticProvider, PXStoryPlayerTestElement, PXStoryViewActionPerformer, PXStoryViewControllerTransitionEndPoint, PXAssetCollectionActionPerformerDelegate>

 {
    ? onViewDidLoad;
    ? $__lazy_storage_$_viewModel;
    ? viewModelObservation;
    ? didAppear;
    ? didAppearOnce;
    ? applicationState;
    ? applicationStateObservation;
    ? transitionsCoordinator;
    ? $__lazy_storage_$_eventTracker;
    ? $__lazy_storage_$_analyticsController;
    ? exportHelper;
    ? assetPicker;
    ? originalToolbarScrollEdgeAppearance;
    ? _prefersHomeIndicatorHidden;
    ? networkMonitor;
    ? networkReachable;
    ? appleMusicPreviewVC;
    ? airPlayHelper;
    ? isChangingSongForExport;
}


@property (nonatomic, readonly) PXStoryConfiguration *configuration; // ivar: configuration
@property (nonatomic, readonly) BOOL needs79067616Workaround;
@property (nonatomic, readonly) BOOL prefersHomeIndicatorAutoHidden;
@property (nonatomic, retain) PXStoryView *storyView; // ivar: storyView


-(BOOL)allowsTransition:(id)arg0 withEndPoint:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)detailItemReferenceForTransitionWithSummaryEndPoint:(id)arg0 ;
-(id)dismissStoryViewControllerInteractively;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)itemPlacementControllerForItemReference:(id)arg0 ;
-(id)musicFeedbackContextMenuDelegateWithAudioAssetProvidingBlock:(id)arg0 ;
-(id)summaryItemReferenceForTransitionWithSummaryEndPoint:(id)arg0 ;
-(void)a_customTapToRadar:(id)arg0 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)dealloc;
-(void)deleteMemory;
-(void)deselectAll:(id)arg0 ;
-(void)didEndTransition:(id)arg0 withEndPoint:(id)arg1 finished:(BOOL)arg2 ;
-(void)dismissAppleMusicPreview;
-(void)dismissStoryViewController;
-(void)featureLess;
-(void)fileRadar;
-(void)fileRadarForErrorRepository:(id)arg0 ;
-(void)installViewDidLoadHandler:(id)arg0 ;
-(void)makeAssetKeyPhoto:(id)arg0 ;
-(void)moveLeft:(id)arg0 ;
-(void)moveRight:(id)arg0 ;
-(void)performActionForChromeActionMenuItem:(NSInteger)arg0 withValue:(NSInteger)arg1 sender:(id)arg2 ;
-(void)presentAppleMusicPreviewForSelectedSong:(id)arg0 curatedSongs:(id)arg1 ;
-(void)presentAppleMusicSignupWithSender:(id)arg0 ;
-(void)presentColorGradeEditor;
-(void)presentMusicEditor;
-(void)presentSharingViewWithSender:(id)arg0 ;
-(void)presentTitleEditor;
-(void)removeAssetFromCuration:(id)arg0 ;
-(void)selectAll:(id)arg0 ;
-(void)showVisualDiagnostics;
-(void)toggleFavoriteState;
-(void)togglePlayback:(id)arg0 ;
-(void)toggleViewer:(id)arg0 ;
-(void)validateCommand:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)willBeginTransition:(id)arg0 withEndPoint:(id)arg1 ;


@end


#endif