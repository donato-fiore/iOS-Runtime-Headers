// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFEEDVIEWCONTROLLER_H
#define PXFEEDVIEWCONTROLLER_H

@class UIViewController, NSString, UIView;
@protocol PXFeedViewActionPerformer, PXAssetCollectionActionPerformerDelegate, PXStoryViewControllerTransitionEndPoint, PXChangeObserver, PXSectionedDataSourceManagerObserver, UIContextMenuInteractionDelegate, PXFeedTestElement, PXTapToRadarDiagnosticProvider, PXFeedViewController, PXProgrammaticNavigationParticipant, PXFeedActionPerformer, PXFeedChromeController, PXAnonymousScrollView, PXFeedViewControllerTabBarTransitionDelegate;


#import "PXFeedConfiguration.h"
#import "PXFeedGadget.h"
#import "PXFeedView.h"
#import "PXSectionedObjectReference.h"
#import "PXExpectation.h"
#import "PXProgrammaticNavigationDestination.h"
#import "PXUpdater.h"
#import "PXFeedViewModel.h"

@interface PXFeedViewController : UIViewController <PXFeedViewActionPerformer, PXAssetCollectionActionPerformerDelegate, PXStoryViewControllerTransitionEndPoint, PXChangeObserver, PXSectionedDataSourceManagerObserver, UIContextMenuInteractionDelegate, PXFeedTestElement, PXTapToRadarDiagnosticProvider, PXFeedViewController, PXProgrammaticNavigationParticipant>

 {
    ? _actionPerformerRespondsTo;
}


@property (retain, nonatomic) NSObject<PXFeedActionPerformer> *actionPerformer; // ivar: _actionPerformer
@property (readonly, nonatomic) NSObject<PXFeedChromeController> *chromeController; // ivar: _chromeController
@property (readonly, nonatomic) PXFeedConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) PXFeedGadget *feedGadget; // ivar: _feedGadget
@property (readonly, nonatomic) PXFeedView *feedView; // ivar: _feedView
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (retain, nonatomic) PXSectionedObjectReference *navigatedObjectReference; // ivar: _navigatedObjectReference
@property (retain, nonatomic) PXExpectation *nextViewDidAppearExpectation; // ivar: _nextViewDidAppearExpectation
@property (copy, nonatomic) id *onTransitionEnd; // ivar: _onTransitionEnd
@property (retain, nonatomic) UIView *placeholderView; // ivar: _placeholderView
@property (readonly, nonatomic) NSObject<PXAnonymousScrollView> *ppt_scrollView;
@property (readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<PXFeedViewControllerTabBarTransitionDelegate> *tabBarTransitionDelegate; // ivar: _tabBarTransitionDelegate
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) PXFeedViewModel *viewModel; // ivar: _viewModel


-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 transitionToViewController:(id)arg1 transitionType:(NSInteger)arg2 ;
-(BOOL)handlePrimaryActionOnItemAtIndexPath:(struct PXSimpleIndexPath )arg0 inDataSource:(id)arg1 ;
-(BOOL)handleSelectActionOnItemAtIndexPath:(struct PXSimpleIndexPath )arg0 inDataSource:(id)arg1 ;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)_objectReferenceForDestination:(id)arg0 ;
-(id)_targetedPreviewForObjectReference:(id)arg0 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)hostViewControllerForActionPerformer:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)itemPlacementControllerForItemReference:(id)arg0 ;
-(id)nextExistingParticipantOnRouteToDestination:(id)arg0 ;
-(id)undoManagerForActionPerformer:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_checkCanNavigate:(*BOOL)arg0 toDestination:(id)arg1 iterator:(id)arg2 ;
-(void)_handleCanNavigate:(BOOL)arg0 toDestination:(id)arg1 objectReference:(id)arg2 completionHandler:(id)arg3 ;
-(void)_handleScrollViewTap:(id)arg0 ;
-(void)_ifDataSourceIsEmptyPopIfSpecAllows;
-(void)_invalidatePlaceholder;
-(void)_setNeedsUpdate;
-(void)_updatePlaceholder;
-(void)a_customTapToRadar:(id)arg0 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)didEndTransition:(id)arg0 withEndPoint:(id)arg1 finished:(BOOL)arg2 ;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
// -(void)ppt_transitionToFirstItemWithWillPresentHandler:(id)arg0 completionHandler:(unk)arg1  ;
-(void)prepareForTransitionToSelectedTabBarItemSegmentWithCompletion:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willBeginTransition:(id)arg0 withEndPoint:(id)arg1 anchorItemReference:(id)arg2 ;


@end


#endif