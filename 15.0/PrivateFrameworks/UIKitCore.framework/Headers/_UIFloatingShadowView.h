// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFLOATINGSHADOWVIEW_H
#define _UIFLOATINGSHADOWVIEW_H



#import "UIView.h"
#import "UIImage.h"

@interface _UIFloatingShadowView : UIView {
    UIView *_shadowView;
    CATransform3D _shadowTransform;
}


@property (nonatomic) BOOL _disableOutsetShadowPath; // ivar: __disableOutsetShadowPath
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGRect shadowContentsCenter; // ivar: _shadowContentsCenter
@property (nonatomic, getter=isShadowEnabled) BOOL shadowEnabled; // ivar: _shadowEnabled
@property (nonatomic) CGFloat shadowExpansion; // ivar: _shadowExpansion
@property (retain, nonatomic) UIImage *shadowImage; // ivar: _shadowImage
@property (nonatomic) CGFloat shadowOpacity; // ivar: _shadowOpacity
@property (nonatomic) CGFloat shadowRadius; // ivar: _shadowRadius
@property (nonatomic) CGSize shadowSize; // ivar: _shadowSize
@property (nonatomic) CGFloat shadowVerticalOffset; // ivar: _shadowVerticalOffset


+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPath *)_shadowPathForSize:(struct CGSize )arg0 radius:(CGFloat)arg1 ;
-(void)_layoutShadow;
-(void)_updateShadowLayer;
-(void)layoutSubviews;


@end


#endif