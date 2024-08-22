// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSPROMISEREGION_H
#define _UIFOCUSPROMISEREGION_H

@class UIFocusRegion;



@interface _UIFocusPromiseRegion : UIFocusRegion {
    id *_identifier;
    NSUInteger _fullfillmentCount;
}


@property (copy, nonatomic) id *contentFulfillmentHandler; // ivar: _contentFulfillmentHandler


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_focusableBoundaries;
-(id)_debugDrawingConfigurationWithDebugInfo:(id)arg0 ;
-(id)_descriptionBuilder;
-(id)_focusRegionWithAdjustedFrame:(struct CGRect )arg0 coordinateSpace:(id)arg1 ;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg0 inMap:(id)arg1 withSnapshot:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 coordinateSpace:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 coordinateSpace:(id)arg1 identifier:(id)arg2 ;


@end


#endif