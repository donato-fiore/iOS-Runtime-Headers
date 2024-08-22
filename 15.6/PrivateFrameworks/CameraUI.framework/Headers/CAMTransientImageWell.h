// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMTRANSIENTIMAGEWELL_H
#define CAMTRANSIENTIMAGEWELL_H

@class UIView, NSTimer, UIImageView, UISwipeGestureRecognizer, UITapGestureRecognizer, NSString, UIImage;
@protocol UIGestureRecognizerDelegate, CAMTransientImageWellDelegate;



@interface CAMTransientImageWell : UIView <UIGestureRecognizerDelegate>



@property (retain, nonatomic) NSTimer *_autoStashTimer; // ivar: __autoStashTimer
@property (retain, nonatomic, setter=_setImageView:) UIImageView *_imageView; // ivar: __imageView
@property (readonly, nonatomic) UISwipeGestureRecognizer *_stashGestureRecognizer; // ivar: __stashGestureRecognizer
@property (nonatomic, getter=_isStashed, setter=_setStashed:) BOOL _stashed; // ivar: __stashed
@property (readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer; // ivar: __tapGestureRecognizer
@property (readonly, nonatomic) UISwipeGestureRecognizer *_unstashGestureRecognizer; // ivar: __unstashGestureRecognizer
@property (nonatomic) BOOL autoStashesImages; // ivar: _autoStashesImages
@property (nonatomic) BOOL currentImageHidden;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CAMTransientImageWellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) CGRect imageFrame;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly) Class superclass;


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_unorientedFrameForImageView:(id)arg0 ;
-(struct CGSize )_imageViewSizeForContentSize:(struct CGSize )arg0 ;
-(void)_cancelAutoStashTimer;
-(void)_dismissImageAnimated:(BOOL)arg0 ;
-(void)_dismissImageView:(id)arg0 animated:(BOOL)arg1 ;
-(void)_handleAutoStashTimerFired:(id)arg0 ;
-(void)_handleStashSwipe:(id)arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)_handleUnstashSwipe:(id)arg0 ;
-(void)_restartAutoStashTimer;
-(void)_restartAutoStashTimerWithDuration:(CGFloat)arg0 ;
-(void)clearImageAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;


@end


#endif