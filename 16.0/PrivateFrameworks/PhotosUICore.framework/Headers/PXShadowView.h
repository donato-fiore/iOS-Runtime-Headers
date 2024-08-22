// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHADOWVIEW_H
#define PXSHADOWVIEW_H

@class UIView, UIImage, UIImageView, NSShadow;



@interface PXShadowView : UIView {
    UIImage *_resizableShadowImage;
    BOOL _resizableShadowImageNeedsUpdate;
    CGRect _contentsRect;
    UIImageView *_imageView;
}


@property (nonatomic) CGRect castingFrame; // ivar: _castingFrame
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (copy, nonatomic) NSShadow *shadow; // ivar: _shadow


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_invalidateResizableShadowImage;
-(void)layoutSubviews;


@end


#endif