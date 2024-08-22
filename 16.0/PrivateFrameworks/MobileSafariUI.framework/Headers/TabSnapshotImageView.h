// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TABSNAPSHOTIMAGEVIEW_H
#define TABSNAPSHOTIMAGEVIEW_H

@class UIImageView;



@interface TabSnapshotImageView : UIImageView

@property (nonatomic) UIEdgeInsets cropInsets; // ivar: _cropInsets
@property (nonatomic) CGPoint imagePosition; // ivar: _imagePosition
@property (readonly, nonatomic) CGFloat imageScaleRatio;
@property (nonatomic) BOOL keepImageAligned; // ivar: _keepImageAligned


+(CGFloat)imageScaleRatioWithOnScreenImageSize:(struct CGSize )arg0 imageViewSize:(struct CGSize )arg1 cropInsets:(struct UIEdgeInsets )arg2 ;
+(struct CGRect )contentsRectWithSnapshotSize:(struct CGSize )arg0 imageViewSize:(struct CGSize )arg1 imagePosition:(struct CGPoint )arg2 cropInsets:(struct UIEdgeInsets )arg3 ;
+(struct CGSize )imageSizeOnScreen:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithImage:(id)arg0 ;
-(void)_setUpImageView;
-(void)layoutSubviews;
-(void)setImage:(id)arg0 ;
-(void)updateImageAlignment;


@end


#endif