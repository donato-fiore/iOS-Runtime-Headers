// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKWHISTLERSUBDIALSFACEVIEW_H
#define NTKWHISTLERSUBDIALSFACEVIEW_H

@class UIView, NSCache, NSArray, NSString;
@protocol NTKRichComplicationRectangularBaseViewDelegate, CLKMonochromeFilterProvider;


#import "NTKFaceView.h"
#import "NTKMonochromeModel.h"
#import "NTKGradientComposedView.h"
#import "NTKInterpolatedColorPalette.h"
#import "NTKFace.h"
#import "NTKFaceViewController.h"

@interface NTKWhistlerSubdialsFaceView : NTKFaceView <NTKRichComplicationRectangularBaseViewDelegate, CLKMonochromeFilterProvider>

 {
    UIView *_timeViewContainerView;
}


@property NSUInteger backgroundStyle; // ivar: _backgroundStyle
@property (readonly, nonatomic) NSCache *backgroundSwatchesCache; // ivar: _backgroundSwatchesCache
@property (readonly, nonatomic) NTKMonochromeModel *bottomFilterProvider; // ivar: _bottomFilterProvider
@property (readonly, nonatomic) NTKMonochromeModel *centerFilterProvider; // ivar: _centerFilterProvider
@property (readonly, nonatomic) NSArray *complicationPlaceholderViews; // ivar: _complicationPlaceholderViews
@property (retain) NTKGradientComposedView *composedView; // ivar: _composedView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NTKInterpolatedColorPalette *editingComplicationsPalette; // ivar: _editingComplicationsPalette
@property (readonly) NSUInteger hash;
@property CGFloat monochromeFraction; // ivar: _monochromeFraction
@property CGFloat scaleFactor; // ivar: _scaleFactor
@property (readonly, nonatomic) BOOL showGossamerUI;
@property (readonly, nonatomic) NSCache *styleSwatchesCache; // ivar: _styleSwatchesCache
@property (readonly) Class superclass;
@property (readonly, nonatomic) NTKFace *swatchesFace; // ivar: _swatchesFace
@property (readonly, nonatomic) NTKFaceViewController *swatchesFaceViewController; // ivar: _swatchesFaceViewController
@property CGFloat tintedFraction; // ivar: _tintedFraction
@property (readonly, nonatomic) NTKMonochromeModel *topFilterProvider; // ivar: _topFilterProvider


+(id)_swatchForEditModeDependsOnOptions:(NSInteger)arg0 forDevice:(id)arg1 ;
-(BOOL)_isAnalog;
-(BOOL)_wantsStatusBarIconShadow;
-(CGFloat)_complicationAlphaForEditMode:(NSInteger)arg0 ;
-(CGFloat)_horizontalPaddingForStatusBar;
-(CGFloat)_keylineCornerRadiusForComplicationSlot:(id)arg0 ;
-(CGFloat)_minimumBreathingScaleForComplicationSlot:(id)arg0 ;
-(CGFloat)_timeViewAlphaForEditMode:(NSInteger)arg0 ;
-(CGFloat)_verticalPaddingForStatusBar;
-(NSInteger)_keylineStyleForComplicationSlot:(id)arg0 ;
-(NSUInteger)_keylineLabelAlignmentForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_filterProviderForSlot:(id)arg0 ;
-(id)_keylineViewForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 ;
-(id)_renderDialSwatchImageForStyle:(NSUInteger)arg0 colorOption:(id)arg1 ;
-(id)_swatchImageForEditOption:(id)arg0 mode:(NSInteger)arg1 withSelectedOptions:(id)arg2 ;
-(id)createFaceColorPalette;
-(id)dialView;
-(id)initWithFaceStyle:(NSInteger)arg0 forDevice:(id)arg1 clientIdentifier:(id)arg2 ;
-(struct CGRect )_relativeKeylineFrameForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(struct CGRect )_timeViewFrameRelativeToFaceView;
-(void)_applyBreathingFraction:(CGFloat)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyColorsFromPalette:(id)arg0 ;
-(void)_applyOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyRubberBandingFraction:(CGFloat)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyTransitionFraction:(CGFloat)arg0 fromOption:(id)arg1 toOption:(id)arg2 forCustomEditMode:(NSInteger)arg3 slot:(id)arg4 ;
-(void)_applyTransitionFraction:(CGFloat)arg0 fromPalette:(id)arg1 toPalette:(id)arg2 ;
-(void)_cleanupAfterEditing;
-(void)_configureComplicationView:(id)arg0 forSlot:(id)arg1 ;
-(void)_configureForEditMode:(NSInteger)arg0 ;
-(void)_configureForTransitionFraction:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(void)_loadLayoutRules;
-(void)_loadSnapshotContentViews;
-(void)_prepareForEditing;
-(void)_removeDialView;
-(void)_setupDialView;
-(void)_unloadSnapshotContentViews;
-(void)layoutSubviews;
-(void)loadComplicationPlaceholderViews;
-(void)rectangularViewDidBecomeInteractive:(id)arg0 ;
-(void)rectangularViewDidEndInteractive:(id)arg0 ;
-(void)updateMonochromeColorForRichComplicationView:(id)arg0 ;
-(void)updateWithColorPalette:(id)arg0 ;


@end


#endif