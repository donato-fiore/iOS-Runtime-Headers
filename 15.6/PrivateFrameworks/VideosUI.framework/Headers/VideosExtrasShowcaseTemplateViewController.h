// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEOSEXTRASSHOWCASETEMPLATEVIEWCONTROLLER_H
#define VIDEOSEXTRASSHOWCASETEMPLATEVIEWCONTROLLER_H

@class NSArray, NSString, NSDictionary, IKShowcaseTemplate;
@protocol VideosExtrasCarouselViewControllerDataSource, VideosExtrasCarouselViewControllerDelegate, VideosExtrasImageBrowserViewControllerDataSource, VideosExtrasNavigationAnimationControllerProvider, VideosExtrasZoomingImageInteractiveTransitionSource, VideosExtrasZoomingImageTransitionParticipant;


#import "VideosExtrasTemplateViewController.h"
#import "VideosExtrasZoomingImageTransitionController.h"
#import "VideosExtrasCarouselViewController.h"
#import "VideosExtrasImageBrowserViewController.h"

@interface VideosExtrasShowcaseTemplateViewController : VideosExtrasTemplateViewController <VideosExtrasCarouselViewControllerDataSource, VideosExtrasCarouselViewControllerDelegate, VideosExtrasImageBrowserViewControllerDataSource, VideosExtrasNavigationAnimationControllerProvider, VideosExtrasZoomingImageInteractiveTransitionSource, VideosExtrasZoomingImageTransitionParticipant>



@property (retain, nonatomic) VideosExtrasZoomingImageTransitionController *activeZoomingImageInteractiveTransitionController; // ivar: _activeZoomingImageInteractiveTransitionController
@property (nonatomic) NSUInteger autohighlightIndex; // ivar: _autohighlightIndex
@property (retain, nonatomic) NSArray *bannerButtonElements; // ivar: _bannerButtonElements
@property (retain, nonatomic) NSArray *carouselLockupElements; // ivar: _carouselLockupElements
@property (retain, nonatomic) VideosExtrasCarouselViewController *carouselViewController; // ivar: _carouselViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VideosExtrasImageBrowserViewController *imageBrowserViewController; // ivar: _imageBrowserViewController
@property (readonly, nonatomic) NSUInteger indexOfVisibleItem;
@property (retain, nonatomic) NSDictionary *overriddenFullscreenImages; // ivar: _overriddenFullscreenImages
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsOneupMode; // ivar: _supportsOneupMode
@property (readonly, nonatomic) IKShowcaseTemplate *templateElement;


-(BOOL)showsPlaceholder;
-(NSUInteger)carouselSize;
-(NSUInteger)numberOfImagesForBrowserViewController:(id)arg0 ;
-(NSUInteger)numberOfItemsInCarouselViewController:(id)arg0 ;
-(id)_mainChildViewController;
-(id)animationControllerForNavigationOperation:(NSInteger)arg0 fromViewController:(id)arg1 toViewController:(id)arg2 ;
-(id)initWithDocument:(id)arg0 options:(id)arg1 context:(id)arg2 ;
-(void)_loadTextElement:(id)arg0 textAttributes:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_prepareLayout;
-(void)_pushImageBrowserWithVisibleItemIndex:(NSUInteger)arg0 ;
-(void)carouselViewController:(id)arg0 configureCarouselCollectionViewCell:(id)arg1 forItemAtIndex:(NSUInteger)arg2 withThumbnailImageContainerSize:(struct CGSize )arg3 ;
-(void)carouselViewController:(id)arg0 didHighlightItemAtIndex:(NSUInteger)arg1 ;
-(void)carouselViewController:(id)arg0 didSelectItemAtIndex:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg0 transitionFinished:(BOOL)arg1 ;
-(void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg0 ;
-(void)imageBrowserViewController:(id)arg0 loadDescriptionAtIndex:(NSUInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)imageBrowserViewController:(id)arg0 loadImageAtIndex:(NSUInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)imageBrowserViewController:(id)arg0 loadSubtitleAtIndex:(NSUInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)imageBrowserViewController:(id)arg0 loadTitleAtIndex:(NSUInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performZoomingImageTransitionWithContext:(id)arg0 ;
-(void)prepareZoomingImageTransitionWithContext:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif