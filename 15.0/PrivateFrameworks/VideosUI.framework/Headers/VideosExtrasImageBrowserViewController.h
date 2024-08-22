// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOSEXTRASIMAGEBROWSERVIEWCONTROLLER_H
#define VIDEOSEXTRASIMAGEBROWSERVIEWCONTROLLER_H

@class UIViewController, NSString, UIPageViewController;
@protocol UIPageViewControllerDataSource, UIPageViewControllerDelegate, VideosExtrasZoomingImageInteractiveTransitionSource, VideosExtrasZoomingImageTransitionParticipant, VideosExtrasImageBrowserViewControllerDataSource, VideosExtrasImageBrowserViewControllerDelegate;



@interface VideosExtrasImageBrowserViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, VideosExtrasZoomingImageInteractiveTransitionSource, VideosExtrasZoomingImageTransitionParticipant>



@property (nonatomic) BOOL allowsPinchingImageForInteractiveZoomingImageTransition; // ivar: _allowsPinchingImageForInteractiveZoomingImageTransition
@property (weak, nonatomic) NSObject<VideosExtrasImageBrowserViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VideosExtrasImageBrowserViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPageViewController *pageViewController; // ivar: _pageViewController
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger visibleImageIndex; // ivar: _visibleImageIndex
@property (weak, nonatomic) NSObject<VideosExtrasZoomingImageInteractiveTransitionSource> *zoomingImageInteractiveTransitionSource; // ivar: _zoomingImageInteractiveTransitionSource


-(NSUInteger)_numberOfImages;
-(id)_imageViewControllerAtIndex:(NSUInteger)arg0 ;
-(id)_visibleImageViewController;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 ;
-(void)_addPageViewForController:(id)arg0 toView:(id)arg1 ;
-(void)_removePageViewController;
-(void)_updatePageViewController;
-(void)_updateTitle;
-(void)dealloc;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg0 transitionFinished:(BOOL)arg1 ;
-(void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg0 ;
-(void)pageViewController:(id)arg0 didFinishAnimating:(BOOL)arg1 previousViewControllers:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(void)pageViewController:(id)arg0 willTransitionToViewControllers:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg0 ;
-(void)prepareZoomingImageTransitionWithContext:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif