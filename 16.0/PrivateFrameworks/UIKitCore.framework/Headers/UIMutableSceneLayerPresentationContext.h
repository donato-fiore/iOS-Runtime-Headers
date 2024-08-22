// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIMUTABLESCENELAYERPRESENTATIONCONTEXT_H
#define UIMUTABLESCENELAYERPRESENTATIONCONTEXT_H



#import "UISceneLayerPresentationContext.h"
#import "UITransformer.h"

@interface UIMutableSceneLayerPresentationContext : UISceneLayerPresentationContext

@property (nonatomic) CGFloat alpha;
@property (nonatomic, getter=isClippingDisabled) BOOL clippingDisabled;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) NSUInteger renderingMode;
@property (retain, nonatomic) UITransformer *transformer;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif