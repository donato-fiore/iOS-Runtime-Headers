// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC3VFX7VFXVIEW_H
#define _TTC3VFX7VFXVIEW_H

@class UIView, UIColor;


#import "_TtC3VFX9VFXEffect.h"
#import "_TtC3VFX8VFXScene.h"

@interface _TtC3VFX7VFXView : UIView {
    ? delegateImpl;
    ? coreView;
}


@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) _TtC3VFX9VFXEffect *effect; // ivar: effect
@property (nonatomic) BOOL hidden;
@property (nonatomic) NSUInteger pixelFormat;
@property (nonatomic) NSInteger preferredFramesPerSecond;
@property (nonatomic) unsigned char resizingMode;
@property (nonatomic) CGFloat scaleFactor;
@property (nonatomic, retain) _TtC3VFX8VFXScene *scene; // ivar: scene


-(BOOL)isHidden;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif