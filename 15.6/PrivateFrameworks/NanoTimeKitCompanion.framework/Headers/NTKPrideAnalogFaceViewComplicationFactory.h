// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKPRIDEANALOGFACEVIEWCOMPLICATIONFACTORY_H
#define NTKPRIDEANALOGFACEVIEWCOMPLICATIONFACTORY_H



#import "NTKFaceViewComplicationFactory.h"

@interface NTKPrideAnalogFaceViewComplicationFactory : NTKFaceViewComplicationFactory



-(BOOL)fadesComplicationSlot:(id)arg0 inEditMode:(NSInteger)arg1 faceView:(id)arg2 ;
-(CGFloat)_edgeGapForState:(NSInteger)arg0 ;
-(CGFloat)_keylinePaddingForState:(NSInteger)arg0 ;
-(CGFloat)_lisaGapForState:(NSInteger)arg0 ;
-(NSInteger)keylineStyleForComplicationSlot:(id)arg0 ;
-(id)_complicationSlots;
-(id)createComplicationContentSpecificAttributesAnimationWithAttributes:(NSUInteger)arg0 faceView:(id)arg1 forSlots:(id)arg2 ;
-(id)initForDevice:(id)arg0 ;
-(id)newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 faceView:(id)arg3 ;
-(void)applyComplicationContentSpecificAttributesAnimated:(BOOL)arg0 faceView:(id)arg1 ;
-(void)cleanupAfterEditingForFaceView:(id)arg0 ;
-(void)configureComplicationView:(id)arg0 forSlot:(id)arg1 faceView:(id)arg2 ;
-(void)loadLayoutRulesForFaceView:(id)arg0 ;
-(void)prepareForEditingForFaceView:(id)arg0 ;


@end


#endif