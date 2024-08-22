// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMETALVIEW_H
#define PKMETALVIEW_H

@class UIView, CABackdropLayer, CAMetalLayer;



@interface PKMetalView : UIView {
    CABackdropLayer *_backdropLayer;
    CAMetalLayer *_metalLayer;
    BOOL _isFixedPixelSize;
    BOOL _doubleBuffered;
    BOOL _useLuminanceColorFilter;
    NSUInteger _pixelFormat;
    CGSize _fixedPixelSize;
}




-(void)accessibilityInvertColorsStatusDidChange:(id)arg0 ;


@end


#endif