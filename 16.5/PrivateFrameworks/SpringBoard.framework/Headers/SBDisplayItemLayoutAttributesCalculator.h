// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDISPLAYITEMLAYOUTATTRIBUTESCALCULATOR_H
#define SBDISPLAYITEMLAYOUTATTRIBUTESCALCULATOR_H


#import <Foundation/Foundation.h>

#import "SBFluidSwitcherSheetMetricsCache.h"
#import "SBSwitcherChamoisSettings.h"
#import "SBChamoisOverlappingController.h"
#import "SBDisplayItemLayoutGrid.h"

@interface SBDisplayItemLayoutAttributesCalculator : NSObject {
    SBFluidSwitcherSheetMetricsCache *_centerWindowSheetMetricsCache;
    SBSwitcherChamoisSettings *_chamoisSettingsCache;
    SBChamoisOverlappingController *_chamoisOverlappingControllerCache;
    SBDisplayItemLayoutGrid *_chamoisLayoutGridCache;
}




-(BOOL)_appLayoutContainsOnlyResizableApps:(id)arg0 ;
-(NSInteger)sizingPolicyForDisplayItem:(id)arg0 contentOrientation:(NSInteger)arg1 containerOrientation:(NSInteger)arg2 proposedSizingPolicy:(NSInteger)arg3 windowScene:(id)arg4 ;
-(id)_appLayoutByPerformingAutoLayoutIfNeededInAppLayout:(id)arg0 containerOrientation:(NSInteger)arg1 chamoisLayoutAttributes:(id)arg2 floatingDockHeight:(CGFloat)arg3 screenScale:(CGFloat)arg4 draggingItem:(id)arg5 overlappingModelBeforeDragging:(id)arg6 bounds:(struct CGRect )arg7 prefersStripHidden:(BOOL)arg8 prefersDockHidden:(BOOL)arg9 ;
-(id)_applicationForDisplayItem:(id)arg0 ;
-(id)_centerWindowSheetMetricsCache;
-(id)_chamoisLayoutGridCache;
-(id)_chamoisOverlappingControllerCache;
-(id)_chamoisSettingsCache;
-(id)_deviceApplicationSceneHandleForDisplayItem:(id)arg0 ;
-(id)appLayoutByDraggingItem:(id)arg0 inAppLayout:(id)arg1 containerOrientation:(NSInteger)arg2 chamoisLayoutAttributes:(id)arg3 floatingDockHeight:(CGFloat)arg4 screenScale:(CGFloat)arg5 overlappingModelBeforeDragging:(id)arg6 bounds:(struct CGRect )arg7 prefersStripHidden:(BOOL)arg8 prefersDockHidden:(BOOL)arg9 ;
-(id)layoutRestrictionInfoForItem:(id)arg0 ;
-(id)overlappingModelForAppLayout:(id)arg0 containerOrientation:(NSInteger)arg1 chamoisLayoutAttributes:(id)arg2 floatingDockHeight:(CGFloat)arg3 screenScale:(CGFloat)arg4 bounds:(struct CGRect )arg5 prefersStripHidden:(BOOL)arg6 prefersDockHidden:(BOOL)arg7 ;
-(struct CGRect )_frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 containerBounds:(struct CGRect )arg2 containerOrientation:(NSInteger)arg3 chamoisLayoutAttributes:(id)arg4 floatingDockHeight:(CGFloat)arg5 screenScale:(CGFloat)arg6 isChamoisWindowingUIEnabled:(BOOL)arg7 prefersStripHidden:(BOOL)arg8 prefersDockHidden:(BOOL)arg9 skipAutoLayout:(BOOL)arg10 ;
-(struct CGRect )frameForCenterItemWithConfiguration:(NSInteger)arg0 interfaceOrientation:(NSInteger)arg1 bounds:(struct CGRect )arg2 ;
-(struct CGRect )frameForCenterItemWithConfiguration:(NSInteger)arg0 interfaceOrientation:(NSInteger)arg1 windowScene:(id)arg2 ;
-(struct CGRect )frameForFloatingAppLayoutInInterfaceOrientation:(NSInteger)arg0 floatingConfiguration:(NSInteger)arg1 bounds:(struct CGRect )arg2 ;
-(struct CGRect )frameForFloatingAppLayoutInInterfaceOrientation:(NSInteger)arg0 floatingConfiguration:(NSInteger)arg1 windowScene:(id)arg2 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 containerBounds:(struct CGRect )arg2 containerOrientation:(NSInteger)arg3 chamoisLayoutAttributes:(id)arg4 floatingDockHeight:(CGFloat)arg5 screenScale:(CGFloat)arg6 isChamoisWindowingUIEnabled:(BOOL)arg7 prefersStripHidden:(BOOL)arg8 prefersDockHidden:(BOOL)arg9 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 containerOrientation:(NSInteger)arg2 windowScene:(id)arg3 ;


@end


#endif