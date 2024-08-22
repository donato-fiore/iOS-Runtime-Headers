// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISCENELAYERPRESENTATIONCONTEXT_H
#define UISCENELAYERPRESENTATIONCONTEXT_H

@class NSString;
@protocol BSDescriptionProviding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "UITransformer.h"

@interface UISceneLayerPresentationContext : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>



@property (copy, nonatomic, setter=_setMinificationFilterName:) NSString *_minificationFilterName; // ivar: _minificationFilterName
@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (nonatomic, getter=isClippingDisabled) BOOL clippingDisabled; // ivar: _clippingDisabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (nonatomic) NSUInteger renderingMode; // ivar: _renderingMode
@property (readonly) Class superclass;
@property (retain, nonatomic) UITransformer *transformer; // ivar: _transformer


-(BOOL)_isEqualToDefaultContext;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithSceneLayerPresentationContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif