// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSREGION_H
#define _UIFOCUSREGION_H

@class NSString, NSMutableArray;
@protocol _UIFocusDebugQuickLookImageDrawing, NSCopying, _UIFocusRegionContainer;

#import <Foundation/Foundation.h>

#import "_UIFocusRegion.h"

@interface _UIFocusRegion : NSObject <_UIFocusDebugQuickLookImageDrawing, NSCopying>



@property (readonly, weak, nonatomic, getter=_debugAssociatedObject) id *debugAssociatedObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, setter=_setFrame:) CGRect frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_mutableOccludingRegions, setter=_setMutableOccludingRegions:) NSMutableArray *mutableOccludingRegions; // ivar: _mutableOccludingRegions
@property (retain, nonatomic, getter=_originalRegion, setter=_setOriginRegion:) _UIFocusRegion *originalRegion; // ivar: _originalRegion
@property (retain, nonatomic) NSObject<_UIFocusRegionContainer> *regionContainer; // ivar: _regionContainer
@property (readonly) Class superclass;


+(id)__regionsByEvaluatingOcclusionsForBaseRegions:(id)arg0 occludingRegions:(id)arg1 baseRegionsCanOccludeEachOther:(BOOL)arg2 ;
+(id)_regionsByEvaluatingOcclusionsForRegions:(id)arg0 ;
+(id)_regionsByOccludingRegions:(id)arg0 beneathRegions:(id)arg1 ;
-(BOOL)_canBeOccludedByRegionsAbove;
-(BOOL)_canOccludeRegionsBelow;
-(BOOL)_ignoresSpeedBumpEdges;
-(BOOL)_isUnclippable;
-(BOOL)_shouldCropRegionToSearchArea;
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg0 ;
-(BOOL)_shouldUseNextFocusedItemForLinearSorting;
-(CGFloat)_focusPriority;
-(NSInteger)_preferredDistanceComparisonType;
-(NSUInteger)_boundariesBlockingFocusMovementRequest:(id)arg0 ;
-(NSUInteger)_effectiveBoundariesBlockingFocusMovementRequest:(id)arg0 ;
-(NSUInteger)_effectiveFocusableBoundariesForHeading:(NSUInteger)arg0 ;
-(NSUInteger)_focusableBoundaries;
-(id)_defaultFocusItem;
-(id)_focusedItemForLinearSorting:(id)arg0 inMap:(id)arg1 ;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg0 inMap:(id)arg1 ;
-(id)_occludingRegions;
-(id)_resizeToRect:(struct CGRect )arg0 ;
-(id)_subregionWithFrame:(struct CGRect )arg0 ;
-(id)_visibleSubregionsWhenOccludedByRegion:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_addOccludingRegion:(id)arg0 ;
-(void)_didParticipateAsDestinationRegionInFocusUpdate:(id)arg0 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg0 ;


@end


#endif