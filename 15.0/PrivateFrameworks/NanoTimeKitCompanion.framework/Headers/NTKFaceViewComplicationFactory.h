// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKFACEVIEWCOMPLICATIONFACTORY_H
#define NTKFACEVIEWCOMPLICATIONFACTORY_H

@class CLKDevice, UIColor;

#import <Foundation/Foundation.h>


@interface NTKFaceViewComplicationFactory : NSObject

@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (copy, nonatomic) id *alphaProviderBlock; // ivar: _alphaProviderBlock
@property (nonatomic) CGFloat contentSpecificAnimationDuration; // ivar: _contentSpecificAnimationDuration
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (copy, nonatomic) id *foregroundColorProviderBlock; // ivar: _foregroundColorProviderBlock
@property (retain, nonatomic) UIColor *platterColor; // ivar: _platterColor
@property (copy, nonatomic) id *platterColorProviderBlock; // ivar: _platterColorProviderBlock


+(id)_genericComplicationAnimationWithDuration:(CGFloat)arg0 applier:(id)arg1 ;
-(BOOL)fadesComplicationSlot:(id)arg0 inEditMode:(NSInteger)arg1 faceView:(id)arg2 ;
-(CGFloat)keylineCornerRadiusForComplicationSlot:(id)arg0 faceView:(id)arg1 ;
-(CGFloat)minimumBreathingScaleForComplicationSlot:(id)arg0 faceView:(id)arg1 ;
-(NSInteger)keylineStyleForComplicationSlot:(id)arg0 ;
-(NSInteger)legacyLayoutOverrideforComplicationType:(NSUInteger)arg0 slot:(id)arg1 faceView:(id)arg2 ;
-(id)createComplicationContentSpecificAttributesAnimationWithAttributes:(NSUInteger)arg0 faceView:(id)arg1 forSlots:(id)arg2 ;
-(id)detachedComplicationDisplaysForFaceView:(id)arg0 ;
-(id)initForDevice:(id)arg0 ;
-(id)keylineViewForComplicationSlot:(id)arg0 ;
-(id)newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 faceView:(id)arg3 ;
-(void)applyComplicationContentSpecificAttributesAnimated:(BOOL)arg0 attributes:(NSUInteger)arg1 faceView:(id)arg2 ;
-(void)applyComplicationContentSpecificAttributesAnimated:(BOOL)arg0 faceView:(id)arg1 ;
-(void)cleanupAfterEditingForFaceView:(id)arg0 ;
-(void)configureComplicationView:(id)arg0 forSlot:(id)arg1 faceView:(id)arg2 ;
-(void)loadLayoutRulesForFaceView:(id)arg0 ;
-(void)prepareForEditingForFaceView:(id)arg0 ;


@end


#endif