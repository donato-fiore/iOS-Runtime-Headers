// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIDEOSEXTRASIMAGEVIEWCONTROLLER_H
#define VIDEOSEXTRASIMAGEVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, MPUContentSizeLayoutConstraint, NSString, UILabel, NSAttributedString, NSArray, UIImage, UIView;
@protocol VideosExtrasZoomingImageTransitionParticipant;


#import "VideosExtrasZoomingImageInteractiveTransitionSourceContext.h"
#import "VideosExtrasZoomableImageView.h"

@interface VideosExtrasImageViewController : UIViewController <VideosExtrasZoomingImageTransitionParticipant>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (nonatomic) BOOL allowsPinchingImageForInteractiveZoomingImageTransition; // ivar: _allowsPinchingImageForInteractiveZoomingImageTransition
@property (retain, nonatomic) MPUContentSizeLayoutConstraint *bottomLabelConstraint; // ivar: _bottomLabelConstraint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) MPUContentSizeLayoutConstraint *descriptionLeadingConstraint; // ivar: _descriptionLeadingConstraint
@property (retain, nonatomic) NSAttributedString *descriptionString;
@property (copy, nonatomic) NSArray *gestureRecognizers; // ivar: _gestureRecognizers
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) NSUInteger imageIndex; // ivar: _imageIndex
@property (retain, nonatomic) VideosExtrasZoomingImageInteractiveTransitionSourceContext *interactiveTransitionSourceContext; // ivar: _interactiveTransitionSourceContext
@property (nonatomic) BOOL overlayHidden; // ivar: _overlayHidden
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) MPUContentSizeLayoutConstraint *subtitleLeadingConstraint; // ivar: _subtitleLeadingConstraint
@property (retain, nonatomic) NSAttributedString *subtitleString;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *textContainmentView; // ivar: _textContainmentView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSAttributedString *titleString;
@property (retain, nonatomic) MPUContentSizeLayoutConstraint *topLabelConstraint; // ivar: _topLabelConstraint
@property (retain, nonatomic) VideosExtrasZoomableImageView *zoomableImageView; // ivar: _zoomableImageView
@property (copy, nonatomic) NSString *zoomingImageTransitionIdentifier; // ivar: _zoomingImageTransitionIdentifier


-(BOOL)prefersStatusBarHidden;
-(void)_handleDoubleTap:(id)arg0 ;
-(void)_handlePinch:(id)arg0 ;
-(void)_handleSingleTap:(id)arg0 ;
-(void)dealloc;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg0 transitionFinished:(BOOL)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg0 ;
-(void)prepareZoomingImageTransitionWithContext:(id)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif