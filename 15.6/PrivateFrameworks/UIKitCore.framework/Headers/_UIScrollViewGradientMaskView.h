// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISCROLLVIEWGRADIENTMASKVIEW_H
#define _UISCROLLVIEWGRADIENTMASKVIEW_H



#import "UIView.h"

@interface _UIScrollViewGradientMaskView : UIView

@property (nonatomic) NSInteger gradientDirection; // ivar: _gradientDirection
@property (nonatomic) UIEdgeInsets gradientEndInsets; // ivar: _gradientEndInsets
@property (nonatomic) UIEdgeInsets gradientIntensities; // ivar: _gradientIntensities
@property (nonatomic) UIEdgeInsets gradientStartInsets; // ivar: _gradientStartInsets


+(Class)layerClass;
-(id)gradientLayer;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateWithFrame:(struct CGRect )arg0 gradientStartInsets:(struct UIEdgeInsets )arg1 gradientEndInsets:(struct UIEdgeInsets )arg2 gradientIntensities:(struct UIEdgeInsets )arg3 ;


@end


#endif