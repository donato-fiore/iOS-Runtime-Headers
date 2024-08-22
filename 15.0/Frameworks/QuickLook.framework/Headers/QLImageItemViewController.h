// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLIMAGEITEMVIEWCONTROLLER_H
#define QLIMAGEITEMVIEWCONTROLLER_H

@class UIImageView, NSNumber, NSDictionary, NSString, UIImage, UIView;
@protocol QLAnimationTimerObserver, UIAdaptivePresentationControllerDelegate, QLImageAnalysisManagerDelegate;


#import "QLScrollableContentItemViewController.h"
#import "QLAnimatedImage.h"
#import "QLImageAnalysisManager.h"

@interface QLImageItemViewController : QLScrollableContentItemViewController <QLAnimationTimerObserver, UIAdaptivePresentationControllerDelegate, QLImageAnalysisManagerDelegate>

 {
    UIImageView *_imageView;
    QLAnimatedImage *_animatedImage;
    QLImageAnalysisManager *_imageAnalysisManager;
    CGFloat _initialTimeStamp;
    CGFloat _currentPlaybackTime;
    CGSize _imageSize;
    BOOL _imageIsAnimated;
    BOOL _isFullScreen;
    NSNumber *_savedFullScreenState;
}


@property (readonly, nonatomic) NSDictionary *clientPreviewOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIView *imageAnalysisView;
@property (readonly) Class superclass;


-(BOOL)canPerformFirstTimeAppearanceActions:(NSUInteger)arg0 ;
-(BOOL)draggableViewShouldStartDragSession:(id)arg0 ;
-(BOOL)shouldAcceptTouch:(id)arg0 ofGestureRecognizer:(id)arg1 ;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(id)draggableView;
-(id)toolbarButtonsForTraitCollection:(id)arg0 ;
-(void)_setupAndStartImageAnalysis;
-(void)_updateImageAnalysisViewsConstraints;
-(void)adjustImageInteractionForScrollEvent:(id)arg0 ;
-(void)animationTimerFired:(CGFloat)arg0 ;
-(void)buttonPressedWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)didScroll:(id)arg0 ;
-(void)didZoom:(id)arg0 ;
-(void)imageAnalyzerWantsUpdateInfoButtonWithAnimation:(BOOL)arg0 ;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)performFirstTimeAppearanceActions:(NSUInteger)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)previewBecameFullScreen:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg0 ;
-(void)previewDidDisappear:(BOOL)arg0 ;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif