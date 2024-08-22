// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXMOSAICGALLERYCOMPONENTVIEW_H
#define SXMOSAICGALLERYCOMPONENTVIEW_H

@class NSString, NSMutableSet, UIView, NSMutableArray;
@protocol SXMosaicGalleryLayouterDataSource, SXFullscreenCanvasShowable, SXImageViewDelegate, SXFullscreenCaptionDataSource, SXViewportChangeListener, SXGalleryItemImageViewFactory;


#import "SXGalleryComponentView.h"
#import "SXFullscreenCanvasController.h"
#import "SXMosaicGalleryLayouter.h"
#import "SXMediaViewEvent.h"

@interface SXMosaicGalleryComponentView : SXGalleryComponentView <SXMosaicGalleryLayouterDataSource, SXFullscreenCanvasShowable, SXImageViewDelegate, SXFullscreenCaptionDataSource, SXViewportChangeListener>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *exposedGalleryItems; // ivar: _exposedGalleryItems
@property (readonly, nonatomic) SXFullscreenCanvasController *fullScreenCanvasController; // ivar: _fullScreenCanvasController
@property (retain, nonatomic) SXMosaicGalleryLayouter *galleryLayouter; // ivar: _galleryLayouter
@property (retain, nonatomic) UIView *galleryView; // ivar: _galleryView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXGalleryItemImageViewFactory> *imageViewFactory; // ivar: _imageViewFactory
@property (readonly, nonatomic) NSMutableArray *imageViews; // ivar: _imageViews
@property (nonatomic, getter=isLayoutRequired) BOOL layoutRequired; // ivar: _layoutRequired
@property (nonatomic) BOOL loadedAtleastOneImage; // ivar: _loadedAtleastOneImage
@property (retain, nonatomic) SXMediaViewEvent *mediaViewEvent; // ivar: _mediaViewEvent
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableArray *visibleImageViews; // ivar: _visibleImageViews


-(BOOL)allowHierarchyRemoval;
-(BOOL)fullScreenCanvasController:(id)arg0 showable:(id)arg1 gestureRecognizerShouldBegin:(id)arg2 ;
-(BOOL)fullScreenCanvasController:(id)arg0 willShowShowable:(id)arg1 viewIndex:(NSUInteger)arg2 ;
-(BOOL)galleryLayouter:(id)arg0 viewIsCurrentlyFullscreenForItemAtIndex:(NSUInteger)arg1 ;
-(BOOL)requestInteractivityFocusForFullScreenCanvasController:(id)arg0 ;
-(BOOL)shouldSubmitMediaExposureEventForExposedBounds:(struct CGRect )arg0 ;
-(NSUInteger)analyticsGalleryType;
-(NSUInteger)analyticsMediaType;
-(NSUInteger)fullScreenCanvasController:(id)arg0 numberOfViewsForShowable:(id)arg1 ;
-(NSUInteger)fullScreenCanvasController:(id)arg0 viewIndexForPoint:(struct CGPoint )arg1 inShowable:(id)arg2 ;
-(NSUInteger)numberOfItemsForGalleryLayouter:(id)arg0 ;
-(id)componentTextStyleForIdentifier:(id)arg0 inheritingFromComponentTextStyle:(id)arg1 ;
-(id)contentSizeCategoryForCaption:(id)arg0 ;
-(id)documentColumnLayoutForGalleryLayouter:(id)arg0 ;
-(id)fullScreenCanvasController:(id)arg0 canvasViewControllerForShowable:(id)arg1 completionBlock:(id)arg2 ;
-(id)fullScreenCanvasController:(id)arg0 captionForShowable:(id)arg1 viewIndex:(NSUInteger)arg2 ;
-(id)fullScreenCanvasController:(id)arg0 originalViewForShowable:(id)arg1 viewIndex:(NSUInteger)arg2 ;
-(id)galleryLayouter:(id)arg0 viewForItemAtIndex:(NSUInteger)arg1 ;
-(id)imageViewForItemAtIndex:(NSUInteger)arg0 ;
-(id)imageViewForLocation:(struct CGPoint )arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5 mediaSharingPolicyProvider:(id)arg6 imageViewFactory:(id)arg7 canvasControllerFactory:(id)arg8 ;
-(id)textResizerForCaption:(id)arg0 ;
-(id)textRulesForCaption:(id)arg0 ;
-(id)textStyleForIdentifier:(id)arg0 ;
-(struct CGRect )fullScreenCanvasController:(id)arg0 fullScreenFrameForShowable:(id)arg1 viewIndex:(NSUInteger)arg2 withinRect:(struct CGRect )arg3 ;
-(struct CGRect )fullScreenCanvasController:(id)arg0 originalFrameForShowable:(id)arg1 onCanvasView:(id)arg2 viewIndex:(NSUInteger)arg3 ;
-(struct CGSize )galleryLayouter:(id)arg0 dimensionsForItemAtIndex:(NSUInteger)arg1 ;
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
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)receivedInfo:(id)arg0 fromLayoutingPhaseWithIdentifier:(id)arg1 ;
-(void)renderContents;
-(void)renderContentsInDrawableRect;
-(void)submitEvents;
-(void)visibleBoundsChanged;
-(void)willSubmitMediaExposureEvent:(id)arg0 ;


@end


#endif