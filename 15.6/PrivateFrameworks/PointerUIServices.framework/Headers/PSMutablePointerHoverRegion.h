// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSMUTABLEPOINTERHOVERREGION_H
#define PSMUTABLEPOINTERHOVERREGION_H

@class NSArray, NSValue;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;


#import "PSPointerHoverRegion.h"
#import "PSMatchMoveSource.h"
#import "PSPointerPortalSourceCollection.h"
#import "PSPointerShape.h"

@interface PSMutablePointerHoverRegion : PSPointerHoverRegion <NSCopying, NSMutableCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *accessories;
@property (nonatomic) CGRect contentBounds;
@property (nonatomic) CGFloat contentHoverInverseScale;
@property (copy, nonatomic) PSMatchMoveSource *contentMatchMoveSource;
@property (copy, nonatomic) NSValue *contentSlipValue;
@property (nonatomic) unsigned int coordinateSpaceSourceContextID;
@property (nonatomic) NSUInteger coordinateSpaceSourceLayerRenderID;
@property (nonatomic) CGRect hitTestBounds;
@property (nonatomic) NSInteger overlayEffectStyle;
@property (nonatomic, getter=isOverlayEffectVisible) BOOL overlayEffectVisible;
@property (nonatomic) NSUInteger pointerLatchingAxes;
@property (copy, nonatomic) PSPointerPortalSourceCollection *pointerPortalSourceCollection;
@property (nonatomic) NSUInteger pointerRecenteringAxes;
@property (copy, nonatomic) PSPointerShape *pointerShape;
@property (copy, nonatomic) NSValue *pointerSlipValue;
@property (nonatomic) CGFloat pointerVisualIntensity;
@property (nonatomic) NSUInteger preferredPointerMaterialLuminance;
@property (nonatomic) BOOL shouldPointerSuppressMirroring;
@property (nonatomic) BOOL shouldPointerUnderlayContent;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif