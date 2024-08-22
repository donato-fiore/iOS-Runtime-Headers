// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNTRANSITION_H
#define KNTRANSITION_H

@class TSPContainedObject, TSUColor, TSDBezierPathSource, NSString, NSSet, NSArray;
@protocol KNInspectableAnimation, TSKModel;


#import "KNTransitionAttributes.h"
#import "KNAnimationInfo.h"
#import "KNAnimationPluginMenu.h"

@interface KNTransition : TSPContainedObject <KNInspectableAnimation, TSKModel>

 {
    KNTransitionAttributes *_attributes;
}


@property (readonly, nonatomic) KNAnimationInfo *animationInfo;
@property (copy, nonatomic) KNTransitionAttributes *attributes;
@property (readonly, nonatomic) BOOL canEditAnimations;
@property (readonly, nonatomic) TSUColor *color;
@property (readonly, nonatomic) BOOL customBounce;
@property (readonly, nonatomic) TSDBezierPathSource *customEffectTimingCurve1;
@property (readonly, nonatomic) TSDBezierPathSource *customEffectTimingCurve2;
@property (readonly, nonatomic) TSDBezierPathSource *customEffectTimingCurve3;
@property (readonly, nonatomic) NSString *customEffectTimingCurveThemeName1;
@property (readonly, nonatomic) NSString *customEffectTimingCurveThemeName2;
@property (readonly, nonatomic) NSString *customEffectTimingCurveThemeName3;
@property (readonly, nonatomic) BOOL customMagicMoveFadeUnmatchedObjects;
@property (readonly, nonatomic) NSInteger customMosaicSize;
@property (readonly, nonatomic) NSInteger customMosaicType;
@property (readonly, nonatomic) BOOL customMotionBlur;
@property (readonly, nonatomic) NSInteger customTextDelivery;
@property (readonly, nonatomic) NSInteger customTimingCurve;
@property (readonly, nonatomic) float customTravelDistance;
@property (readonly, nonatomic) float customTwist;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat delay;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger direction;
@property (readonly, nonatomic) KNAnimationPluginMenu *directionMenu;
@property (readonly, nonatomic) NSUInteger directionType;
@property (readonly, nonatomic) BOOL documentIsRTL;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) NSString *effect;
@property (readonly, nonatomic) BOOL hasAutomaticTrigger;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *inspectableAttributes;
@property (readonly, nonatomic) BOOL isAutomaticTransition;
@property (readonly, nonatomic) BOOL isMagicMove;
@property (readonly, nonatomic) NSArray *localizedEventTriggerNames;
@property (readonly, nonatomic) NSInteger randomNumberSeed;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsBounce;
@property (readonly, nonatomic) BOOL supportsColor;
@property (readonly, nonatomic) BOOL supportsCustomEffectTimingCurve1;
@property (readonly, nonatomic) BOOL supportsCustomEffectTimingCurve2;
@property (readonly, nonatomic) BOOL supportsCustomEffectTimingCurve3;
@property (readonly, nonatomic) BOOL supportsDirection;
@property (readonly, nonatomic) BOOL supportsDuration;
@property (readonly, nonatomic) BOOL supportsTravelDistance;
@property (readonly, nonatomic) BOOL supportsTwist;


+(BOOL)hasDirectionOptionForEffect:(id)arg0 ;
+(NSUInteger)directionTypeForEffect:(id)arg0 ;
+(id)attributeKeyForBindingKeyPath:(id)arg0 ;
+(id)bindingKeyPathForAttributeKey:(id)arg0 ;
+(id)bindingMap;
-(BOOL)p_supportsCustomEffectTimingCurveForLayoutStyles:(id)arg0 ;
-(BOOL)supportsRandomNumberSeedInspection;
-(BOOL)supportsTimingCurves;
-(NSUInteger)p_keynoteVersionFromUnarchiver:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 owner:(id)arg2 ;
-(id)initWithOwner:(id)arg0 ;
-(id)initWithOwner:(id)arg0 attributes:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif