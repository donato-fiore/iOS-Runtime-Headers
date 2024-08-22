// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKPRIDEANALOGFACEVIEWCOMPLICATIONFACTORY_H
#define NTKPRIDEANALOGFACEVIEWCOMPLICATIONFACTORY_H

@class NSString;
@protocol NTKFaceViewComplicationFactory;


#import "NTKFaceViewComplicationFactory.h"
#import "NTKFaceView.h"

@interface NTKPrideAnalogFaceViewComplicationFactory : NTKFaceViewComplicationFactory <NTKFaceViewComplicationFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NTKFaceView *faceView; // ivar: _faceView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)fadesComplicationSlot:(id)arg0 inEditMode:(NSInteger)arg1 faceView:(id)arg2 ;
-(CGFloat)_edgeGapForState:(NSInteger)arg0 ;
-(CGFloat)_keylinePaddingForState:(NSInteger)arg0 ;
-(CGFloat)_lisaGapForState:(NSInteger)arg0 ;
-(NSInteger)keylineStyleForComplicationSlot:(id)arg0 ;
-(id)_complicationSlots;
-(id)createComplicationContentSpecificAttributesAnimationWithAttributes:(NSUInteger)arg0 faceView:(id)arg1 forSlots:(id)arg2 ;
-(id)initWithFaceView:(id)arg0 device:(id)arg1 ;
-(id)newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 ;
-(void)applyComplicationContentSpecificAttributesAnimated:(BOOL)arg0 faceView:(id)arg1 ;
-(void)cleanupAfterEditingForFaceView:(id)arg0 ;
-(void)configureComplicationView:(id)arg0 forSlot:(id)arg1 ;
-(void)loadLayoutRules;
-(void)prepareForEditingForFaceView:(id)arg0 ;


@end


#endif