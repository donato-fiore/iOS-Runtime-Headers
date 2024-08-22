// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYFEEDVIEWCONTROLLER_H
#define PXSTORYFEEDVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PXStoryFeedViewActionPerformer, PXAssetCollectionActionPerformerDelegate, PXStoryViewControllerTransitionEndPoint, PXStoryFeedTestElement, PXTapToRadarDiagnosticProvider, PXStoryFeedViewController, PXProgrammaticNavigationParticipant, PXStoryFeedActionPerformer, PXStoryFeedChromeController, PXAnonymousScrollView;


#import "PXStoryFeedConfiguration.h"
#import "PXStoryFeedView.h"
#import "PXProgrammaticNavigationDestination.h"
#import "PXStoryFeedViewModel.h"

@interface PXStoryFeedViewController : UIViewController <PXStoryFeedViewActionPerformer, PXAssetCollectionActionPerformerDelegate, PXStoryViewControllerTransitionEndPoint, PXStoryFeedTestElement, PXTapToRadarDiagnosticProvider, PXStoryFeedViewController, PXProgrammaticNavigationParticipant>

 {
    ? _actionPerformerRespondsTo;
}


@property (retain, nonatomic) NSObject<PXStoryFeedActionPerformer> *actionPerformer; // ivar: _actionPerformer
@property (readonly, nonatomic) NSObject<PXStoryFeedChromeController> *chromeController; // ivar: _chromeController
@property (readonly, nonatomic) PXStoryFeedConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXStoryFeedView *feedView; // ivar: _feedView
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (copy, nonatomic) id *onTransitionEnd; // ivar: _onTransitionEnd
@property (readonly, nonatomic) NSObject<PXAnonymousScrollView> *ppt_scrollView;
@property (readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXStoryFeedViewModel *viewModel; // ivar: _viewModel


-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 transitionToViewController:(id)arg1 transitionType:(NSInteger)arg2 ;
-(BOOL)handlePrimaryActionOnItemAtIndexPath:(struct PXSimpleIndexPath )arg0 inDataSource:(id)arg1 ;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)_objectReferenceForDestination:(id)arg0 ;
-(id)hostViewControllerForActionPerformer:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)itemPlacementControllerForItemReference:(id)arg0 ;
-(id)nextExistingParticipantOnRouteToDestination:(id)arg0 ;
-(void)_handleScrollViewTap:(id)arg0 ;
-(void)a_customTapToRadar:(id)arg0 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)didEndTransition:(id)arg0 withEndPoint:(id)arg1 finished:(BOOL)arg2 ;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
// -(void)ppt_transitionToFirstItemWithWillPresentHandler:(id)arg0 completionHandler:(unk)arg1  ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willBeginTransition:(id)arg0 withEndPoint:(id)arg1 ;


@end


#endif