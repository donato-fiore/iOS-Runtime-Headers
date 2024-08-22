// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSITEMREGION_H
#define _UIFOCUSITEMREGION_H

@class UIFocusRegion;
@protocol UIFocusItem;



@interface _UIFocusItemRegion : UIFocusRegion {
    ? _flags;
}


@property (readonly, weak, nonatomic) NSObject<UIFocusItem> *item; // ivar: _item


-(BOOL)_canBeOccludedByRegionsAbove;
-(BOOL)_canOccludeRegionsBelow;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_preferredDistanceComparisonType;
-(NSUInteger)_focusableBoundaries;
-(id)_debugAssociatedObject;
-(id)_debugDrawingConfigurationWithDebugInfo:(id)arg0 ;
-(id)_defaultFocusItem;
-(id)_descriptionBuilder;
-(id)_focusRegionWithAdjustedFrame:(struct CGRect )arg0 coordinateSpace:(id)arg1 ;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg0 inMap:(id)arg1 withSnapshot:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 coordinateSpace:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 coordinateSpace:(id)arg1 item:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 item:(id)arg1 ;


@end


#endif