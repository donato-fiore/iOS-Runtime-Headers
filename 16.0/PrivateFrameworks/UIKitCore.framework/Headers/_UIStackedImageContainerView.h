// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTACKEDIMAGECONTAINERVIEW_H
#define _UISTACKEDIMAGECONTAINERVIEW_H

@class NSString;
@protocol _UIImageViewOverlayViewDelegate, UINamedLayerStack;


#import "UIView.h"
#import "UIMotionEffectGroup.h"
#import "_UIStackedImageConfiguration.h"
#import "UIImage.h"

@interface _UIStackedImageContainerView : UIView <_UIImageViewOverlayViewDelegate>

 {
    UIMotionEffectGroup *_stackMotionEffects;
}


@property (copy, nonatomic) _UIStackedImageConfiguration *config; // ivar: _config
@property (retain, nonatomic) NSObject<UINamedLayerStack> *constructedStackImage; // ivar: _constructedStackImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGPoint focusDirection;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL installsMotionEffectsWhenFocused; // ivar: _installsMotionEffectsWhenFocused
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (nonatomic, getter=isStackFocused) BOOL stackFocused;
@property (retain, nonatomic) UIImage *stackImage; // ivar: _stackImage
@property (readonly) Class superclass;


+(Class)layerClass;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg0 forMotionEffect:(id)arg1 ;
-(id)_focusedFrameGuide;
-(id)_focusedFrameGuideCreateIfNecessary:(BOOL)arg0 ;
-(id)_imageContainerLayer;
-(id)_preferredConfigurationForFocusAnimation:(NSInteger)arg0 inContext:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_installMotionEffects;
-(void)_uninstallMotionEffects;
-(void)_updateContainerLayerImages;
-(void)_updateFocusedFrameGuideConstraintsIfApplicable;
-(void)_updateOverlayLayer;
-(void)dealloc;
-(void)overlayView:(id)arg0 didChangeClipsToBounds:(BOOL)arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif