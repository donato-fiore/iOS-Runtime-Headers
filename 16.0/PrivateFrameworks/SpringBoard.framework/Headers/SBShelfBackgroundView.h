// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSHELFBACKGROUNDVIEW_H
#define SBSHELFBACKGROUNDVIEW_H

@class UIView, MTMaterialView;



@interface SBShelfBackgroundView : UIView {
    MTMaterialView *_backgroundView;
    UIView *_backgroundMaskView;
    UIView *_backgroundMaskInnerRectangleView;
}


@property (nonatomic) CGRect extendedBlurRect; // ivar: _extendedBlurRect
@property (nonatomic) CGFloat weighting;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif