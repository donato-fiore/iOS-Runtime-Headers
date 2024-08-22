// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSPROMISEREGION_H
#define _UIFOCUSPROMISEREGION_H

@class UIFocusRegion;
@protocol _UIFocusRegionContainer;



@interface _UIFocusPromiseRegion : UIFocusRegion {
    id<_UIFocusRegionContainer> *_contentFocusRegionContainer;
}


@property (copy, nonatomic) id *contentFulfillmentHandler; // ivar: _contentFulfillmentHandler


-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg0 ;
-(NSInteger)_visualRepresentationPatternType;
-(NSUInteger)_focusableBoundaries;
-(id)_loadContentFocusRegionContainer;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg0 inMap:(id)arg1 ;
-(id)_visualRepresentationColor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif