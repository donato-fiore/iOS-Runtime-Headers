// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIMUTABLESCENEPRESENTATIONCONTEXT_H
#define UIMUTABLESCENEPRESENTATIONCONTEXT_H

@class NSSet, NSString;


#import "UIScenePresentationContext.h"
#import "UISceneAsynchronousRenderingOptions.h"
#import "UIColor.h"
#import "UITransformer.h"

@interface UIMutableScenePresentationContext : UIScenePresentationContext

@property (retain, nonatomic, setter=_setDefaultPresentationContext:) UIScenePresentationContext *_defaultPresentationContext;
@property (copy, nonatomic, setter=_setExclusiveLayerTargetsToInclude:) NSSet *_exclusiveLayerTargetsToInclude;
@property (copy, nonatomic, setter=_setLayerTargetsToExclude:) NSSet *_layerTargetsToExclude;
@property (copy, nonatomic, setter=_setMinificationFilterName:) NSString *_minificationFilterName;
@property (nonatomic, getter=_isVisibilityPropagationEnabled, setter=_setVisibilityPropagationEnabled:) BOOL _visibilityPropagationEnabled;
@property (nonatomic) NSUInteger appearanceStyle;
@property (copy, nonatomic) UISceneAsynchronousRenderingOptions *asynchronousRenderingOptions;
@property (copy, nonatomic) UIColor *backgroundColorWhileHosting;
@property (copy, nonatomic) UIColor *backgroundColorWhileNotHosting;
@property (nonatomic, getter=isClippingDisabled) BOOL clippingDisabled;
@property (copy, nonatomic) UITransformer *hostTransformer;
@property (nonatomic) NSUInteger presentedLayerTypes;
@property (nonatomic) NSUInteger renderingMode;


-(id)_existingLayerPresentationContextCreatingIfNecessary:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)modifyLayerPresentationOverrideContextForLayerTarget:(id)arg0 block:(id)arg1 ;
-(void)removeAllLayerPresentationOverrides;
-(void)removeLayerPresentationOverrideForLayerTarget:(id)arg0 ;
-(void)resetToDefaults;


@end


#endif