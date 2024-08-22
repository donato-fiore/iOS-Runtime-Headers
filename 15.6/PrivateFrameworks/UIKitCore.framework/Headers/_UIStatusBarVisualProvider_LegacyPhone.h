// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARVISUALPROVIDER_LEGACYPHONE_H
#define _UISTATUSBARVISUALPROVIDER_LEGACYPHONE_H

@class Phone, NSLayoutConstraint, NSString, NSDictionary;
@protocol _UIStatusBarCellularItemTypeStringProvider;


#import "_UIStatusBarRegionAxisCenteringLayout.h"
#import "_UIStatusBarCellularItem.h"
#import "_UIStatusBarRegionAxisStackingLayout.h"
#import "_UIStatusBarDisplayItemPlacementGroup.h"

@interface _UIStatusBarVisualProvider_LegacyPhone : Phone <_UIStatusBarCellularItemTypeStringProvider>



@property (retain, nonatomic) NSLayoutConstraint *backgroundHeightConstraint; // ivar: _backgroundHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *centerHeightConstraint; // ivar: _centerHeightConstraint
@property (retain, nonatomic) _UIStatusBarRegionAxisCenteringLayout *centerHorizontalLayout; // ivar: _centerHorizontalLayout
@property (retain, nonatomic) NSLayoutConstraint *centerTopConstraint; // ivar: _centerTopConstraint
@property (retain, nonatomic) _UIStatusBarCellularItem *condensedCellularItem; // ivar: _condensedCellularItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSLayoutConstraint *expandedLeadingBottomConstraint; // ivar: _expandedLeadingBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *expandedTrailingBottomConstraint; // ivar: _expandedTrailingBottomConstraint
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *leadingHeightConstraint; // ivar: _leadingHeightConstraint
@property (retain, nonatomic) _UIStatusBarRegionAxisStackingLayout *leadingHorizontalLayout; // ivar: _leadingHorizontalLayout
@property (retain, nonatomic) NSLayoutConstraint *leadingTopConstraint; // ivar: _leadingTopConstraint
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacementGroup *lowerWifiGroup; // ivar: _lowerWifiGroup
@property (retain, nonatomic) NSDictionary *orderedDisplayItemPlacements; // ivar: _orderedDisplayItemPlacements
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *trailingHeightConstraint; // ivar: _trailingHeightConstraint
@property (retain, nonatomic) _UIStatusBarRegionAxisStackingLayout *trailingHorizontalLayout; // ivar: _trailingHorizontalLayout
@property (retain, nonatomic) NSLayoutConstraint *trailingTopConstraint; // ivar: _trailingTopConstraint


+(CGFloat)_heightExpanded:(BOOL)arg0 ;
+(CGFloat)height;
+(struct CGSize )intrinsicLockScreenContentSizeForOrientation:(NSInteger)arg0 ;
-(BOOL)wantsExpandedLeadingPlacements;
-(CGFloat)baselineOffset;
-(CGFloat)dualLineExpandedBaselineOffset;
-(CGFloat)effectiveHeight;
-(CGFloat)expandedBaselineOffset;
-(CGFloat)lowerExpandedBaselineOffset;
-(CGFloat)regionSpacing;
-(id)_animationForSingleLineDualCarrier;
-(id)_backgroundActivityDetailRemovalAnimation;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg0 itemAnimation:(id)arg1 ;
-(id)condensedFontForCellularType:(NSInteger)arg0 defaultFont:(id)arg1 baselineOffset:(*CGFloat)arg2 ;
-(id)expandedFont;
-(id)normalFont;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg0 ;
-(id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg0 ;
-(id)pillFont;
-(id)regionIdentifiersForPartWithIdentifier:(id)arg0 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg0 itemAnimation:(id)arg1 ;
-(id)setupInContainerView:(id)arg0 ;
-(id)stringForCellularType:(NSInteger)arg0 condensed:(BOOL)arg1 ;
-(id)styleAttributesForStyle:(NSInteger)arg0 ;
-(id)timeFont;
-(id)willUpdateWithData:(id)arg0 ;
-(struct CGSize )pillSize;
-(struct CGSize )smallPillSize;
-(struct NSDirectionalEdgeInsets )edgeInsets;
-(void)_updateBackgroundHeight;
-(void)_updateExpandedTrailingRegion;
-(void)_updateLockScreenSizing;
-(void)_updateLowerRegionsWithData:(id)arg0 ;
-(void)actionable:(id)arg0 highlighted:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(void)dataUpdated:(id)arg0 ;
-(void)itemCreated:(id)arg0 ;
-(void)orientationUpdatedFromOrientation:(NSInteger)arg0 ;
-(void)setExpanded:(BOOL)arg0 ;
-(void)setOnLockScreen:(BOOL)arg0 ;
-(void)statusBarRegionsUpdated;
-(void)updateDataForService:(id)arg0 ;


@end


#endif