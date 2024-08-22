// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDSHADOW_H
#define TSDSHADOW_H

@class TSUColor, NSString;
@protocol TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSDShadow : NSObject <TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) TSUColor *TSUColor;
@property (readonly, nonatomic) CGFloat angle; // ivar: mAngle
@property (readonly, nonatomic) *CGColor color; // ivar: mColor
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: mEnabled
@property (readonly, nonatomic) CGFloat offset; // ivar: mOffset
@property (readonly, nonatomic) CGPoint offsetDelta;
@property (readonly, nonatomic) CGFloat opacity; // ivar: mOpacity
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly, nonatomic) CGFloat radius; // ivar: mRadius


+(BOOL)canMixWithNilObjects;
+(id)contactShadowWithAngle:(CGFloat)arg0 offset:(CGFloat)arg1 radius:(CGFloat)arg2 height:(CGFloat)arg3 opacity:(CGFloat)arg4 color:(struct CGColor *)arg5 enabled:(BOOL)arg6 ;
+(id)curvedShadowWithOffset:(CGFloat)arg0 angle:(CGFloat)arg1 radius:(CGFloat)arg2 curve:(CGFloat)arg3 opacity:(CGFloat)arg4 color:(struct CGColor *)arg5 enabled:(BOOL)arg6 ;
+(id)defaultDisabledShadow;
+(id)defaultShadow;
+(id)mixableObjectClasses;
+(id)p_defaultShadowEnabled:(BOOL)arg0 ;
+(id)shadowWithAngle:(CGFloat)arg0 offset:(CGFloat)arg1 radius:(CGFloat)arg2 opacity:(CGFloat)arg3 color:(struct CGColor *)arg4 enabled:(BOOL)arg5 ;
+(id)shadowWithNSShadow:(id)arg0 ;
+(void)bootstrapPresetsOfKind:(id)arg0 inTheme:(id)arg1 alternate:(int)arg2 ;
-(BOOL)differenceRequiresRebuilding:(id)arg0 ;
-(BOOL)isContactShadow;
-(BOOL)isCurvedShadow;
-(BOOL)isDropShadow;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isThemeEquivalent:(id)arg0 ;
-(BOOL)showForEditingText;
-(CGFloat)clampOffset:(CGFloat)arg0 ;
-(CGFloat)clampOpacity:(CGFloat)arg0 ;
-(CGFloat)clampRadius:(CGFloat)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)shadowType;
-(SEL)mapThemeAssetSelector;
-(id)NSShadow;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)i_initWithOpacity:(CGFloat)arg0 color:(struct CGColor *)arg1 enabled:(BOOL)arg2 ;
-(id)mixedBaseObjectWithObject:(id)arg0 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)newShadowClampedForSwatches;
-(id)shadowByTransformingByTransform:(struct CGAffineTransform )arg0 ;
-(id)typeDescription;
-(struct CGImage *)i_newEmptyImageWithSize:(struct CGSize )arg0 ;
-(struct CGImage *)newShadowImageForRep:(id)arg0 withSize:(struct CGSize )arg1 drawSelector:(SEL)arg2 unflipped:(BOOL)arg3 ;
-(struct CGRect )boundsForRep:(id)arg0 ;
-(struct CGRect )boundsInNaturalSpaceForRep:(id)arg0 ;
-(struct CGRect )shadowBoundsForRect:(struct CGRect )arg0 ;
-(struct CGRect )shadowBoundsForRect:(struct CGRect )arg0 additionalAngle:(CGFloat)arg1 ;
-(struct CGRect )shadowBoundsForRect:(struct CGRect )arg0 additionalTransform:(struct CGAffineTransform )arg1 ;
-(void)applyToContext:(struct CGContext *)arg0 viewScale:(CGFloat)arg1 ;
-(void)applyToContext:(struct CGContext *)arg0 viewScale:(CGFloat)arg1 flipped:(BOOL)arg2 ;
-(void)applyToContext:(struct CGContext *)arg0 viewScale:(CGFloat)arg1 flipped:(BOOL)arg2 extraOffset:(struct CGSize )arg3 ;
-(void)dealloc;


@end


#endif