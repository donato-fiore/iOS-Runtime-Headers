// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLCOLORVIEW_H
#define HUQUICKCONTROLCOLORVIEW_H

@class UIView, UIView<HUQuickControlInteractiveView>, HFColorPalette, UISegmentedControl, NSString, NSIndexPath, HFColorPaletteColor;
@protocol HUQuickControlColorPickerViewInteractionDelegate, HUQuickControlColorPaletteViewInteractionDelegate, HUQuickControlInteractiveView, HUQuickControlColorViewInteractionDelegate;


#import "HUColorLinearPaletteView.h"
#import "HUColorPickerView.h"
#import "HUQuickControlColorViewProfile.h"

@interface HUQuickControlColorView : UIView <HUQuickControlColorPickerViewInteractionDelegate, HUQuickControlColorPaletteViewInteractionDelegate, HUQuickControlInteractiveView>



@property (readonly, nonatomic) UIView<HUQuickControlInteractiveView> *activeView;
@property (retain, nonatomic) HUColorLinearPaletteView *colorLinearPaletteView; // ivar: _colorLinearPaletteView
@property (retain, nonatomic) HFColorPalette *colorPalette; // ivar: _colorPalette
@property (retain, nonatomic) UISegmentedControl *colorPickerModeSegmentedControl; // ivar: _colorPickerModeSegmentedControl
@property (retain, nonatomic) HUColorPickerView *colorPickerView; // ivar: _colorPickerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HUQuickControlColorViewInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (readonly, nonatomic) NSIndexPath *linearPaletteViewSelectedColorIndexPath;
@property (readonly, nonatomic) NSUInteger mode;
@property (retain, nonatomic) HFColorPalette *originalPalette; // ivar: _originalPalette
@property (retain, nonatomic) NSIndexPath *originalSelectedColorIndexPath; // ivar: _originalSelectedColorIndexPath
@property (retain, nonatomic) id *originalValue; // ivar: _originalValue
@property (copy, nonatomic) HUQuickControlColorViewProfile *profile; // ivar: _profile
@property (nonatomic) NSUInteger reachabilityState; // ivar: _reachabilityState
@property (retain, nonatomic) id *secondaryValue;
@property (retain, nonatomic) HFColorPaletteColor *selectedColor; // ivar: _selectedColor
@property (readonly, nonatomic, getter=isSelectedColorInPalette) BOOL selectedColorInPalette;
@property (nonatomic) BOOL showPickerModeControl; // ivar: _showPickerModeControl
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // ivar: _userInteractionActive
@property (retain, nonatomic) id *value;


-(id)initWithProfile:(id)arg0 ;
-(id)initWithProfile:(id)arg0 colorPalette:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg0 ;
-(void)_updateColorPicker;
-(void)_updateLayout;
-(void)_updateUIForReachabilityState:(NSUInteger)arg0 ;
-(void)_updateVisibleViews;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg0 ;
-(void)cancelColorPicking;
-(void)controlView:(id)arg0 colorPaletteDidChange:(id)arg1 ;
-(void)controlView:(id)arg0 colorPickerModeDidChange:(NSUInteger)arg1 ;
-(void)controlView:(id)arg0 didSelectColorAtIndexPath:(id)arg1 ;
-(void)controlView:(id)arg0 interactionStateDidChange:(BOOL)arg1 forFirstTouch:(BOOL)arg2 ;
-(void)controlView:(id)arg0 valueDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)presentFullColorViewForControlView:(id)arg0 selectedColorIndexPath:(id)arg1 ;
-(void)storeCurrentColorInformationAsOriginalValues;
-(void)updateSelectedColorIndexPathToIndexPath:(id)arg0 ;


@end


#endif