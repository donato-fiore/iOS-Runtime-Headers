// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKTORIENTATIONMASKPICKER_H
#define UIKTORIENTATIONMASKPICKER_H

@class UIView, UIButton;



@interface UIKTOrientationMaskPicker : UIView {
    UIButton *_portrait;
    UIButton *_landscapeLeft;
    UIButton *_landscapeRight;
    UIButton *_portraitUpsideDown;
}


@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) NSUInteger orientationMask;


-(id)init;


@end


#endif