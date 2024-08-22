// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIINTERFACEACTIONREPRESENTATIONVIEWCONTEXT_APPLETV_H
#define _UIINTERFACEACTIONREPRESENTATIONVIEWCONTEXT_APPLETV_H


#import <Foundation/Foundation.h>

#import "UIMotionEffectGroup.h"
#import "UIView.h"

@interface _UIInterfaceActionRepresentationViewContext_AppleTV : NSObject {
    UIMotionEffectGroup *_installedHighlightedActionMotionEffectsGroup;
}


@property (weak, nonatomic) UIView *highlightTransformTargetView; // ivar: _highlightTransformTargetView
@property (nonatomic) BOOL highlighted; // ivar: _highlighted
@property (nonatomic) BOOL pressed; // ivar: _pressed


-(id)_newMotionEffectsGroupForHighlightedAction;
-(id)initWithHighlightTransformTargetView:(id)arg0 ;
-(struct CATransform3D )_enlargedTransformForSize:(struct CGSize )arg0 pressed:(BOOL)arg1 ;
-(void)_applyHighlightTransform;
-(void)_insertMotionEffects;
-(void)_removeMotionEffects;


@end


#endif