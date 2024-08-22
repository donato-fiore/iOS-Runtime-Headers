// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTCANVASCONTROLLER_H
#define PKTEXTINPUTCANVASCONTROLLER_H

@class NSMutableSet, NSMutableDictionary, UIColor, NSString;
@protocol PKTiledCanvasViewDelegate, PKTextInputDebugStateReporting, PKTextInputCanvasControllerDelegate, PKTextInputCanvasControllerChangeObserver;

#import <Foundation/Foundation.h>

#import "PKStroke.h"
#import "PKTiledCanvasView.h"
#import "PKTextInputFloatingBackgroundView.h"

@interface PKTextInputCanvasController : NSObject <PKTiledCanvasViewDelegate, PKTextInputDebugStateReporting>

 {
    NSMutableSet *_recentlyRemovedStrokeIDs;
    BOOL _useSlidingCanvas;
    vector<CGPoint, std::allocator<CGPoint>> _currentStrokePoints;
    NSMutableDictionary *_strokeColorForStrokeUUID;
    PKStroke *_currentStroke;
    BOOL _wantsCanvasVisible;
    BOOL _wantsCanvasViewLoaded;
    id<PKTextInputCanvasControllerDelegate> *_delegate;
    id<PKTextInputCanvasControllerChangeObserver> *_changeObserver;
    UIColor *_strokeColor;
    PKTiledCanvasView *__canvasView;
    PKTextInputFloatingBackgroundView *__floatingBackgroundView;
    CGRect _floatingBackgroundRect;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canvasViewShouldDisableShapeRecognition:(id)arg0 ;
-(id)canvasView:(id)arg0 inkForStroke:(id)arg1 ;
-(id)canvasViewTouchView:(id)arg0 ;
-(id)init;
-(void)canvasView:(id)arg0 beganStroke:(id)arg1 ;
-(void)canvasView:(id)arg0 cancelledStroke:(id)arg1 ;
-(void)canvasView:(id)arg0 didPresentWithCanvasOffset:(struct CGPoint )arg1 ;
-(void)canvasView:(id)arg0 drawingDidChange:(id)arg1 ;
-(void)canvasView:(id)arg0 endedStroke:(id)arg1 ;
-(void)canvasViewDidBeginDrawing:(id)arg0 ;
-(void)canvasViewDidEndDrawing:(id)arg0 ;
-(void)canvasViewDidFinishAnimatingStrokes:(id)arg0 ;
-(void)canvasViewDrawingMoved:(id)arg0 withTouch:(id)arg1 ;
-(void)canvasViewHasVisibleStrokesChanged:(id)arg0 ;
-(void)canvasViewWillBeginNewStroke:(id)arg0 withTouch:(id)arg1 ;
-(void)dealloc;
-(void)replayCanvasViewDrawingMoved:(id)arg0 inputPoint:(struct ? )arg1 ;
-(void)reportDebugStateDescription:(id)arg0 ;


@end


#endif