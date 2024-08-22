// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSGUIDEREGION_H
#define _UIFOCUSGUIDEREGION_H

@class UIFocusRegion;
@protocol _UIFocusGuideRegionDelegate;



@interface _UIFocusGuideRegion : UIFocusRegion

@property (nonatomic, setter=_setFocusPriority:) CGFloat _focusPriority; // ivar: __focusPriority
@property (nonatomic, setter=_setIgnoresSpeedBumpEdges:) BOOL _ignoresSpeedBumpEdges; // ivar: __ignoresSpeedBumpEdges
@property (nonatomic, setter=_setIsUnclippable:) BOOL _isUnclippable; // ivar: __isUnclippable
@property (nonatomic, setter=_setIsUnoccludable:) BOOL _isUnoccludable; // ivar: __isUnoccludable
@property (weak, nonatomic) NSObject<_UIFocusGuideRegionDelegate> *delegate; // ivar: _delegate


-(BOOL)_canBeOccludedByRegionsAbove;
-(BOOL)_canOccludeRegionsBelow;
-(BOOL)_isEnabledForFocusedRegion:(id)arg0 inSnapshot:(id)arg1 ;
-(BOOL)_shouldCropRegionToSearchArea;
-(BOOL)_shouldUseNextFocusedItemForLinearSorting;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_preferredDistanceComparisonType;
-(NSUInteger)_focusableBoundaries;
-(id)_debugAssociatedObject;
-(id)_debugDrawingConfigurationWithDebugInfo:(id)arg0 ;
-(id)_delegatePreferredFocusEnvironmentsForMovementRequest:(id)arg0 ;
-(id)_fallbackFocusItemForMovementRequest:(id)arg0 inFocusMap:(id)arg1 withSnapshot:(id)arg2 ;
-(id)_focusRegionWithAdjustedFrame:(struct CGRect )arg0 coordinateSpace:(id)arg1 ;
-(id)_focusedItemForLinearSorting:(id)arg0 inMap:(id)arg1 withSnapshot:(id)arg2 ;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg0 inMap:(id)arg1 withSnapshot:(id)arg2 ;
-(void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg0 ;


@end


#endif