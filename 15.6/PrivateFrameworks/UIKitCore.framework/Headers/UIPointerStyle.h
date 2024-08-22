// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPOINTERSTYLE_H
#define UIPOINTERSTYLE_H

@class NSArray, NSString;
@protocol _UIContentEffectDescriptor, NSCopying;

#import <Foundation/Foundation.h>

#import "UIPointerEffect.h"
#import "UIPointerShape.h"
#import "UITargetedPreview.h"

@interface UIPointerStyle : NSObject <_UIContentEffectDescriptor, NSCopying>

 {
    BOOL _determineScaleAutomatically;
}


@property (nonatomic) BOOL _suppressesMirroring; // ivar: _suppressesMirroring
@property (copy, nonatomic) NSArray *accessories; // ivar: _accessories
@property (readonly, nonatomic) NSArray *compatibleDescriptors;
@property (nonatomic) NSUInteger constrainedAxes; // ivar: _constrainedAxes
@property (readonly, nonatomic) CGFloat contentScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIPointerEffect *effect; // ivar: _effect
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) UIPointerShape *pointerShape; // ivar: _pointerShape
@property (readonly, nonatomic) BOOL pointerUnderlapsContent;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITargetedPreview *targetedPreview;
@property (nonatomic) NSInteger type; // ivar: _type


+(id)_systemPointerStyle;
+(id)hiddenPointerStyle;
+(id)styleWithEffect:(id)arg0 shape:(id)arg1 ;
+(id)styleWithShape:(id)arg0 constrainedAxes:(NSUInteger)arg1 ;
+(id)systemPointerStyle;
-(BOOL)canTransitionInPlaceToEffectWithDescriptor:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_pointerIntensityForMaterialLuminance:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct CGPoint )_contentSlipFactor;
-(struct CGPoint )_contentSlipMappedToRegionSize:(struct CGSize )arg0 ;
-(struct CGPoint )_pointerSlipFactor;
-(struct CGPoint )_pointerSlipMappedToRegionSize:(struct CGSize )arg0 ;


@end


#endif