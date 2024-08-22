// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMIMAGEWELL_H
#define CAMIMAGEWELL_H

@class UIButton, UIView, NSMutableArray, UIImage, UIImageView, NSString;
@protocol UIGestureRecognizerDelegate;



@interface CAMImageWell : UIButton <UIGestureRecognizerDelegate>



@property (readonly, nonatomic) UIView *_containerView; // ivar: __containerView
@property (readonly, nonatomic) NSMutableArray *_dimmingViewQueue; // ivar: __dimmingViewQueue
@property (retain, nonatomic, setter=_setPlaceholderImage:) UIImage *_placeholderImage; // ivar: __placeholderImage
@property (retain, nonatomic, setter=_setThumbnailImage:) UIImage *_thumbnailImage; // ivar: __thumbnailImage
@property (readonly, nonatomic) UIImageView *_thumbnailImageView; // ivar: __thumbnailImageView
@property (retain, nonatomic, setter=_setUuid:) NSString *_uuid; // ivar: __uuid
@property (nonatomic) NSInteger cameraOrientation; // ivar: _cameraOrientation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic, getter=isScaledForInteraction) BOOL scaledForInteraction; // ivar: _scaledForInteraction
@property (readonly) Class superclass;
@property (nonatomic) UIEdgeInsets tappableEdgeInsets; // ivar: _tappableEdgeInsets
@property (readonly, nonatomic) UIImage *thumbnailImage;
@property (nonatomic, getter=isThumbnailImageHidden) BOOL thumbnailImageHidden; // ivar: _thumbnailImageHidden


-(CGFloat)_cornerRadiusForLayoutStyle:(NSInteger)arg0 ;
-(id)_placeholderImageForLayoutStyle:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(struct CGAffineTransform )_affineTransformForImageOrientation:(NSInteger)arg0 ;
-(struct CGRect )alignmentRectForFrame:(struct CGRect )arg0 scaledForInteraction:(BOOL)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_commonCAMImageWellInitializationWithLayoutStyle:(NSInteger)arg0 ;
-(void)_performEmitAnimationWithImage:(id)arg0 orientation:(NSInteger)arg1 withCompletionBlock:(id)arg2 ;
-(void)_removeFirstDimmingView;
-(void)_updateForLayoutStyle;
-(void)_updateThumbnailImageAnimated:(BOOL)arg0 ;
-(void)_updateThumbnailTransformFromCameraOrientation;
-(void)layoutSubviews;
-(void)prepareForThumbnailUpdateFromCapture;
-(void)recoverFromFailedThumbnailUpdate;


@end


#endif