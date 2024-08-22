// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFPOSTERGALLERYPREVIEWVIEWCONTROLLER_H
#define PBFPOSTERGALLERYPREVIEWVIEWCONTROLLER_H

@class UIViewController, UINavigationController, NSString, NSTimer;
@protocol UISheetPresentationControllerDelegate, PREditingSceneViewControllerDelegate, PREditingSceneViewControllerObserver, UIViewControllerTransitioningDelegate, PBFPosterGalleryPreviewViewControllerDelegate;


#import "_PBFGalleryCollectionViewController.h"
#import "PBFPosterGalleryDataProvider.h"
#import "PBFGalleryEditingSceneViewController.h"
#import "PBFPosterGalleryPreviewView.h"

@interface PBFPosterGalleryPreviewViewController : UIViewController <UISheetPresentationControllerDelegate, PREditingSceneViewControllerDelegate, PREditingSceneViewControllerObserver, UIViewControllerTransitioningDelegate>

 {
    CGSize _environmentContainerContentSize;
    NSDirectionalEdgeInsets _environmentContainerContentInsets;
    ? _metrics;
    _PBFGalleryCollectionViewController *_collectionViewController;
    UINavigationController *_navigationController;
}


@property (retain, nonatomic) PBFPosterGalleryDataProvider *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PBFPosterGalleryPreviewViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PREditingSceneViewControllerDelegate> *editingSceneDelegate; // ivar: _editingSceneDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSTimer *loadingHeroActivityIndicationTimer; // ivar: _loadingHeroActivityIndicationTimer
@property (retain, nonatomic) PBFGalleryEditingSceneViewController *loadingHeroEditingSceneViewController; // ivar: _loadingHeroEditingSceneViewController
@property (retain, nonatomic) PBFPosterGalleryPreviewView *loadingHeroPreviewView; // ivar: _loadingHeroPreviewView
@property (nonatomic, getter=isPresentingPreview) BOOL presentingPreview; // ivar: _presentingPreview
@property (readonly) Class superclass;


+(void)configureSheetPresentationController:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)navigationControllerForPresentingSceneViewController:(id)arg0 ;
-(struct ? )metricsForEnvironment:(id)arg0 ;
-(struct PREditingSceneViewControllerTopButtonLayout )topButtonLayoutForEditingSceneViewController:(id)arg0 ;
-(void)_closeButtonTapped:(id)arg0 ;
-(void)dealloc;
-(void)editingSceneViewController:(id)arg0 userDidDismissWithAction:(NSInteger)arg1 updatedConfiguration:(id)arg2 updatedConfiguredProperties:(id)arg3 completion:(id)arg4 ;
-(void)editingSceneViewControllerDidFinishShowingContent:(id)arg0 ;
-(void)presentConfiguratorForPreview:(id)arg0 fromView:(id)arg1 ;
-(void)presentPreview:(id)arg0 withMode:(NSInteger)arg1 fromView:(id)arg2 ;
-(void)presentRendererForPreview:(id)arg0 fromView:(id)arg1 ;
-(void)presentationControllerWillDismiss:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif