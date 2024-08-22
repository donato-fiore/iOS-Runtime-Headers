// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLPREVIEWSCROLLVIEW_H
#define QLPREVIEWSCROLLVIEW_H

@class UIScrollView, NSString;
@protocol UIScrollViewDelegate, QLPreviewScrollViewZoomDelegate;



@interface QLPreviewScrollView : UIScrollView <UIScrollViewDelegate>

 {
    BOOL _inSizeChange;
    CGSize _lastUpdatedSize;
    BOOL _readyToCancelPanGesture;
}


@property (readonly) CGFloat contentIsSmallerThanView; // ivar: _contentIsSmallerThanView
@property (nonatomic) CGSize contentViewSize; // ivar: _contentViewSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CGFloat fillZoomScale; // ivar: _fillZoomScale
@property (readonly) CGFloat fitZoomScale; // ivar: _fitZoomScale
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat maxZoomScale; // ivar: _maxZoomScale
@property (readonly) CGFloat minZoomScale; // ivar: _minZoomScale
@property (nonatomic) BOOL needsZoomUpdate; // ivar: _needsZoomUpdate
@property UIEdgeInsets peripheryInsetsLandscape; // ivar: _peripheryInsetsLandscape
@property UIEdgeInsets peripheryInsetsPortrait; // ivar: _peripheryInsetsPortrait
@property (readonly) CGFloat pinchMaxZoomScale; // ivar: _pinchMaxZoomScale
@property (nonatomic) BOOL preventZoomUpdate; // ivar: _preventZoomUpdate
@property BOOL shouldFit; // ivar: _shouldFit
@property (readonly) Class superclass;
@property (weak) NSObject<QLPreviewScrollViewZoomDelegate> *zoomDelegate; // ivar: _zoomDelegate


-(CGFloat)_maxZoomScaleForContentSize:(struct CGSize )arg0 ;
-(id)init;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(struct CGRect )zoomRectForScale:(CGFloat)arg0 withCenter:(struct CGPoint )arg1 ;
-(void)_updateScrollViewZomming;
-(void)layoutSubviews;
-(void)resetZoomScale;
-(void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(CGFloat)arg2 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidZoom:(id)arg0 ;
-(void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;
-(void)updateZoomScales;
-(void)updateZoomScalesWithSize:(struct CGSize )arg0 ;


@end


#endif