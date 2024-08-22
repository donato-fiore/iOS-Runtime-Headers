// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLSCROLLABLECONTENTITEMVIEWCONTROLLER_H
#define QLSCROLLABLECONTENTITEMVIEWCONTROLLER_H

@class UITapGestureRecognizer, UIView, NSString;
@protocol QLPreviewScrollViewZoomDelegate;


#import "QLItemViewController.h"
#import "QLPreviewScrollView.h"

@interface QLScrollableContentItemViewController : QLItemViewController <QLPreviewScrollViewZoomDelegate>

 {
    QLPreviewScrollView *_scrollView;
    UITapGestureRecognizer *_doubleTapGesture;
    BOOL _isVisible;
}


@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldFit; // ivar: _shouldFit
@property (readonly) Class superclass;


-(BOOL)canPinchToDismiss;
-(BOOL)previewScrollViewShouldResizeContentBasedOnPeripheryInsets:(id)arg0 ;
-(BOOL)shouldLayoutContentBasedOnPeripheryInsets;
-(BOOL)supportsScrollingUpAndDownUsingKeyCommands;
-(CGFloat)previewScrollView:(id)arg0 extraMinimumZoomForMinimumZoomScale:(CGFloat)arg1 maximumZoomScale:(CGFloat)arg2 ;
-(id)init;
-(id)parallaxView;
-(id)scrollView;
-(struct CGSize )imageSize;
-(void)_doubleTapRecognized:(id)arg0 ;
-(void)_updateScrollViewZoomUpdate:(struct CGSize )arg0 ;
-(void)didEndZoomingAtScale:(CGFloat)arg0 ;
-(void)didScroll:(id)arg0 ;
-(void)didZoom:(id)arg0 ;
-(void)loadView;
-(void)previewDidAppear:(BOOL)arg0 ;
-(void)previewDidDisappear:(BOOL)arg0 ;
-(void)previewScrollView:(id)arg0 didEndZoomingAtScale:(CGFloat)arg1 ;
-(void)previewScrollViewDidScroll:(id)arg0 ;
-(void)previewScrollViewDidZoom:(id)arg0 ;
-(void)previewScrollViewWillBeginZooming:(id)arg0 ;
-(void)previewWillAppear:(BOOL)arg0 ;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;
-(void)transitionWillFinish:(BOOL)arg0 didComplete:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willBeginZooming;


@end


#endif