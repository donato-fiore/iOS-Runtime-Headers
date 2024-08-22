// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDSHADOW_H
#define TSDSHADOW_H

@class NSShadow, TSUColor, NSString;
@protocol TSSPropertyValueArchiving, TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSDShadow : NSObject <TSSPropertyValueArchiving, TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSShadow *NSShadow;
@property (readonly, nonatomic) CGFloat angle; // ivar: mAngle
@property (readonly, copy, nonatomic) TSUColor *color; // ivar: mColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: mEnabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isContactShadow;
@property (readonly, nonatomic) BOOL isCurvedShadow;
@property (readonly, nonatomic) BOOL isDropShadow;
@property (readonly, nonatomic) CGFloat offset; // ivar: mOffset
@property (readonly, nonatomic) CGPoint offsetDelta;
@property (readonly, nonatomic) CGFloat opacity; // ivar: mOpacity
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly, nonatomic) CGFloat radius; // ivar: mRadius
@property (readonly, nonatomic) NSUInteger shadowType;
@property (readonly, nonatomic) BOOL showForEditingText;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *typeDescription;


+(BOOL)automaticallyNotifiesObserversOfTSUColor;
+(BOOL)canMixWithNilObjects;
+(id)contactShadowWithAngle:(CGFloat)arg0 offset:(CGFloat)arg1 radius:(CGFloat)arg2 height:(CGFloat)arg3 opacity:(CGFloat)arg4 color:(id)arg5 enabled:(BOOL)arg6 ;
+(id)curvedShadowWithOffset:(CGFloat)arg0 angle:(CGFloat)arg1 radius:(CGFloat)arg2 curve:(CGFloat)arg3 opacity:(CGFloat)arg4 color:(id)arg5 enabled:(BOOL)arg6 ;
+(id)defaultDisabledShadow;
+(id)defaultShadow;
+(id)defaultShadowPresets;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)keyPathsForValuesAffectingTSUColor;
+(id)mixableObjectClasses;
+(id)p_defaultShadowEnabled:(BOOL)arg0 ;
+(id)shadowWithAngle:(CGFloat)arg0 offset:(CGFloat)arg1 radius:(CGFloat)arg2 opacity:(CGFloat)arg3 color:(id)arg4 enabled:(BOOL)arg5 ;
+(id)shadowWithNSShadow:(id)arg0 ;
+(void)bootstrapPresetsOfKind:(id)arg0 inTheme:(id)arg1 alternate:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)clampOffset:(CGFloat)arg0 ;
-(CGFloat)clampOpacity:(CGFloat)arg0 ;
-(CGFloat)clampRadius:(CGFloat)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)i_initWithOpacity:(CGFloat)arg0 color:(id)arg1 angle:(CGFloat)arg2 offset:(CGFloat)arg3 radius:(CGFloat)arg4 enabled:(BOOL)arg5 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)mixedBaseObjectWithObject:(id)arg0 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)newShadowClampedForSwatches;
-(id)shadowByTransformingByTransform:(struct CGAffineTransform )arg0 ;
-(struct CGImage *)i_newEmptyImage;
-(struct CGImage *)newShadowImageForRep:(id)arg0 withSize:(struct CGSize )arg1 drawSelector:(SEL)arg2 unflipped:(BOOL)arg3 ;
-(struct CGRect )boundsForRep:(id)arg0 ;
-(struct CGRect )boundsInNaturalSpaceForRep:(id)arg0 ;
-(struct CGRect )shadowBoundsForRect:(struct CGRect )arg0 ;
-(struct CGRect )shadowBoundsForRect:(struct CGRect )arg0 additionalAngle:(CGFloat)arg1 ;
-(struct CGRect )shadowBoundsForRect:(struct CGRect )arg0 additionalTransform:(struct CGAffineTransform )arg1 ;
-(void)applyToContext:(struct CGContext *)arg0 viewScale:(CGFloat)arg1 ;
-(void)applyToContext:(struct CGContext *)arg0 viewScale:(CGFloat)arg1 flipped:(BOOL)arg2 ;
-(void)applyToContext:(struct CGContext *)arg0 viewScale:(CGFloat)arg1 flipped:(BOOL)arg2 extraOffset:(struct CGSize )arg3 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif