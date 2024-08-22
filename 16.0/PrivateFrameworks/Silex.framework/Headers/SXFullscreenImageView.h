// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXFULLSCREENIMAGEVIEW_H
#define SXFULLSCREENIMAGEVIEW_H

@class UIView, UIActivityIndicatorView, NSString, UITapGestureRecognizer, UIScrollView;
@protocol UIGestureRecognizerDelegate, UIScrollViewDelegate, SXFullscreenImageViewDelegate;


#import "SXImageView.h"

@interface SXFullscreenImageView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate>



@property (nonatomic) NSUInteger activeGestureCount; // ivar: _activeGestureCount
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) SXImageView *contentView; // ivar: _contentView
@property (nonatomic) CGRect contentViewFrame; // ivar: _contentViewFrame
@property (nonatomic) CGFloat currentScale; // ivar: _currentScale
@property (nonatomic) CGPoint currentTranslation; // ivar: _currentTranslation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXFullscreenImageViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // ivar: _doubleTapGestureRecognizer
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isZooming; // ivar: _isZooming
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger viewIndex; // ivar: _viewIndex


-(BOOL)allowsDismissal;
-(id)initWithContentView:(id)arg0 viewIndex:(NSUInteger)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(void)handleDoubleTap:(id)arg0 ;
-(void)layoutSubviews;
-(void)scrollViewDidZoom:(id)arg0 ;
-(void)setup;
-(void)setupGestures;
-(void)showLoadingIndicator:(BOOL)arg0 ;


@end


#endif