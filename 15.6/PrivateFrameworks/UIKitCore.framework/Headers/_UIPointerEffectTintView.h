// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPOINTEREFFECTTINTVIEW_H
#define _UIPOINTEREFFECTTINTVIEW_H

@protocol _UILumaTrackingBackdropViewDelegate;


#import "UIVisualEffectView.h"

@interface _UIPointerEffectTintView : UIVisualEffectView <_UILumaTrackingBackdropViewDelegate>

 {
    NSUInteger _luminance;
    id *_tintColorMatrixProvider;
    BOOL _shouldAdjustIntensityOnPress;
}


@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (nonatomic, getter=isPressed) BOOL pressed; // ivar: _pressed


-(id)initWithTintColorMatrixProvider:(id)arg0 ;
-(void)_updateAlpha;
-(void)_updateBackgroundEffects;
-(void)backgroundLumaView:(id)arg0 didTransitionToLevel:(NSUInteger)arg1 ;


@end


#endif