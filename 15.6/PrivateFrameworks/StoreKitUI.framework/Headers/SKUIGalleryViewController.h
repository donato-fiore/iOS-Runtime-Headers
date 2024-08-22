// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIGALLERYVIEWCONTROLLER_H
#define SKUIGALLERYVIEWCONTROLLER_H

@class UIViewController, NSMapTable, UIPageControl, UIPageViewController, UITapGestureRecognizer, NSString;
@protocol SKUIArtworkRequestDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate, OS_dispatch_source, SKUIEmbeddedMediaViewDelegate;


#import "SKUIResourceLoader.h"
#import "SKUIGalleryPageComponent.h"
#import "SKUIMediaComponent.h"

@interface SKUIGalleryViewController : UIViewController <SKUIArtworkRequestDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate>

 {
    SKUIResourceLoader *_artworkLoader;
    NSMapTable *_componentArtworkRequests;
    NSObject<OS_dispatch_source> *_cycleTimer;
    UIPageControl *_pageIndicator;
    UIPageViewController *_pageViewController;
    UITapGestureRecognizer *_tapGestureRecognizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<SKUIEmbeddedMediaViewDelegate> *embeddedMediaDelegate; // ivar: _embeddedMediaDelegate
@property (readonly, nonatomic) SKUIGalleryPageComponent *galleryComponent; // ivar: _galleryComponent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIMediaComponent *selectedMediaComponent;
@property (readonly) Class superclass;


-(id)_newViewControllerWithIndex:(NSInteger)arg0 ;
-(id)_newViewWithMediaComponent:(id)arg0 ;
-(id)_selectedViewController;
-(id)initWithGalleryComponent:(id)arg0 artworkLoader:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 ;
-(void)_finishPaneAnimation;
-(void)_showNextPaneAnimated:(BOOL)arg0 ;
-(void)_startCycleTimer;
-(void)_stopCycleTimer;
-(void)_tapAction:(id)arg0 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)dealloc;
-(void)loadArtworkForChildComponent:(id)arg0 reason:(NSInteger)arg1 constraintWidth:(CGFloat)arg2 ;
-(void)loadView;
-(void)pageViewController:(id)arg0 didFinishAnimating:(BOOL)arg1 previousViewControllers:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(void)performActionForSelectedComponentAnimated:(BOOL)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif