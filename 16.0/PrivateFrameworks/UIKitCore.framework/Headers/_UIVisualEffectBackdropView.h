// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVISUALEFFECTBACKDROPVIEW_H
#define _UIVISUALEFFECTBACKDROPVIEW_H

@class UIVisualEffectSubview, CABackdropLayer;


#import "_UIVisualEffectViewBackdropCaptureGroup.h"

@interface _UIVisualEffectBackdropView : UIVisualEffectSubview {
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
}


@property (readonly, nonatomic) CABackdropLayer *backdropLayer;
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *captureGroup;
@property (nonatomic) NSInteger renderMode;


+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)isTransparentFocusItem;
-(void)_applyScaleHintAsRequested:(BOOL)arg0 ;
-(void)applyIdentityFilterEffects;
-(void)applyRequestedFilterEffects;
-(void)removeFromCurrentCaptureGroup;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif