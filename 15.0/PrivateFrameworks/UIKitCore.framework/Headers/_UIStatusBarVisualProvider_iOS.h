// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARVISUALPROVIDER_IOS_H
#define _UISTATUSBARVISUALPROVIDER_IOS_H

@class NSString, NSArray;
@protocol _UIStatusBarVisualProvider;

#import <Foundation/Foundation.h>

#import "_UIStatusBarAnimation.h"
#import "_UIStatusBarDisplayItemPlacementNetworkGroup.h"
#import "_UIStatusBarDisplayItemPlacementGroup.h"
#import "_UIStatusBar.h"

@interface _UIStatusBarVisualProvider_iOS : NSObject <_UIStatusBarVisualProvider>



@property (readonly, nonatomic) CGFloat airplaneObstacleFadeInDuration;
@property (readonly, nonatomic) CGFloat airplaneObstacleFadeOutDuration;
@property (readonly, nonatomic) _UIStatusBarAnimation *animationForAirplaneMode;
@property (readonly, nonatomic) _UIStatusBarAnimation *animationForProminentLocation;
@property (readonly) CGFloat bluetoothPaddingInset;
@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expanded; // ivar: _expanded
@property (readonly, nonatomic) NSArray *expandedCellularPlacementsAffectedByAirplaneMode; // ivar: _expandedCellularPlacementsAffectedByAirplaneMode
@property (readonly) CGFloat expandedItemSpacing;
@property (readonly, nonatomic) NSArray *expandedLeadingPlacements; // ivar: _expandedLeadingPlacements
@property (readonly, nonatomic) _UIStatusBarDisplayItemPlacementNetworkGroup *expandedNetworkGroup; // ivar: _expandedNetworkGroup
@property (readonly, nonatomic) NSArray *expandedTrailingPlacements; // ivar: _expandedTrailingPlacements
@property (readonly) BOOL hasCellularCapability;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat itemSpacing;
@property (nonatomic) BOOL onLockScreen; // ivar: _onLockScreen
@property (readonly) CGFloat regionSpacing;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacementGroup *secondaryWifiGroup; // ivar: _secondaryWifiGroup
@property (weak, nonatomic) _UIStatusBar *statusBar; // ivar: _statusBar
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsIndirectPointerTouchActions;
@property (readonly) BOOL wantsExpandedLeadingPlacements;


+(CGFloat)cornerRadius;
+(CGFloat)height;
+(Class)visualProviderSubclassForScreen:(id)arg0 visualProviderInfo:(id)arg1 ;
+(struct CGSize )intrinsicContentSizeForOrientation:(NSInteger)arg0 ;
-(CGFloat)airplaneShouldFadeForAnimationType:(NSInteger)arg0 ;
-(CGFloat)airplaneSpeedForAnimationType:(NSInteger)arg0 ;
-(CGFloat)airplaneTravelOffsetInProposedPartWithIdentifier:(*id)arg0 animationType:(NSInteger)arg1 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg0 itemAnimation:(id)arg1 ;
-(id)defaultAnimationForDisplayItemWithIdentifier:(id)arg0 ;
-(id)displayItemIdentifiersForPartWithIdentifier:(id)arg0 ;
-(id)init;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg0 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg0 itemAnimation:(id)arg1 ;
-(id)setupInContainerView:(id)arg0 ;
-(id)styleAttributesForStyle:(NSInteger)arg0 ;
-(id)willUpdateWithData:(id)arg0 ;
-(void)_applyToAppearingRegions:(BOOL)arg0 block:(id)arg1 ;
-(void)_createExpandedPlacements;
-(void)actionable:(id)arg0 highlighted:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(void)modeUpdatedFromMode:(NSInteger)arg0 ;
-(void)updateDataForService:(id)arg0 ;
-(void)updateDataForSystemNavigation:(id)arg0 ;


@end


#endif