// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKDIGITIALUTILITARIANFACEVIEWCOMPLICATIONFACTORY_H
#define NTKDIGITIALUTILITARIANFACEVIEWCOMPLICATIONFACTORY_H

@class UIColor, NSArray;


#import "NTKFaceViewComplicationFactory.h"
#import "NTKUtilityComplicationFactory.h"

@interface NTKDigitialUtilitarianFaceViewComplicationFactory : NTKFaceViewComplicationFactory {
    NTKUtilityComplicationFactory *_complicationFactory;
}


@property (retain, nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (copy, nonatomic) id *shadowColorProviderBlock; // ivar: _shadowColorProviderBlock
@property (copy, nonatomic) NSArray *supportedComplicationSlots; // ivar: _supportedComplicationSlots
@property (copy, nonatomic) id *timeTravelYAdjustmentProviderBlock; // ivar: _timeTravelYAdjustmentProviderBlock
@property (nonatomic) BOOL usesLegibility; // ivar: _usesLegibility


-(BOOL)fadesComplicationSlot:(id)arg0 inEditMode:(NSInteger)arg1 faceView:(id)arg2 ;
-(CGFloat)_timeTravelYAdjustment;
-(NSInteger)_photosUtilitySlotForSlot:(id)arg0 ;
-(id)createComplicationContentSpecificAttributesAnimationWithAttributes:(NSUInteger)arg0 faceView:(id)arg1 forSlots:(id)arg2 ;
-(id)initForDevice:(id)arg0 ;
-(id)newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 faceView:(id)arg3 ;
-(void)_configureComplicationView:(id)arg0 forSlot:(id)arg1 attributes:(NSUInteger)arg2 faceView:(id)arg3 ;
-(void)applyComplicationContentSpecificAttributesAnimated:(BOOL)arg0 faceView:(id)arg1 ;
-(void)cleanupAfterEditingForFaceView:(id)arg0 ;
-(void)configureComplicationView:(id)arg0 forSlot:(id)arg1 faceView:(id)arg2 ;
-(void)loadLayoutRulesForFaceView:(id)arg0 ;
-(void)prepareForEditingForFaceView:(id)arg0 ;
-(void)setAlpha:(CGFloat)arg0 faceView:(id)arg1 ;
-(void)setForegroundColor:(id)arg0 faceView:(id)arg1 ;


@end


#endif