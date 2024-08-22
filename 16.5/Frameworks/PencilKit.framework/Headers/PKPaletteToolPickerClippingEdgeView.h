// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPALETTETOOLPICKERCLIPPINGEDGEVIEW_H
#define PKPALETTETOOLPICKERCLIPPINGEDGEVIEW_H

@class UIView, CAGradientLayer;



@interface PKPaletteToolPickerClippingEdgeView : UIView {
    CAGradientLayer *_gradientLayer;
    BOOL _flipHorizontally;
    NSInteger _axis;
}




-(id)init;
-(void)layoutSubviews;


@end


#endif