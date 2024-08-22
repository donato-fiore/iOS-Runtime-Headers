// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXSTRIPGALLERYCOMPONENTVIEW_H
#define SXSTRIPGALLERYCOMPONENTVIEW_H

@class NSString, NSMutableSet, UIView, NSArray, NSMutableArray;
@protocol SXFullscreenCanvasShowable, SXItemizedScrollViewDataSource, SXItemizedScrollViewDelegate, SXImageViewDelegate, SXFullscreenCaptionDataSource, SXFullscreenCanvasControllerFactory, SXImageViewFactory;


#import "SXGalleryComponentView.h"
#import "SXFullscreenCanvasController.h"
#import "SXItemizedScrollView.h"
#import "SXMediaViewEvent.h"
#import "SXImageView.h"

@interface SXStripGalleryComponentView : SXGalleryComponentView <SXFullscreenCanvasShowable, SXItemizedScrollViewDataSource, SXItemizedScrollViewDelegate, SXImageViewDelegate, SXFullscreenCaptionDataSource>



@property (readonly, nonatomic) NSObject<SXFullscreenCanvasControllerFactory> *canvasControllerFactory; // ivar: _canvasControllerFactory
@property (readonly, nonatomic) CGFloat contentOffset; // ivar: _contentOffset
@property (readonly, nonatomic) CGFloat contentWidth; // ivar: _contentWidth
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *exposedGalleryItems; // ivar: _exposedGalleryItems
@property (retain, nonatomic) SXFullscreenCanvasController *fullScreenCanvasController; // ivar: _fullScreenCanvasController
@property (weak, nonatomic) UIView *fullscreenGestureView; // ivar: _fullscreenGestureView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *imageResources; // ivar: _imageResources
@property (readonly, nonatomic) NSObject<SXImageViewFactory> *imageViewFactory; // ivar: _imageViewFactory
@property (retain, nonatomic) NSMutableArray *imageViews; // ivar: _imageViews
@property (retain, nonatomic) SXItemizedScrollView *itemizedScrollView; // ivar: _itemizedScrollView
@property (nonatomic) NSUInteger lastPreloadViewIndex; // ivar: _lastPreloadViewIndex
@property (nonatomic) BOOL loadedAtleastOneImage; // ivar: _loadedAtleastOneImage
@property (retain, nonatomic) SXMediaViewEvent *mediaViewEvent; // ivar: _mediaViewEvent
@property (readonly, nonatomic) CGFloat rightContentInset; // ivar: _rightContentInset
@property (readonly) Class superclass;
@property (retain, nonatomic) SXImageView *targetGalleryItem; // ivar: _targetGalleryItem
@property (nonatomic) NSInteger visibleImageViewIndex; // ivar: _visibleImageViewIndex
@property (readonly, nonatomic) CGFloat xOffset; // ivar: _xOffset


-(BOOL)allowHierarchyRemoval;
-(BOOL)fullScreenCanvasController:(id)arg0 showable:(id)arg1 gestureRecognizerShouldBegin:(id)arg2 ;
-(BOOL)fullScreenCanvasController:(id)arg0 willShowShowable:(id)arg1 viewIndex:(NSUInteger)arg2 ;
-(BOOL)gestureShouldBegin:(id)arg0 ;
-(BOOL)itemizedScrollView:(id)arg0 isAllowedToAddViewInHierarchy:(NSUInteger)arg1 ;
-(BOOL)itemizedScrollViewWillReindex:(id)arg0 ;
-(BOOL)requestInteractivityFocusForFullScreenCanvasController:(id)arg0 ;
-(BOOL)usesThumbnailWithImageIdentifier:(id)arg0 ;
-(CGFloat)gutterBetweenItemsInNotPagingItemizedScrollView:(id)arg0 ;
-(NSUInteger)analyticsGalleryType;
-(NSUInteger)analyticsMediaType;
-(NSUInteger)fullScreenCanvasController:(id)arg0 numberOfViewsForShowable:(id)arg1 ;
-(NSUInteger)fullScreenCanvasController:(id)arg0 viewIndexForPoint:(struct CGPoint )arg1 inShowable:(id)arg2 ;
-(NSUInteger)numberOfViewsInItemizedScrollView:(id)arg0 ;
-(id)componentTextStyleForIdentifier:(id)arg0 inheritingFromComponentTextStyle:(id)arg1 ;
-(id)contentSizeCategoryForCaption:(id)arg0 ;
-(id)createViewForViewIndex:(NSUInteger)arg0 ;
-(id)fullScreenCanvasController:(id)arg0 canvasViewControllerForShowable:(id)arg1 completionBlock:(id)arg2 ;
-(id)fullScreenCanvasController:(id)arg0 captionForShowable:(id)arg1 viewIndex:(NSUInteger)arg2 ;
-(id)fullScreenCanvasController:(id)arg0 copyViewForShowable:(id)arg1 viewIndex:(NSUInteger)arg2 ;
-(id)fullScreenCanvasController:(id)arg0 originalViewForShowable:(id)arg1 viewIndex:(NSUInteger)arg2 ;
-(id)hostingView;
-(id)imageViewForLocation:(struct CGPoint )arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5 mediaSharingPolicyProvider:(id)arg6 imageViewFactory:(id)arg7 canvasControllerFactory:(id)arg8 ;
-(id)itemizedScrollView:(id)arg0 viewAtIndex:(NSUInteger)arg1 ;
-(id)textResizerForCaption:(id)arg0 ;
-(id)textRulesForCaption:(id)arg0 ;
-(id)textStyleForIdentifier:(id)arg0 ;
-(id)transitionContentView;
-(id)visibleGalleryItemViewForImageIdentifier:(id)arg0 ;
-(struct CGRect )fullScreenCanvasController:(id)arg0 fullScreenFrameForShowable:(id)arg1 viewIndex:(NSUInteger)arg2 withinRect:(struct CGRect )arg3 ;
-(struct CGRect )fullScreenCanvasController:(id)arg0 originalFrameForShowable:(id)arg1 onCanvasView:(id)arg2 viewIndex:(NSUInteger)arg3 ;
-(struct CGRect )itemizedScrollView:(id)arg0 frameForViewAtIndex:(NSUInteger)arg1 ;
-(struct CGRect )snapRegion;
-(struct CGRect )transitionContentFrame;
-(struct CGRect )transitionVisibleFrame;
-(void)createMediaViewEventForGalleryItem:(id)arg0 ;
-(void)discardContents;
-(void)finishMediaViewEvent;
-(void)forceImageViewFullscreen:(id)arg0 ;
-(void)fullScreenCanvasController:(id)arg0 didHideShowable:(id)arg1 viewIndex:(NSUInteger)arg2 ;
-(void)fullScreenCanvasController:(id)arg0 didShowShowable:(id)arg1 viewIndex:(NSUInteger)arg2 ;
-(void)fullScreenCanvasController:(id)arg0 shouldAddGestureView:(id)arg1 forShowable:(id)arg2 ;
-(void)fullScreenCanvasController:(id)arg0 showable:(id)arg1 didHideViewWithIndex:(NSUInteger)arg2 ;
-(void)fullScreenCanvasController:(id)arg0 showable:(id)arg1 didShowViewWithIndex:(NSUInteger)arg2 ;
-(void)fullScreenCanvasController:(id)arg0 showable:(id)arg1 shouldTransferToOriginalViewWithIndex:(NSUInteger)arg2 ;
-(void)fullScreenCanvasController:(id)arg0 showable:(id)arg1 willShowViewWithIndex:(NSUInteger)arg2 ;
-(void)fullScreenCanvasController:(id)arg0 willHideShowable:(id)arg1 viewIndex:(NSUInteger)arg2 ;
-(void)imageView:(id)arg0 didLoadAnimatedImage:(id)arg1 ;
-(void)imageView:(id)arg0 didLoadImage:(id)arg1 ofQuality:(int)arg2 ;
-(void)itemizedScrollView:(id)arg0 didChangeToActiveViewIndex:(NSUInteger)arg1 ;
-(void)itemizedScrollView:(id)arg0 didShowViewWithIndex:(NSUInteger)arg1 ;
-(void)loadComponent:(id)arg0 ;
-(void)preloadAdjacentViewsForIndex:(NSUInteger)arg0 ;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)receivedInfo:(id)arg0 fromLayoutingPhaseWithIdentifier:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)submitEvents;
-(void)trackExposedGalleryItems;
-(void)visibilityStateDidChangeFromState:(NSInteger)arg0 ;
-(void)willSubmitMediaExposureEvent:(id)arg0 ;


@end


#endif