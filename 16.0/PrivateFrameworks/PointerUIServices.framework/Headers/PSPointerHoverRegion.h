// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSPOINTERHOVERREGION_H
#define PSPOINTERHOVERREGION_H

@class NSArray, NSValue;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PSMatchMoveSource.h"
#import "PSPointerPortalSourceCollection.h"
#import "PSPointerShape.h"

@interface PSPointerHoverRegion : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *accessories; // ivar: _accessories
@property (readonly, nonatomic) CGRect contentBounds; // ivar: _contentBounds
@property (readonly, nonatomic) CGFloat contentHoverInverseScale; // ivar: _contentHoverInverseScale
@property (readonly, copy, nonatomic) PSMatchMoveSource *contentMatchMoveSource; // ivar: _contentMatchMoveSource
@property (readonly, copy, nonatomic) NSValue *contentSlipValue; // ivar: _contentSlipValue
@property (readonly, nonatomic) unsigned int coordinateSpaceSourceContextID; // ivar: _coordinateSpaceSourceContextID
@property (readonly, nonatomic) NSUInteger coordinateSpaceSourceLayerRenderID; // ivar: _coordinateSpaceSourceLayerRenderID
@property (readonly, nonatomic) CGRect hitTestBounds; // ivar: _hitTestBounds
@property (readonly, nonatomic) NSInteger overlayEffectStyle; // ivar: _overlayEffectStyle
@property (readonly, nonatomic, getter=isOverlayEffectVisible) BOOL overlayEffectVisible;
@property (readonly, nonatomic) NSUInteger pointerLatchingAxes; // ivar: _pointerLatchingAxes
@property (readonly, copy, nonatomic) PSPointerPortalSourceCollection *pointerPortalSourceCollection; // ivar: _pointerPortalSourceCollection
@property (readonly, nonatomic) NSUInteger pointerRecenteringAxes; // ivar: _pointerRecenteringAxes
@property (readonly, copy, nonatomic) PSPointerShape *pointerShape; // ivar: _pointerShape
@property (readonly, copy, nonatomic) NSValue *pointerSlipValue; // ivar: _pointerSlipValue
@property (readonly, nonatomic) CGFloat pointerVisualIntensity; // ivar: _pointerVisualIntensity
@property (readonly, nonatomic) NSUInteger preferredPointerMaterialLuminance; // ivar: _preferredPointerMaterialLuminance
@property (readonly, nonatomic) BOOL shouldPointerSuppressMirroring; // ivar: _shouldPointerSuppressMirroring
@property (readonly, nonatomic) BOOL shouldPointerUnderlayContent; // ivar: _shouldPointerUnderlayContent


+(BOOL)supportsSecureCoding;
-(BOOL)isLatching;
-(BOOL)isNumericDataValid;
-(id)_copyWithClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif