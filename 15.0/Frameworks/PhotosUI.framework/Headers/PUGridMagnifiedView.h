// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUGRIDMAGNIFIEDVIEW_H
#define PUGRIDMAGNIFIEDVIEW_H

@class UIView, UIImageView, UIImage, NSIndexPath;



@interface PUGridMagnifiedView : UIView

@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIImage *itemImage; // ivar: _itemImage
@property (retain, nonatomic) NSIndexPath *itemIndexPath; // ivar: _itemIndexPath
@property (nonatomic) UIEdgeInsets magnifiedDragEdgeInsets; // ivar: _magnifiedDragEdgeInsets
@property (nonatomic) CGSize magnifiedImageSize; // ivar: _magnifiedImageSize


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )imageWindFrame;
-(struct CGRect )magnifiedFrameForParentLocation:(struct CGPoint )arg0 ;
-(struct CGRect )photoFrameForViewFrame:(struct CGRect )arg0 ;
-(struct CGRect )pinFrameToParentFrame:(struct CGRect )arg0 ;
-(struct CGRect )viewFrameForPhotoFrame:(struct CGRect )arg0 ;
-(void)hideAnimate:(BOOL)arg0 ;
-(void)magnifyFromImageFrame:(struct CGRect )arg0 toLocation:(struct CGPoint )arg1 animate:(BOOL)arg2 ;
-(void)moveToLocation:(struct CGPoint )arg0 animate:(BOOL)arg1 ;
-(void)setImageAnimate:(BOOL)arg0 ;
-(void)setShadowOffset:(struct CGSize )arg0 ;
-(void)setShadowOpacity:(CGFloat)arg0 ;
-(void)setShadowRadius:(CGFloat)arg0 ;


@end


#endif