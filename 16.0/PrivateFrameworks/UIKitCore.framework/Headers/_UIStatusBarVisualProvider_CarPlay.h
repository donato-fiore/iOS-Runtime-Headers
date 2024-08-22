// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARVISUALPROVIDER_CARPLAY_H
#define _UISTATUSBARVISUALPROVIDER_CARPLAY_H

@class UIFont, NSString;
@protocol _UIStatusBarCellularItemTypeStringProvider, _UIStatusBarVisualProvider, _UIStatusBarPillRegionVisualProvider;

#import <Foundation/Foundation.h>

#import "_UIStatusBarVisualProvider_PillRegionCoordinator.h"
#import "_UIStatusBarRegion.h"
#import "_UIStatusBar.h"

@interface _UIStatusBarVisualProvider_CarPlay : NSObject <_UIStatusBarCellularItemTypeStringProvider, _UIStatusBarVisualProvider, _UIStatusBarPillRegionVisualProvider>



@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (readonly, nonatomic) UIFont *clockFont;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expanded;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIStatusBarVisualProvider_PillRegionCoordinator *pillRegionCoordinator; // ivar: _pillRegionCoordinator
@property (retain, nonatomic) _UIStatusBarRegion *radarRegion; // ivar: _radarRegion
@property (nonatomic) BOOL showingPill; // ivar: _showingPill
@property (nonatomic) BOOL showingSensorActivityIndicator; // ivar: _showingSensorActivityIndicator
@property (weak, nonatomic) _UIStatusBar *statusBar; // ivar: _statusBar
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsIndirectPointerTouchActions;
@property (retain, nonatomic) _UIStatusBarRegion *timeRegion; // ivar: _timeRegion


+(BOOL)requiresIterativeOverflowLayout;
+(BOOL)scalesWithScreenNativeScale;
+(Class)visualProviderSubclassForScreen:(id)arg0 visualProviderInfo:(id)arg1 ;
+(struct CGSize )intrinsicContentSizeForOrientation:(NSInteger)arg0 ;
-(BOOL)showSensorActivityIndicatorWithoutPortalView;
-(id)_animationForPillTime;
-(id)_animationForSensorIndicator;
-(id)_defaultScaleAnimationWithIdentifier:(id)arg0 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg0 itemAnimation:(id)arg1 ;
-(id)condensedFontForCellularType:(NSInteger)arg0 defaultFont:(id)arg1 baselineOffset:(*CGFloat)arg2 ;
-(id)init;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg0 ;
-(id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg0 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg0 itemAnimation:(id)arg1 ;
-(id)setupInContainerView:(id)arg0 ;
-(id)stringForCellularType:(NSInteger)arg0 condensed:(BOOL)arg1 ;
-(id)styleAttributesForStyle:(NSInteger)arg0 ;
-(id)willUpdateWithData:(id)arg0 ;
-(void)actionable:(id)arg0 highlighted:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(void)itemCreated:(id)arg0 ;


@end


#endif