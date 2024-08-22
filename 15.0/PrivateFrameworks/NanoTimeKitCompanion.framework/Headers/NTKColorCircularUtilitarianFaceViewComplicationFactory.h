// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCOLORCIRCULARUTILITARIANFACEVIEWCOMPLICATIONFACTORY_H
#define NTKCOLORCIRCULARUTILITARIANFACEVIEWCOMPLICATIONFACTORY_H

@class NSString;
@protocol NTKUtilityComplicationFactoryDelegate, NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate;


#import "NTKFaceViewComplicationFactory.h"
#import "NTKUtilityComplicationFactory.h"

@interface NTKColorCircularUtilitarianFaceViewComplicationFactory : NTKFaceViewComplicationFactory <NTKUtilityComplicationFactoryDelegate>

 {
    NTKUtilityComplicationFactory *_complicationFactory;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)slotUsesCurvedText:(NSInteger)arg0 ;
-(CGFloat)_edgeGapForState:(NSInteger)arg0 ;
-(CGFloat)_keylinePaddingForState:(NSInteger)arg0 ;
-(CGFloat)_lisaGapForState:(NSInteger)arg0 ;
-(NSInteger)_utilitySlotForSlot:(id)arg0 ;
-(NSInteger)keylineStyleForComplicationSlot:(id)arg0 ;
-(id)_colorComplicationSlots;
-(id)_complicationSlots;
-(id)_slotForUtilitySlot:(NSInteger)arg0 ;
-(id)_utilityComplicationSlots;
-(id)createComplicationContentSpecificAttributesAnimationWithAttributes:(NSUInteger)arg0 faceView:(id)arg1 forSlots:(id)arg2 ;
-(id)curvedMaskForSlot:(id)arg0 ;
-(id)initForDevice:(id)arg0 ;
-(id)keylineViewForComplicationSlot:(id)arg0 ;
-(id)newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 faceView:(id)arg3 ;
-(id)utilityDateComplicationFontForDateStyle:(NSUInteger)arg0 ;
-(void)applyComplicationContentSpecificAttributesAnimated:(BOOL)arg0 faceView:(id)arg1 ;
-(void)cleanupAfterEditingForFaceView:(id)arg0 ;
-(void)configureComplicationView:(id)arg0 forSlot:(id)arg1 faceView:(id)arg2 ;
-(void)curvedCircleRadius:(*CGFloat)arg0 centerAngle:(*CGFloat)arg1 maxAngularWidth:(*CGFloat)arg2 circleCenter:(struct CGPoint *)arg3 interior:(*BOOL)arg4 forSlot:(id)arg5 ;
-(void)loadLayoutRulesForFaceView:(id)arg0 ;
-(void)prepareForEditingForFaceView:(id)arg0 ;


@end


#endif