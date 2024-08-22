// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVSTACKCOMMONTEMPLATECONTROLLER_H
#define _TVSTACKCOMMONTEMPLATECONTROLLER_H

@class TVBgImageLoadingViewController, UIView, IKAudioElement, IKViewElement, UIImage, IKImageElement, IKMediaContentElement, NSString, UIViewController, NSArray;
@protocol UIGestureRecognizerDelegate, TVAppTemplateImpressionable, TVObserving, _TVCollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, TVMediaProviding, TVMediaPlaying;


#import "_TVFocusCaptureView.h"
#import "_TVStackCollectionView.h"
#import "TVObservableEventController.h"
#import "TVMediaInfo.h"
#import "_TVStackWrappingView.h"

@interface _TVStackCommonTemplateController : TVBgImageLoadingViewController <UIGestureRecognizerDelegate, TVAppTemplateImpressionable, TVObserving, _TVCollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, TVMediaProviding>

 {
    UIView *_overlayView;
    _TVFocusCaptureView *_disabledTemplateFocusCaptureView;
    CGFloat _impressionThreshold;
}


@property (retain, nonatomic) IKAudioElement *audioElement; // ivar: _audioElement
@property (retain, nonatomic) IKViewElement *backgroundElement; // ivar: _backgroundElement
@property (retain, nonatomic) UIImage *bgImage; // ivar: _bgImage
@property (retain, nonatomic) IKImageElement *bgImgElement; // ivar: _bgImgElement
@property (retain, nonatomic) IKMediaContentElement *bgMediaContentElement; // ivar: _bgMediaContentElement
@property (retain, nonatomic) IKViewElement *collectionListElement; // ivar: _collectionListElement
@property (retain, nonatomic) _TVStackCollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIViewController *focusedSupplementaryViewController; // ivar: _focusedSupplementaryViewController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IKImageElement *heroImgElement; // ivar: _heroImgElement
@property (weak, nonatomic) NSObject<TVMediaPlaying> *mediaPlayer; // ivar: _mediaPlayer
@property (readonly, nonatomic) TVObservableEventController *observableEventController; // ivar: _observableEventController
@property (retain, nonatomic) TVMediaInfo *selectedMediaInfo; // ivar: _selectedMediaInfo
@property (readonly, retain, nonatomic) _TVStackWrappingView *stackWrappingView;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *supplementaryViewControllers; // ivar: _supplementaryViewControllers
@property (retain, nonatomic) IKImageElement *uberImgElement; // ivar: _uberImgElement
@property (retain, nonatomic) IKViewElement *viewElement; // ivar: _viewElement


-(BOOL)_backgroundImageRequiresBlur;
-(BOOL)_isBackdropNeeded;
-(BOOL)_shouldLoadBackgroundImageAsynchronously;
-(BOOL)_updateSupplementaryViewControllersWithElements:(id)arg0 updateStyles:(BOOL)arg1 ;
-(BOOL)automaticallyAdjustsScrollViewInsets;
-(BOOL)collectionView:(id)arg0 shouldHandleLongPressForItemAtIndexPath:(id)arg1 ;
-(NSInteger)_blurEffectStyle;
-(NSInteger)_supplementaryViewSectionIndex;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_backgroundImageProxy;
-(id)_flowLayout;
-(id)_modalPresenterPresentedViewController;
-(id)_overlayView;
-(id)_preferredFocusedSupplementaryView;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg0 ;
-(id)parsedMediaInfo;
-(id)preferredFocusEnvironments;
-(id)viewControllerWithElement:(id)arg0 layout:(id)arg1 existingController:(id)arg2 ;
-(struct CGSize )_backgroundImageProxySize;
-(void)_cancelImpressionsUpdate;
-(void)_configureWithBgImage:(id)arg0 backdropImage:(id)arg1 ;
-(void)_disableScrollingIfNecessary:(id)arg0 ;
-(void)_dispatchEvent:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)_recordImpressionsForVisibleView;
-(void)_updateBackgroundViews;
-(void)_updateImpressions;
-(void)_updateViewLayout;
-(void)_updateViewOverlay;
-(void)_updateViewSupplementaryViews;
-(void)addObserver:(id)arg0 forEvent:(id)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didReceiveLongPressForItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didReceivePhysicalPlayForItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)didUpdateSupplementarySectionInfo;
-(void)handleEvent:(id)arg0 sender:(id)arg1 withUserInfo:(id)arg2 ;
-(void)loadView;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 forEvent:(id)arg1 ;
-(void)scrollToTop;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBackgroundAndBackdrop;
-(void)updateBackgroundAndBackdropMaskFactor;
-(void)updateWithViewElement:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewSafeAreaInsetsDidChange;


@end


#endif