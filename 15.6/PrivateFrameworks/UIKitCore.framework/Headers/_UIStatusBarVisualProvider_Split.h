// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARVISUALPROVIDER_SPLIT_H
#define _UISTATUSBARVISUALPROVIDER_SPLIT_H

@class Phone, NSTimer, NSString, UIFont, NSLayoutConstraint, NSDictionary;
@protocol _UIStatusBarCellularItemTypeStringProvider, _UIStatusBarFixedWidthVisualProvider;


#import "_UIStatusBarDisplayItemPlacement.h"
#import "UILayoutGuide.h"
#import "_UIStatusBarDisplayItemPlacementGroup.h"
#import "_UIStatusBar.h"

@interface _UIStatusBarVisualProvider_Split : Phone <_UIStatusBarCellularItemTypeStringProvider, _UIStatusBarFixedWidthVisualProvider>



@property (retain, nonatomic) NSTimer *airplaneModeIgnoreChangesTimer; // ivar: _airplaneModeIgnoreChangesTimer
@property (readonly) CGFloat baselineBottomInset;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *batteryChargingPlacement; // ivar: _batteryChargingPlacement
@property (retain, nonatomic) NSTimer *batteryExpansionTimer; // ivar: _batteryExpansionTimer
@property (readonly) CGFloat bottomLeadingBaseline;
@property (readonly) CGFloat bottomLeadingSpace;
@property (readonly) CGFloat bottomLeadingTopOffset;
@property (readonly) CGFloat bottomLeadingWidth;
@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (retain, nonatomic) UILayoutGuide *cutoutLayoutGuide; // ivar: _cutoutLayoutGuide
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delayedSystemUpdateData; // ivar: _delayedSystemUpdateData
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *dualServiceNamePlacement; // ivar: _dualServiceNamePlacement
@property (readonly) UIFont *emphasizedFont;
@property (readonly) NSDirectionalEdgeInsets expandedEdgeInsets;
@property (readonly) UIFont *expandedFont;
@property (readonly) CGFloat expandedIconScale;
@property (readonly) NSInteger expandedIconSize;
@property (retain, nonatomic) NSLayoutConstraint *expandedLeadingLowerTopConstraint; // ivar: _expandedLeadingLowerTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *expandedTrailingBottomConstraint; // ivar: _expandedTrailingBottomConstraint
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *leadingBottomConstraint; // ivar: _leadingBottomConstraint
@property (readonly) CGFloat leadingCenteringEdgeInset;
@property (readonly) NSDirectionalEdgeInsets leadingEdgeInsets;
@property (readonly) CGFloat leadingItemSpacing;
@property (readonly) CGFloat leadingPillInset;
@property (readonly) CGFloat leadingPillSpacing;
@property (readonly) CGFloat leadingSmallPillSpacing;
@property (readonly) CGFloat lowerExpandedBaselineOffset;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacementGroup *lowerWifiGroup; // ivar: _lowerWifiGroup
@property (retain, nonatomic) UILayoutGuide *mainRegionsLayoutGuide; // ivar: _mainRegionsLayoutGuide
@property (readonly) CGFloat nativeDisplayWidth;
@property (readonly) UIFont *normalFont;
@property (readonly) CGFloat normalIconScale;
@property (readonly) NSInteger normalIconSize;
@property (retain, nonatomic) NSDictionary *orderedDisplayItemPlacements; // ivar: _orderedDisplayItemPlacements
@property (readonly) CGFloat pillCenteringEdgeInset;
@property (readonly) UIFont *pillFont;
@property (readonly) CGSize pillSize;
@property (readonly) UIFont *pillSmallFont;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *serviceNamePlacement; // ivar: _serviceNamePlacement
@property (readonly) UIFont *smallFont;
@property (readonly) CGSize smallPillSize;
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsAnimatedCellularNetworkType;
@property (readonly, nonatomic) BOOL supportsIndirectPointerTouchActions;
@property (readonly) UIFont *systemUpdateFont;
@property (retain, nonatomic) NSTimer *systemUpdatesTimer; // ivar: _systemUpdatesTimer
@property (readonly) CGFloat trailingCenteringEdgeInset;
@property (readonly) NSDirectionalEdgeInsets trailingEdgeInsets;


+(BOOL)shrinksSingleCharacterTypes;
+(CGFloat)LTEAPlusFontSize;
+(CGFloat)additionalBottomLeadingMargin;
+(CGFloat)baseFontSize;
+(CGFloat)expandedEdgeInset;
+(CGFloat)height;
+(CGFloat)leadingCenteringOffset;
+(CGFloat)pillCenteringOffset;
+(CGFloat)referenceScaleForScreen:(id)arg0 ;
+(CGFloat)referenceWidthForScreen:(id)arg0 ;
+(CGFloat)trailingCenteringOffset;
+(CGFloat)trailingEdgeInsetLeadingAdjustment;
+(Class)visualProviderSubclassForScreen:(id)arg0 visualProviderInfo:(id)arg1 ;
+(struct CGSize )intrinsicContentSizeForOrientation:(NSInteger)arg0 ;
-(BOOL)_shouldShowSystemUpdateForDisplayItemWithIdentifier:(id)arg0 ;
-(CGFloat)airplaneObstacleFadeOutDuration;
-(CGFloat)airplaneShouldFadeForAnimationType:(NSInteger)arg0 ;
-(CGFloat)airplaneSpeedForAnimationType:(NSInteger)arg0 ;
-(CGFloat)airplaneTravelOffsetInProposedPartWithIdentifier:(*id)arg0 animationType:(NSInteger)arg1 ;
-(CGFloat)condensedPointSizeForCellularType:(NSInteger)arg0 defaultPointSize:(CGFloat)arg1 baselineOffset:(*CGFloat)arg2 ;
-(CGFloat)cornerRadius;
-(CGFloat)itemSpacing;
-(CGFloat)referenceWidth;
-(id)_additionAnimationForBatteryCharging;
-(id)_removalAnimationForBatteryCharging;
-(id)_systemUpdateAnimationForDisplayItemWithIdentifier:(id)arg0 ;
-(id)_systemUpdateDelayedDataIdentifiers;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg0 itemAnimation:(id)arg1 ;
-(id)animationForAirplaneMode;
-(id)animationForBackgroundActivityPillAnimation:(id)arg0 duration:(CGFloat)arg1 scale:(CGFloat)arg2 ;
-(id)animationForProminentLocation;
-(id)condensedFontForCellularType:(NSInteger)arg0 defaultFont:(id)arg1 baselineOffset:(*CGFloat)arg2 ;
-(id)defaultAnimationForDisplayItemWithIdentifier:(id)arg0 ;
-(id)displayItemIdentifiersForPartWithIdentifier:(id)arg0 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg0 ;
-(id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg0 ;
-(id)region:(id)arg0 willSetDisplayItems:(id)arg1 ;
-(id)regionIdentifiersForPartWithIdentifier:(id)arg0 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg0 itemAnimation:(id)arg1 ;
-(id)setupInContainerView:(id)arg0 ;
-(id)stringForCellularType:(NSInteger)arg0 condensed:(BOOL)arg1 ;
-(id)styleAttributesForStyle:(NSInteger)arg0 ;
-(id)willUpdateWithData:(id)arg0 ;
-(struct CGAffineTransform )_collapseChargingBoltTransformForDisplayItem:(id)arg0 ;
-(struct CGAffineTransform )_expandedChargingBoltTransformForDisplayItem:(id)arg0 ;
-(struct CGRect )notchRect;
-(struct CGSize )notchSize;
-(struct NSDirectionalEdgeInsets )_edgeInsetsFromCenteringEdgeInset:(CGFloat)arg0 trailing:(BOOL)arg1 ;
-(void)_collapseBattery;
-(void)_delaySystemUpdateData;
-(void)_disableSystemUpdates;
-(void)_resetBattery;
-(void)_resumeSystemUpdateData;
-(void)_stopBatteryCollapseTimer;
-(void)_updateDataForBatteryCharging:(id)arg0 ;
-(void)_updateDataForSystemUpdates:(id)arg0 ;
-(void)_updateExpandedTrailingRegion;
-(void)_updateLowerRegionsWithData:(id)arg0 ;
-(void)_updateSystemNavigationWithData:(id)arg0 ;
-(void)dataUpdated:(id)arg0 ;
-(void)dealloc;
-(void)itemCreated:(id)arg0 ;
-(void)orientationUpdatedFromOrientation:(NSInteger)arg0 ;
-(void)setExpanded:(BOOL)arg0 ;
-(void)styleUpdatedFromStyle:(NSInteger)arg0 ;
-(void)updateDataForService:(id)arg0 ;


@end


#endif