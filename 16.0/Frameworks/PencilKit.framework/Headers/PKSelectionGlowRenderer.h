// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSELECTIONGLOWRENDERER_H
#define PKSELECTIONGLOWRENDERER_H

@class CALayer, NSMutableDictionary, UIBezierPath, NSString;
@protocol PKSelectionRendering, PKSelectionRenderingDelegate;

#import <Foundation/Foundation.h>

#import "PKSelectionModificationKnob.h"
#import "PKStrokeSelection.h"

@interface PKSelectionGlowRenderer : NSObject <PKSelectionRendering>

 {
    CALayer *_highlightLayer;
    CALayer *_strokePathsTilesLayer;
    PKSelectionModificationKnob *_leftKnob;
    PKSelectionModificationKnob *_rightKnob;
    NSInteger _knobDragMode;
    BOOL _isDraggingKnob;
    NSInteger _draggedKnobLocation;
    NSMutableDictionary *_tiles;
    UIBezierPath *_lassoPath;
    PKStrokeSelection *_strokeSelection;
    id<PKSelectionRenderingDelegate> *_renderingDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_accessibilityUserTestingChildren;
-(id)adornmentLayer;
-(id)initForLiveSelectionWithRenderingDelegate:(id)arg0 ;
-(id)initWithStrokeSelection:(id)arg0 renderingDelegate:(id)arg1 ;
-(id)lassoPath;
-(struct CGPoint )editMenuLocation;
-(void)_didBeginDraggingSelection;
-(void)_didEndDraggingSelection;
-(void)_renderLiveSelectionPath:(struct CGPath *)arg0 forStrokes:(id)arg1 inDrawing:(id)arg2 liveScrollOffset:(struct CGPoint )arg3 ;
-(void)_setupSelectionAdornment;


@end


#endif