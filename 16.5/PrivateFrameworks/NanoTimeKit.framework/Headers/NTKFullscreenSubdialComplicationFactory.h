// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKFULLSCREENSUBDIALCOMPLICATIONFACTORY_H
#define NTKFULLSCREENSUBDIALCOMPLICATIONFACTORY_H

@class NSString;
@protocol NTKFaceViewComplicationFactory;


#import "NTKFaceViewComplicationFactory.h"
#import "NTKFaceView.h"

@interface NTKFullscreenSubdialComplicationFactory : NTKFaceViewComplicationFactory <NTKFaceViewComplicationFactory>



@property (nonatomic) CGPoint circularComplicationDistanceFromCenter; // ivar: _circularComplicationDistanceFromCenter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NTKFaceView *faceView; // ivar: _faceView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_convertCircularSlot:(id)arg0 toPosition:(*NSInteger)arg1 ;
-(NSInteger)complicationPickerStyleForSlot:(id)arg0 ;
-(NSInteger)legacyLayoutOverrideforComplicationType:(NSUInteger)arg0 slot:(id)arg1 ;
-(id)initForDevice:(id)arg0 ;
-(id)keylineViewForComplicationSlot:(id)arg0 ;
-(id)newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 ;
-(id)newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 faceView:(id)arg3 ;
-(struct CGPoint )_circularComplicationCenterForSlot:(id)arg0 inFaceBounds:(struct CGRect )arg1 ;
-(void)configureComplicationView:(id)arg0 forSlot:(id)arg1 ;
-(void)configureComplicationView:(id)arg0 forSlot:(id)arg1 faceView:(id)arg2 ;
-(void)loadLayoutRules;
-(void)loadLayoutRulesForFaceView:(id)arg0 ;
-(void)setAlpha:(CGFloat)arg0 faceView:(id)arg1 ;


@end


#endif