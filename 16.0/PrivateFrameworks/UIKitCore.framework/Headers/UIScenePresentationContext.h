// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISCENEPRESENTATIONCONTEXT_H
#define UISCENEPRESENTATIONCONTEXT_H

@class BSMutableSettings, NSSet, NSString, NSDictionary;
@protocol BSDescriptionProviding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "UIMutableTransformer.h"
#import "UIScenePresentationContext.h"
#import "UISceneAsynchronousRenderingOptions.h"
#import "UIColor.h"
#import "UITransformer.h"

@interface UIScenePresentationContext : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>

 {
    BSMutableSettings *_settings;
    UIMutableTransformer *_transformer;
}


@property (readonly, nonatomic) UIScenePresentationContext *_defaultPresentationContext; // ivar: _defaultPresentationContext
@property (readonly, copy, nonatomic) NSSet *_exclusiveLayerTargetsToInclude;
@property (readonly, copy, nonatomic) NSSet *_layerTargetsToExclude;
@property (readonly, copy, nonatomic) NSString *_minificationFilterName;
@property (readonly, nonatomic, getter=_isVisibilityPropagationEnabled) BOOL _visibilityPropagationEnabled;
@property (readonly, nonatomic) NSUInteger appearanceStyle;
@property (readonly, copy, nonatomic) UISceneAsynchronousRenderingOptions *asynchronousRenderingOptions;
@property (readonly, copy, nonatomic) UIColor *backgroundColorWhileHosting;
@property (readonly, copy, nonatomic) UIColor *backgroundColorWhileNotHosting;
@property (readonly, nonatomic, getter=isClippingDisabled) BOOL clippingDisabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) UITransformer *hostTransformer;
@property (readonly, nonatomic) BOOL inheritsSecurity;
@property (readonly, copy, nonatomic) NSDictionary *layerPresentationOverrides;
@property (readonly, nonatomic) NSUInteger presentedLayerTypes;
@property (readonly, nonatomic) NSUInteger renderingMode;
@property (readonly, nonatomic) BOOL resizesHostedContext;
@property (readonly, nonatomic) BOOL shouldPassthroughHitTestEventsIfTransparent;
@property (readonly, nonatomic) BOOL stopsHitTestTransformAccumulation;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithDefaultPresentationContext:(id)arg0 ;
-(id)_initWithDefaultValues;
-(id)_initWithPresentationContext:(id)arg0 ;
-(id)_initWithSettings:(id)arg0 defaultPresentationContext:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif