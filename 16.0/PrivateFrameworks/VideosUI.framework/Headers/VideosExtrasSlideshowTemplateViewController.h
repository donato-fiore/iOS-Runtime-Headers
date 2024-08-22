// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIDEOSEXTRASSLIDESHOWTEMPLATEVIEWCONTROLLER_H
#define VIDEOSEXTRASSLIDESHOWTEMPLATEVIEWCONTROLLER_H

@class NSString, NSArray, UITapGestureRecognizer, IKSlideshowElement;
@protocol VideosExtrasSlideshowViewControllerDataSource, VideosExtrasZoomingImageTransitionParticipant;


#import "VideosExtrasTemplateViewController.h"
#import "VideosExtrasSlideshowViewController.h"

@interface VideosExtrasSlideshowTemplateViewController : VideosExtrasTemplateViewController <VideosExtrasSlideshowViewControllerDataSource, VideosExtrasZoomingImageTransitionParticipant>

 {
    BOOL _overlayHidden;
    BOOL _preventNavbarAutohide;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *imageElements; // ivar: _imageElements
@property (retain, nonatomic) VideosExtrasSlideshowViewController *slideshowViewController; // ivar: _slideshowViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (readonly, nonatomic) IKSlideshowElement *templateElement;


-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldPerformZoomingImageTransitionFromImageElement:(id)arg0 toImageAtIndex:(NSUInteger)arg1 ;
-(BOOL)showsPlaceholder;
-(NSUInteger)numberOfImagesForSlideshowViewController:(id)arg0 ;
-(id)initWithDocument:(id)arg0 options:(id)arg1 context:(id)arg2 ;
-(void)_firstImageLoadedHideNavigationBar;
-(void)_handleTap:(id)arg0 ;
-(void)_toggleVisibilityOfNavigationBar;
-(void)dealloc;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg0 transitionFinished:(BOOL)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg0 ;
-(void)prepareZoomingImageTransitionWithContext:(id)arg0 ;
-(void)slideshowViewController:(id)arg0 loadImageAtIndex:(NSUInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif