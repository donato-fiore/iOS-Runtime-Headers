// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSELECTIONHIGHLIGHTRENDERER_H
#define PKSELECTIONHIGHLIGHTRENDERER_H

@class CAShapeLayer, UIBezierPath, NSString;
@protocol PKSelectionRendering, PKSelectionRenderingDelegate;

#import <Foundation/Foundation.h>

#import "PKStrokeSelection.h"

@interface PKSelectionHighlightRenderer : NSObject <PKSelectionRendering>

 {
    CAShapeLayer *_highlightLayer;
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