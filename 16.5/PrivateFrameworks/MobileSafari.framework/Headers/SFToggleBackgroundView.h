// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFTOGGLEBACKGROUNDVIEW_H
#define SFTOGGLEBACKGROUNDVIEW_H

@class UIView;



@interface SFToggleBackgroundView : UIView {
    CGSize _shapeSize;
    NSInteger _cornerRoundingMode;
}




+(Class)layerClass;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif