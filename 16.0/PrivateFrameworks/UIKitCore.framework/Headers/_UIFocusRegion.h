// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSREGION_H
#define _UIFOCUSREGION_H

@protocol UICoordinateSpace;

#import <Foundation/Foundation.h>


@interface _UIFocusRegion : NSObject

@property (readonly, weak, nonatomic, getter=_debugAssociatedObject) id *debugAssociatedObject;
@property (readonly, nonatomic) NSObject<UICoordinateSpace> *regionCoordinateSpace; // ivar: _regionCoordinateSpace
@property (readonly, nonatomic) CGRect regionFrame; // ivar: _regionFrame


-(BOOL)_canBeOccludedByRegionsAbove;
-(BOOL)_canOccludeRegionsBelow;
-(BOOL)_ignoresSpeedBumpEdges;
-(BOOL)_isUnclippable;
-(BOOL)_shouldCropRegionToSearchArea;
-(BOOL)_shouldUseNextFocusedItemForLinearSorting;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_focusPriority;
-(NSInteger)_preferredDistanceComparisonType;
-(NSUInteger)_boundariesBlockingFocusMovementRequest:(id)arg0 ;
-(NSUInteger)_effectiveBoundariesBlockingFocusMovementRequest:(id)arg0 ;
-(NSUInteger)_effectiveFocusableBoundariesForHeading:(NSUInteger)arg0 ;
-(NSUInteger)_focusableBoundaries;
-(NSUInteger)hash;
-(id)_debugDrawingConfigurationWithDebugInfo:(id)arg0 ;
-(id)_defaultFocusItem;
-(id)_descriptionBuilder;
-(id)_focusRegionWithAdjustedFrame:(struct CGRect )arg0 coordinateSpace:(id)arg1 ;
-(id)_focusedItemForLinearSorting:(id)arg0 inMap:(id)arg1 withSnapshot:(id)arg2 ;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg0 inMap:(id)arg1 withSnapshot:(id)arg2 ;
-(id)description;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 coordinateSpace:(id)arg1 ;
-(void)_didParticipateAsDestinationRegionInFocusUpdate:(id)arg0 ;
-(void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg0 ;


@end


#endif