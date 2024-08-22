// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSSTICKERVIEW_H
#define MSSTICKERVIEW_H

@class UIView, NSString, NSArray, CKAnimatedImage, CKImageData, UIImageView, UILongPressGestureRecognizer, NSError, UIImage, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate, CKAnimationTimerObserver;


#import "MSSticker.h"

@interface MSStickerView : UIView <UIGestureRecognizerDelegate, CKAnimationTimerObserver>



@property (nonatomic) BOOL animating; // ivar: _animating
@property (nonatomic) CGFloat animationDuration; // ivar: _animationDuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *frames; // ivar: _frames
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKAnimatedImage *image; // ivar: _image
@property (retain, nonatomic) CKImageData *imageData; // ivar: _imageData
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL initialLayoutComplete; // ivar: _initialLayoutComplete
@property (readonly, nonatomic) BOOL isAnimated;
@property (nonatomic) BOOL isPeeled; // ivar: _isPeeled
@property (readonly, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // ivar: _longPressRecognizer
@property (retain, nonatomic) MSSticker *sticker; // ivar: _sticker
@property (retain, nonatomic) NSError *stickerError; // ivar: _stickerError
@property (retain, nonatomic) UIImage *stickerImage; // ivar: _stickerImage
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITapGestureRecognizer *tapRecognizer; // ivar: _tapRecognizer


-(BOOL)isAnimating;
-(id)accessibilityLabel;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 sticker:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureStickerView;
-(void)_loadAnimatedStickerfIfNecessary;
-(void)_loadSticker;
-(void)_prepareForReuse;
-(void)_resetPeel;
-(void)_stickerPreviewCachePreviewDidChange:(id)arg0 ;
-(void)_swapWithOutlineImage;
-(void)_updateStickerView;
-(void)animationTimerFired:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)handleLongPress:(id)arg0 ;
-(void)handleTap:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForSnapshotting;
-(void)stageStickerForce:(BOOL)arg0 ;
-(void)startAnimating;
-(void)stopAnimating;
-(void)updateAnimationTimerObserving;


@end


#endif