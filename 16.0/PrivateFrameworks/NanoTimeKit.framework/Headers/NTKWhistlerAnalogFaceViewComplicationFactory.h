// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKWHISTLERANALOGFACEVIEWCOMPLICATIONFACTORY_H
#define NTKWHISTLERANALOGFACEVIEWCOMPLICATIONFACTORY_H

@class NSString;
@protocol NTKFaceViewComplicationFactory;


#import "NTKFaceViewComplicationFactory.h"
#import "NTKFaceView.h"

@interface NTKWhistlerAnalogFaceViewComplicationFactory : NTKFaceViewComplicationFactory <NTKFaceViewComplicationFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat dialDiameter; // ivar: _dialDiameter
@property (weak, nonatomic) NTKFaceView *faceView; // ivar: _faceView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesNarrowTopSlots; // ivar: _usesNarrowTopSlots


-(BOOL)_convertCircularSlot:(id)arg0 toPosition:(*NSInteger)arg1 ;
-(BOOL)_convertCornerSlot:(id)arg0 toPosition:(*NSInteger)arg1 ;
-(BOOL)_isCenterComplicationForSlot:(id)arg0 ;
-(BOOL)_isCornerComplicationForSlot:(id)arg0 ;
-(BOOL)isCornerComplicationForSlot:(id)arg0 ;
-(CGFloat)_edgeGapForState:(NSInteger)arg0 ;
-(CGFloat)_keylinePaddingForState:(NSInteger)arg0 ;
-(CGFloat)_lisaGapForState:(NSInteger)arg0 ;
-(NSInteger)complicationPickerStyleForSlot:(id)arg0 ;
-(NSInteger)legacyLayoutOverrideforComplicationType:(NSUInteger)arg0 slot:(id)arg1 ;
-(id)_cornerKeylineViewForSlot:(id)arg0 ;
-(id)initForDevice:(id)arg0 ;
-(id)initWithFaceView:(id)arg0 dialDiameter:(CGFloat)arg1 device:(id)arg2 ;
-(id)keylineViewForComplicationSlot:(id)arg0 ;
-(id)newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 ;
-(id)newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 faceView:(id)arg3 ;
-(struct CGPoint )circularComplicationCenterForSlot:(id)arg0 inFaceBounds:(struct CGRect )arg1 ;
-(struct CGRect )keylineFrameForCornerComplicationSlot:(id)arg0 selected:(BOOL)arg1 ;
-(void)configureComplicationView:(id)arg0 forSlot:(id)arg1 ;
-(void)configureComplicationView:(id)arg0 forSlot:(id)arg1 faceView:(id)arg2 ;
-(void)loadLayoutRules;
-(void)loadLayoutRulesForFaceView:(id)arg0 ;
-(void)loadLayoutRulesForFaceView:(id)arg0 dialDiameter:(CGFloat)arg1 ;
-(void)setAlpha:(CGFloat)arg0 faceView:(id)arg1 ;


@end


#endif