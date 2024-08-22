// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERGALLERYPREVIEWVIEWCONTROLLER_H
#define PBFPOSTERGALLERYPREVIEWVIEWCONTROLLER_H

@class UIViewController, UINavigationController, NSMutableSet, NSString, NSSet, NSTimer;
@protocol UISheetPresentationControllerDelegate, PREditingSceneViewControllerDelegate, PREditingSceneViewControllerObserver, UIViewControllerTransitioningDelegate, _PBFGalleryCollectionViewControllerDelegate, PBFPosterGalleryPreviewViewControllerDelegate;


#import "_PBFGalleryCollectionViewController.h"
#import "PBFPosterGalleryDataProvider.h"
#import "PBFGalleryEditingSceneViewController.h"
#import "PBFPosterGalleryPreviewView.h"

@interface PBFPosterGalleryPreviewViewController : UIViewController <UISheetPresentationControllerDelegate, PREditingSceneViewControllerDelegate, PREditingSceneViewControllerObserver, UIViewControllerTransitioningDelegate, _PBFGalleryCollectionViewControllerDelegate>

 {
    CGSize _environmentContainerContentSize;
    NSDirectionalEdgeInsets _environmentContainerContentInsets;
    ? _metrics;
    _PBFGalleryCollectionViewController *_collectionViewController;
    UINavigationController *_navigationController;
    NSMutableSet *_displayedPreviewIdentifiers;
    NSMutableSet *_tappedPreviewIdentifiers;
    NSString *_currentlyEditingPreviewIdentifier;
    NSString *_addedPreviewIdentifier;
}


@property (readonly, copy, nonatomic) NSString *addedPreviewIdentifier;
@property (retain, nonatomic) PBFPosterGalleryDataProvider *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PBFPosterGalleryPreviewViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *displayedPreviewIdentifiers;
@property (weak, nonatomic) NSObject<PREditingSceneViewControllerDelegate> *editingSceneDelegate; // ivar: _editingSceneDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSTimer *loadingHeroActivityIndicationTimer; // ivar: _loadingHeroActivityIndicationTimer
@property (retain, nonatomic) PBFGalleryEditingSceneViewController *loadingHeroEditingSceneViewController; // ivar: _loadingHeroEditingSceneViewController
@property (retain, nonatomic) PBFPosterGalleryPreviewView *loadingHeroPreviewView; // ivar: _loadingHeroPreviewView
@property (nonatomic, getter=isPresentingPreview) BOOL presentingPreview; // ivar: _presentingPreview
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSSet *tappedPreviewIdentifiers;


+(void)configureSheetPresentationController:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)galleryCollectionViewController;
-(id)navigationControllerForPresentingSceneViewController:(id)arg0 ;
-(struct ? )metricsForEnvironment:(id)arg0 ;
-(struct PREditingSceneViewControllerTopButtonLayout )topButtonLayoutForEditingSceneViewController:(id)arg0 ;
-(void)_closeButtonTapped:(id)arg0 ;
-(void)dealloc;
-(void)editingSceneViewController:(id)arg0 userDidDismissWithAction:(NSInteger)arg1 updatedConfiguration:(id)arg2 updatedConfiguredProperties:(id)arg3 completion:(id)arg4 ;
-(void)editingSceneViewControllerDidFinishShowingContent:(id)arg0 ;
-(void)galleryCollectionViewControllerDidSelectPreview:(id)arg0 fromPreviewView:(id)arg1 ;
-(void)galleryCollectionViewControllerWillDisplayPreview:(id)arg0 ;
-(void)presentConfiguratorForPreview:(id)arg0 fromView:(id)arg1 ;
-(void)presentPreview:(id)arg0 withMode:(NSInteger)arg1 fromView:(id)arg2 ;
-(void)presentRendererForPreview:(id)arg0 fromView:(id)arg1 ;
-(void)presentationControllerWillDismiss:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif