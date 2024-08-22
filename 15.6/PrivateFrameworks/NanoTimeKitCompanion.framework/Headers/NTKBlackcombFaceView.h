// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKBLACKCOMBFACEVIEW_H
#define NTKBLACKCOMBFACEVIEW_H

@class UIView, NSString;
@protocol CLKMonochromeFilterProvider;


#import "NTKAnalogFaceView.h"
#import "NTKFullscreenSubdialComplicationFactory.h"
#import "NTKBlackcombBackgroundView.h"
#import "NTKBlackcombColorPalette.h"
#import "NTKInterpolatedColorPalette.h"

@interface NTKBlackcombFaceView : NTKAnalogFaceView <CLKMonochromeFilterProvider>

 {
    NTKFullscreenSubdialComplicationFactory *_complicationFactory;
    UIView *_backgroundContainerView;
    NTKBlackcombBackgroundView *_backgroundView;
    NTKBlackcombColorPalette *_blackcombPalette;
    NTKInterpolatedColorPalette *_dialColorStyleTransitionPalette;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_backgroundViewShouldUseLongSideTicks;
-(BOOL)_isComplicationSlotInsideDial:(id)arg0 ;
-(BOOL)_timeViewBehindContentForEditMode:(NSInteger)arg0 ;
-(CGFloat)_verticalPaddingForStatusBar;
-(NSInteger)_complicationPickerStyleForSlot:(id)arg0 ;
-(NSInteger)_editMode;
-(NSInteger)_keylineStyleForComplicationSlot:(id)arg0 ;
-(NSInteger)_legacyLayoutOverrideforComplicationType:(NSUInteger)arg0 slot:(id)arg1 ;
-(id)_keylineViewForComplicationSlot:(id)arg0 ;
-(id)_newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 ;
-(id)_platterTextColorForEditMode:(NSInteger)arg0 color:(id)arg1 ;
-(id)_renderBackgroundViewSwatchImageForBlackcombDialColor:(NSUInteger)arg0 ;
-(id)_secondHandColor;
-(id)_swatchImageForEditOption:(id)arg0 mode:(NSInteger)arg1 withSelectedOptions:(id)arg2 ;
-(id)createFaceColorPalette;
-(id)initWithFaceStyle:(NSInteger)arg0 forDevice:(id)arg1 clientIdentifier:(id)arg2 ;
-(void)_applyBreathingFraction:(CGFloat)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyComplicationTransitionFraction:(CGFloat)arg0 fromColorPalette:(id)arg1 toColorPalette:(id)arg2 ;
-(void)_applyOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyRubberBandingFraction:(CGFloat)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyTransitionFraction:(CGFloat)arg0 fromColorPalette:(id)arg1 toColorPalette:(id)arg2 ;
-(void)_applyTransitionFraction:(CGFloat)arg0 fromColorPalette:(id)arg1 toColorPalette:(id)arg2 force:(BOOL)arg3 ;
-(void)_applyTransitionFraction:(CGFloat)arg0 fromOption:(id)arg1 toOption:(id)arg2 forCustomEditMode:(NSInteger)arg3 slot:(id)arg4 ;
-(void)_cleanupAfterEditing;
-(void)_configureComplicationView:(id)arg0 forSlot:(id)arg1 ;
-(void)_configureForEditMode:(NSInteger)arg0 ;
-(void)_configureForTransitionFraction:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(void)_configureTimeView:(id)arg0 ;
-(void)_forceUpdateColors;
-(void)_loadLayoutRules;
-(void)_loadSnapshotContentViews;
-(void)_prepareForEditing;
-(void)_prepareForSnapshotting;
-(void)_prepareForStatusChange:(BOOL)arg0 ;
-(void)_removeBackgroundView;
-(void)_reorderSwitcherSnapshotView;
-(void)_setupBackgroundView;
-(void)_unloadSnapshotContentViews;
-(void)_updateHandsColors;
-(void)_updateTickLengths;
-(void)layoutSubviews;
-(void)updateBlackcombDialColorStyle:(NSUInteger)arg0 ;
-(void)updateWithColorPalette:(id)arg0 ;


@end


#endif