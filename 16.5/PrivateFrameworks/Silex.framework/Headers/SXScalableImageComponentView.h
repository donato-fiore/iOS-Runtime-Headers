// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXSCALABLEIMAGECOMPONENTVIEW_H
#define SXSCALABLEIMAGECOMPONENTVIEW_H

@class NSString, UIView;
@protocol SXFullscreenCanvasShowable, SXImageViewDelegate, SXFullscreenCaptionDataSource, SXDragManagerDataSource, SXFullscreenCanvasControllerFactory, SXImageViewFactory, SXMediaSharingPolicyProvider;


#import "SXMediaComponentView.h"
#import "SXMediaViewEvent.h"
#import "SXDragManager.h"
#import "SXFullscreenCanvasController.h"
#import "SXImageResource.h"
#import "SXImageView.h"

@interface SXScalableImageComponentView : SXMediaComponentView <SXFullscreenCanvasShowable, SXImageViewDelegate, SXFullscreenCaptionDataSource, SXDragManagerDataSource>



@property (retain, nonatomic) SXMediaViewEvent *activeViewEvent; // ivar: _activeViewEvent
@property (readonly, nonatomic) NSObject<SXFullscreenCanvasControllerFactory> *canvasControllerFactory; // ivar: _canvasControllerFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SXDragManager *dragManager; // ivar: _dragManager
@property (retain, nonatomic) SXFullscreenCanvasController *fullScreenCanvasController; // ivar: _fullScreenCanvasController
@property (weak, nonatomic) UIView *gestureView; // ivar: _gestureView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SXImageResource *imageResource; // ivar: _imageResource
@property (readonly, nonatomic) SXImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) NSObject<SXImageViewFactory> *imageViewFactory; // ivar: _imageViewFactory
@property (readonly, nonatomic) NSObject<SXMediaSharingPolicyProvider> *mediaSharingPolicyProvider; // ivar: _mediaSharingPolicyProvider
@property (nonatomic) CGRect previousContentFrame; // ivar: _previousContentFrame
@property (readonly) Class superclass;


-(BOOL)allowHierarchyRemoval;
-(BOOL)fullScreenCanvasController:(id)arg0 showable:(id)arg1 gestureRecognizerShouldBegin:(id)arg2 ;
-(BOOL)fullScreenCanvasController:(id)arg0 willShowShowable:(id)arg1 viewIndex:(NSUInteger)arg2 ;
-(BOOL)gestureShouldBegin:(id)arg0 ;
-(BOOL)requestInteractivityFocusForFullScreenCanvasController:(id)arg0 ;
-(BOOL)usesThumbnailWithImageIdentifier:(id)arg0 ;
-(NSUInteger)analyticsMediaType;
-(NSUInteger)fullScreenCanvasController:(id)arg0 numberOfViewsForShowable:(id)arg1 ;
-(NSUInteger)fullScreenCanvasController:(id)arg0 viewIndexForPoint:(struct CGPoint )arg1 inShowable:(id)arg2 ;
-(id)componentTextStyleForIdentifier:(id)arg0 inheritingFromComponentTextStyle:(id)arg1 ;
-(id)contentSizeCategoryForCaption:(id)arg0 ;
-(id)dragManager:(id)arg0 dragableAtLocation:(struct CGPoint )arg1 ;
-(id)fullScreenCanvasController:(id)arg0 canvasViewControllerForShowable:(id)arg1 completionBlock:(id)arg2 ;
-(id)fullScreenCanvasController:(id)arg0 captionForShowable:(id)arg1 viewIndex:(NSUInteger)arg2 ;
-(id)fullScreenCanvasController:(id)arg0 originalViewForShowable:(id)arg1 viewIndex:(NSUInteger)arg2 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5 imageViewFactory:(id)arg6 canvasControllerFactory:(id)arg7 mediaSharingPolicyProvider:(id)arg8 ;
-(id)textResizerForCaption:(id)arg0 ;
-(id)textRulesForCaption:(id)arg0 ;
-(id)textStyleForIdentifier:(id)arg0 ;
-(id)transitionContentView;
-(id)viewForDragManager:(id)arg0 ;
-(struct CGRect )fullScreenCanvasController:(id)arg0 fullScreenFrameForShowable:(id)arg1 viewIndex:(NSUInteger)arg2 withinRect:(struct CGRect )arg3 ;
-(struct CGRect )fullScreenCanvasController:(id)arg0 originalFrameForShowable:(id)arg1 onCanvasView:(id)arg2 viewIndex:(NSUInteger)arg3 ;
-(struct CGRect )transitionContentFrame;
-(void)createMediaViewEvent;
-(void)discardContents;
-(void)finishMediaViewEvent;
-(void)fullScreenCanvasController:(id)arg0 didHideShowable:(id)arg1 viewIndex:(NSUInteger)arg2 ;
-(void)fullScreenCanvasController:(id)arg0 shouldAddGestureView:(id)arg1 forShowable:(id)arg2 ;
-(void)fullScreenCanvasController:(id)arg0 showable:(id)arg1 shouldTransferToOriginalViewWithIndex:(NSUInteger)arg2 ;
-(void)fullScreenCanvasController:(id)arg0 willHideShowable:(id)arg1 viewIndex:(NSUInteger)arg2 ;
-(void)fullScreenCanvasController:(id)arg0 willReturnToFullscreenForShowable:(id)arg1 viewIndex:(NSUInteger)arg2 ;
-(void)imageView:(id)arg0 didLoadAnimatedImage:(id)arg1 ;
-(void)imageView:(id)arg0 didLoadImage:(id)arg1 ofQuality:(int)arg2 ;
-(void)layoutImageView;
-(void)loadComponent:(id)arg0 ;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)renderContents;
-(void)submitEvents;
-(void)visibilityStateDidChangeFromState:(NSInteger)arg0 ;


@end


#endif