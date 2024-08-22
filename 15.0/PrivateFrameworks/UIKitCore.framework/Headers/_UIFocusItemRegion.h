// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg0 ;
-(NSInteger)_preferredDistanceComparisonType;
-(NSInteger)_visualRepresentationPatternType;
-(NSUInteger)_focusableBoundaries;
-(id)_debugAssociatedObject;
-(id)_defaultFocusItem;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg0 inMap:(id)arg1 ;
-(id)_visualRepresentationColor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 item:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif