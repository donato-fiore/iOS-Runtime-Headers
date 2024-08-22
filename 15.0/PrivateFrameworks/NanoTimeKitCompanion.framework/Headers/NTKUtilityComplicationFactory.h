// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKUTILITYCOMPLICATIONFACTORY_H
#define NTKUTILITYCOMPLICATIONFACTORY_H

@class NSString, CLKDevice, CLKFont;
@protocol NTKFaceViewComplicationFactory, NTKUtilityComplicationFactoryDelegate;

#import <Foundation/Foundation.h>

#import "NTKFaceView.h"

@interface NTKUtilityComplicationFactory : NSObject <NTKFaceViewComplicationFactory>



@property (nonatomic) BOOL accommodatesTwoTopComplications; // ivar: _accommodatesTwoTopComplications
@property (nonatomic) CGFloat bezelKeylineDiameter; // ivar: _bezelKeylineDiameter
@property (nonatomic) CGFloat bezelKeylineInnerCircleOffset; // ivar: _bezelKeylineInnerCircleOffset
@property (nonatomic) CGFloat bezelLabelMaxWidthInDegree; // ivar: _bezelLabelMaxWidthInDegree
@property (nonatomic) CGFloat bezelLabelTopPadding; // ivar: _bezelLabelTopPadding
@property (nonatomic) NSInteger bottomCenterLayout; // ivar: _bottomCenterLayout
@property (nonatomic) CGFloat crownIndicatorGap; // ivar: _crownIndicatorGap
@property (nonatomic) CGFloat dateHorizontalCenterOffset; // ivar: _dateHorizontalCenterOffset
@property (nonatomic) CGFloat dateKeylineMaxWidth; // ivar: _dateKeylineMaxWidth
@property (nonatomic) CGFloat dateVerticalCenterOffset; // ivar: _dateVerticalCenterOffset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKUtilityComplicationFactoryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat deselectedKeylineCircularInnerPadding; // ivar: _deselectedKeylineCircularInnerPadding
@property (nonatomic) CGFloat deselectedKeylineSideInnerPadding; // ivar: _deselectedKeylineSideInnerPadding
@property (nonatomic) CGFloat deselectedKeylineVerticalInnerPadding; // ivar: _deselectedKeylineVerticalInnerPadding
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (nonatomic) CGFloat dialDiameter; // ivar: _dialDiameter
@property (weak, nonatomic) NTKFaceView *faceView; // ivar: _faceView
@property (nonatomic) CGFloat foregroundAlpha; // ivar: _foregroundAlpha
@property (nonatomic) CGFloat foregroundImageAlpha; // ivar: _foregroundImageAlpha
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includesDateComplicationLayoutRules; // ivar: _includesDateComplicationLayoutRules
@property (nonatomic) CGFloat maxNormalLongWidth; // ivar: _maxNormalLongWidth
@property (nonatomic) CGSize normalCircularPadding; // ivar: _normalCircularPadding
@property (nonatomic) CGFloat normalSidePadding; // ivar: _normalSidePadding
@property (nonatomic) CGFloat normalVerticalPadding; // ivar: _normalVerticalPadding
@property (nonatomic) UIEdgeInsets screenEdgeInsets; // ivar: _screenEdgeInsets
@property (nonatomic) CGFloat selectedKeylineHeight; // ivar: _selectedKeylineHeight
@property (nonatomic) CGFloat selectedKeylineSideInnerPadding; // ivar: _selectedKeylineSideInnerPadding
@property (nonatomic) CGFloat selectedKeylineVerticalInnerContentSpacer; // ivar: _selectedKeylineVerticalInnerContentSpacer
@property (readonly) Class superclass;
@property (retain, nonatomic) CLKFont *topBezelLabelFont; // ivar: _topBezelLabelFont


+(NSUInteger)placementForSlot:(NSInteger)arg0 ;
+(void)curvedCircleRadius:(*CGFloat)arg0 centerAngle:(*CGFloat)arg1 maxAngularWidth:(*CGFloat)arg2 circleCenter:(struct CGPoint *)arg3 interior:(*BOOL)arg4 forSlot:(NSInteger)arg5 forDevice:(id)arg6 ;
-(BOOL)slotSupportsCurvedText:(id)arg0 ;
-(CGFloat)_maxBottomCenterWidthLeavingRoomForKeylines:(struct CGRect )arg0 ;
-(CGFloat)_maxBottomCornerWidthLeavingRoomForKeylines:(struct CGRect )arg0 ;
-(CGFloat)_maxDateWidthLeavingRoomForKeylines;
-(CGFloat)_maxTopCornerWidthLeavingRoomForKeylines:(struct CGRect )arg0 ;
-(CGFloat)_maxWidthForKeylineAndPadding;
-(CGFloat)bezelComplicationMaxAngularWidth;
-(CGFloat)bezelComplicationRadiusWithDialDiameter:(CGFloat)arg0 ;
-(CGFloat)foregroundAlphaForEditing:(BOOL)arg0 ;
-(CGFloat)foregroundAlphaForTransitionFraction:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(CGFloat)foregroundImageAlphaForEditing:(BOOL)arg0 ;
-(CGFloat)foregroundImageAlphaForTransitionFraction:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(CGFloat)keylineCornerRadiusForSlot:(NSInteger)arg0 ;
-(CGFloat)maxDateWidthLeavingRoomForKeylines;
-(NSInteger)_utilitySlotForSlot:(id)arg0 ;
-(NSInteger)complicationPickerStyleForSlot:(id)arg0 ;
-(NSInteger)layoutOverrideForComplicationType:(NSUInteger)arg0 inSlot:(NSInteger)arg1 ;
-(NSInteger)legacyLayoutOverrideforComplicationType:(NSUInteger)arg0 slot:(id)arg1 ;
-(id)_curvedImageForSlot:(NSInteger)arg0 filled:(BOOL)arg1 ;
-(id)_curvedKeylineImageForSlot:(NSInteger)arg0 ;
-(id)_curvedMaskImageForSlot:(NSInteger)arg0 ;
-(id)_viewForDateComplication:(id)arg0 ;
-(id)curvedMaskForSlot:(NSInteger)arg0 ;
-(id)initForDevice:(id)arg0 ;
-(id)keylineViewForComplicationSlot:(id)arg0 ;
-(id)keylineViewForSlot:(NSInteger)arg0 ;
-(id)keylineViewForSlot:(NSInteger)arg0 dialDiameter:(CGFloat)arg1 ;
-(id)newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 ;
-(id)newViewForComplication:(id)arg0 family:(NSInteger)arg1 forSlot:(NSInteger)arg2 ;
-(void)_configureBottomCenterLayout:(id)arg0 withBounds:(struct CGRect )arg1 variant:(BOOL)arg2 ;
-(void)_configureBottomLeftLayout:(id)arg0 withBounds:(struct CGRect )arg1 variant:(BOOL)arg2 ;
-(void)_configureBottomRightAboveLayout:(id)arg0 withBounds:(struct CGRect )arg1 ;
-(void)_configureBottomRightBelowLayout:(id)arg0 withBounds:(struct CGRect )arg1 ;
-(void)_configureBottomRightLayout:(id)arg0 withBounds:(struct CGRect )arg1 variant:(BOOL)arg2 ;
-(void)_configureBottomRightLongLayout:(id)arg0 withBounds:(struct CGRect )arg1 ;
-(void)_configureDateLayout:(id)arg0 withBounds:(struct CGRect )arg1 ;
-(void)_configureLayout:(id)arg0 withNormalSize:(struct CGSize )arg1 editingSize:(struct CGSize )arg2 variant:(BOOL)arg3 addCircleOverrides:(BOOL)arg4 makeRuleBlock:(id)arg5 ;
-(void)_configureTopBezelLayout:(id)arg0 withBounds:(struct CGRect )arg1 dialDiameter:(CGFloat)arg2 ;
-(void)_configureTopLeftLayout:(id)arg0 withBounds:(struct CGRect )arg1 variant:(BOOL)arg2 ;
-(void)_configureTopRightAboveLayout:(id)arg0 withBounds:(struct CGRect )arg1 ;
-(void)_configureTopRightBelowLayout:(id)arg0 withBounds:(struct CGRect )arg1 ;
-(void)_configureTopRightLayout:(id)arg0 withBounds:(struct CGRect )arg1 variant:(BOOL)arg2 ;
-(void)_configureUpNextTopRightLayout:(id)arg0 withBounds:(struct CGRect )arg1 ;
-(void)configureComplicationLayout:(id)arg0 forSlot:(NSInteger)arg1 bounds:(struct CGRect )arg2 dialDiameter:(CGFloat)arg3 ;
-(void)configureComplicationLayout:(id)arg0 forSlot:(NSInteger)arg1 withBounds:(struct CGRect )arg2 ;
-(void)configureComplicationView:(id)arg0 forSlot:(id)arg1 ;
-(void)configureComplicationView:(id)arg0 forSlot:(id)arg1 dialDiameter:(CGFloat)arg2 ;
-(void)curvedComplicationCircleRadius:(*CGFloat)arg0 centerAngle:(*CGFloat)arg1 maxAngularWidth:(*CGFloat)arg2 circleCenter:(struct CGPoint *)arg3 interior:(*BOOL)arg4 forSlot:(id)arg5 ;
-(void)loadLayoutRules;


@end


#endif