// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSSIMAGEPREVIEWVIEWCONTROLLER_H
#define AXSSIMAGEPREVIEWVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, UITapGestureRecognizer, UIPinchGestureRecognizer, UIScrollView, UISwipeGestureRecognizer;
@protocol UIGestureRecognizerDelegate, UIScrollViewDelegate, AXSSImagePreviewViewControllerDelegate;



@interface AXSSImagePreviewViewController : UIViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate>



@property (retain, nonatomic) UIView *contentSnapshot; // ivar: _contentSnapshot
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXSSImagePreviewViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // ivar: _doubleTapGestureRecognizer
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (readonly) NSUInteger hash;
@property BOOL isManualZoomActive; // ivar: _isManualZoomActive
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // ivar: _pinchGestureRecognizer
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;
@property (retain, nonatomic) UISwipeGestureRecognizer *swipeGestureRecognizer; // ivar: _swipeGestureRecognizer


-(BOOL)_canShowWhileLocked;
-(BOOL)_isSnapshotViewAttached;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithContentSnapshot:(id)arg0 ;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(void)_addGestureRecognizers;
-(void)_centerImageIfNeeded;
-(void)_doubleTapGestureRecognized:(id)arg0 ;
-(void)_fitImageIfNeeded:(BOOL)arg0 ;
-(void)_imagePreviewViewControllerSetupUI;
-(void)_pinchGestureRecognized:(id)arg0 ;
-(void)_removeGestureRecognizers;
-(void)_stopScrollViewAnimations;
-(void)_swipeGestureRecognized:(id)arg0 ;
-(void)_toggleManualZoomMode;
-(void)_viewShouldExpand;
-(void)_zoomImage:(CGFloat)arg0 withContentOffset:(struct CGPoint )arg1 animated:(BOOL)arg2 ;
-(void)_zoomImageToBestScaleIfNeeded:(BOOL)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidZoom:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif