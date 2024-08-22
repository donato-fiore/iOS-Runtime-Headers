// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPALETTETOOLPICKEREDGEVIEW_H
#define PKPALETTETOOLPICKEREDGEVIEW_H

@class UIView, CAGradientLayer;



@interface PKPaletteToolPickerEdgeView : UIView {
    CAGradientLayer *_gradientLayer;
    CAGradientLayer *_maskLayer;
    BOOL _isVerticalRight;
    BOOL _flipHorizontally;
    BOOL _flipVertically;
    NSInteger _axis;
}




-(id)init;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif