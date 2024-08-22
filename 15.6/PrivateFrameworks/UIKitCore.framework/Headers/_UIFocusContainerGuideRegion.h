// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSCONTAINERGUIDEREGION_H
#define _UIFOCUSCONTAINERGUIDEREGION_H

@class UIFocusGuideRegion;
@protocol _UIFocusRegionContainer;



@interface _UIFocusContainerGuideRegion : UIFocusGuideRegion

@property (weak, nonatomic) NSObject<_UIFocusRegionContainer> *contentFocusRegionContainer; // ivar: _contentFocusRegionContainer


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_focusableBoundaries;
-(id)_debugDrawingConfigurationWithDebugInfo:(id)arg0 ;
-(id)_fallbackFocusItemForMovementRequest:(id)arg0 inFocusMap:(id)arg1 withSnapshot:(id)arg2 ;
-(id)_focusRegionWithAdjustedFrame:(struct CGRect )arg0 coordinateSpace:(id)arg1 ;


@end


#endif