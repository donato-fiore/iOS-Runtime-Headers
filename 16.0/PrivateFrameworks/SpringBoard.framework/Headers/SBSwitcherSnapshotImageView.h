// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWITCHERSNAPSHOTIMAGEVIEW_H
#define SBSWITCHERSNAPSHOTIMAGEVIEW_H

@class UIView, UIImageView, UIImage;



@interface SBSwitcherSnapshotImageView : UIView {
    UIImageView *_imageView;
    UIView *_scalingView;
    CGFloat _cornerRadius;
    NSUInteger _maskedCorners;
}


@property (nonatomic) BOOL allowStatusBarToOverlap; // ivar: _allowStatusBarToOverlap
@property (nonatomic) BOOL allowsEdgeAntialiasing; // ivar: _allowsEdgeAntialiasing
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) BOOL hasOpaqueContents; // ivar: _hasOpaqueContents
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) NSUInteger maskedCorners;
@property (nonatomic) NSInteger orientationForClassicLayout; // ivar: _orientationForClassicLayout
@property (nonatomic) BOOL stretchToFillBounds; // ivar: _stretchToFillBounds
@property (nonatomic) BOOL usesNonuniformScaling; // ivar: _usesNonuniformScaling


-(BOOL)_isUsingExternalClassicLayout;
-(CGFloat)_transformHorizontalScale;
-(CGFloat)_transformScale;
-(CGFloat)_transformVerticalScale;
-(id)initWithImage:(id)arg0 ;
-(struct CGAffineTransform )scalingTransform;
-(void)_updateCornerRadius;
-(void)layoutSubviews;


@end


#endif