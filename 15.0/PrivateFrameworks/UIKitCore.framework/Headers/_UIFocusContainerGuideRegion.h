// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSCONTAINERGUIDEREGION_H
#define _UIFOCUSCONTAINERGUIDEREGION_H

@class UIFocusGuideRegion;
@protocol _UIFocusRegionContainer;



@interface _UIFocusContainerGuideRegion : UIFocusGuideRegion

@property (weak, nonatomic) NSObject<_UIFocusRegionContainer> *contentFocusRegionContainer; // ivar: _contentFocusRegionContainer


-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg0 ;
-(NSUInteger)_focusableBoundaries;
-(id)_fallbackFocusItemForMovementRequest:(id)arg0 inFocusMap:(id)arg1 ;
-(id)_visualRepresentationColor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif