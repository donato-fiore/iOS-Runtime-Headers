// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXIMAGECOMPONENTVIEW_H
#define SXIMAGECOMPONENTVIEW_H

@class NSString;
@protocol UIGestureRecognizerDelegate, SXImageViewDelegate, SXDragManagerDataSource, SXImageViewFactory, SXMediaSharingPolicyProvider;


#import "SXMediaComponentView.h"
#import "SXAnimatedImageController.h"
#import "SXDragManager.h"
#import "SXImageView.h"

@interface SXImageComponentView : SXMediaComponentView <UIGestureRecognizerDelegate, SXImageViewDelegate, SXDragManagerDataSource>



@property (retain, nonatomic) SXAnimatedImageController *animatedImageController; // ivar: _animatedImageController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SXDragManager *dragManager; // ivar: _dragManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SXImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) NSObject<SXImageViewFactory> *imageViewFactory; // ivar: _imageViewFactory
@property (readonly, nonatomic) NSObject<SXMediaSharingPolicyProvider> *mediaSharingPolicyProvider; // ivar: _mediaSharingPolicyProvider
@property (readonly) Class superclass;


-(BOOL)usesThumbnailWithImageIdentifier:(id)arg0 ;
-(NSUInteger)analyticsMediaType;
-(id)contentViewForBehavior:(id)arg0 ;
-(id)dragManager:(id)arg0 dragableAtLocation:(struct CGPoint )arg1 ;
-(id)imageResource;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5 imageViewFactory:(id)arg6 mediaSharingPolicyProvider:(id)arg7 ;
-(id)transitionContentView;
-(id)viewForDragManager:(id)arg0 ;
-(struct CGRect )imageFrame;
-(struct CGRect )originalFrameForContentView:(id)arg0 behavior:(id)arg1 ;
-(struct CGRect )transitionContentFrame;
-(void)dealloc;
-(void)discardContents;
-(void)imageView:(id)arg0 didLoadAnimatedImage:(id)arg1 ;
-(void)imageView:(id)arg0 didLoadImage:(id)arg1 ;
-(void)layoutImageView;
-(void)loadComponent:(id)arg0 ;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)renderContents;
-(void)visibilityStateDidChangeFromState:(NSInteger)arg0 ;


@end


#endif