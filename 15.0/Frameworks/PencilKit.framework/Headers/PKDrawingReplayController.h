// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDRAWINGREPLAYCONTROLLER_H
#define PKDRAWINGREPLAYCONTROLLER_H

@class NSMutableArray, UITextField;

#import <Foundation/Foundation.h>

#import "PKTiledCanvasView.h"
#import "PKDrawing.h"
#import "PKTextInputDrawingGestureRecognizer.h"
#import "PKTextInputInteraction.h"

@interface PKDrawingReplayController : NSObject

@property (nonatomic) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) PKTiledCanvasView *canvasView; // ivar: _canvasView
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) CGPoint currentOffset; // ivar: _currentOffset
@property (nonatomic) NSUInteger currentPointIndex; // ivar: _currentPointIndex
@property (nonatomic) BOOL disablePencilInput;
@property (retain, nonatomic) PKDrawing *drawing; // ivar: _drawing
@property (weak, nonatomic) PKTextInputDrawingGestureRecognizer *drawingGestureRecognizer; // ivar: _drawingGestureRecognizer
@property (nonatomic) BOOL isAnimating; // ivar: _isAnimating
@property (nonatomic) CGPoint originOffset; // ivar: _originOffset
@property (retain, nonatomic) NSMutableArray *pointArray; // ivar: _pointArray
@property (nonatomic) BOOL setupComplete; // ivar: _setupComplete
@property (nonatomic) CGFloat speedRatio; // ivar: _speedRatio
@property (nonatomic) CGPoint startingTextFieldOrigin; // ivar: _startingTextFieldOrigin
@property (weak, nonatomic) UITextField *textField; // ivar: _textField
@property (weak, nonatomic) PKTextInputInteraction *textInputInteraction; // ivar: _textInputInteraction
@property (nonatomic) CGAffineTransform transform; // ivar: _transform


+(BOOL)isDrawingInProgressForWindow:(id)arg0 ;
-(BOOL)shouldEndDrawing;
-(id)initWithDrawing:(id)arg0 transform:(struct CGAffineTransform )arg1 sourceTextField:(id)arg2 ;
-(id)initWithSourceTextField:(id)arg0 ;
-(id)pencilTextInputInteractionFromWindowScene:(id)arg0 ;
-(void)_beginDrawing;
-(void)_beginStrokeWithPoint:(id)arg0 ;
-(void)_endDrawing;
-(void)_loadPointArray;
-(void)_processNextPoint;
-(void)_setUpIfNecessary;
-(void)_strokeEndedWithReplayPoint:(id)arg0 ;
-(void)_strokeMovedWithReplayPoint:(id)arg0 ;
-(void)beginDrawingAnimationAtPoint:(struct CGPoint )arg0 completion:(id)arg1 ;
-(void)beginDrawingAnimationAtRange:(struct _NSRange )arg0 offset:(struct CGPoint )arg1 completion:(id)arg2 ;
-(void)beginInsertTextAnimationAtIndex:(NSUInteger)arg0 offset:(struct CGPoint )arg1 completion:(id)arg2 ;
-(void)cancel;
-(void)dealloc;


@end


#endif