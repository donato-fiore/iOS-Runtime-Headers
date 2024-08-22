// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDGUIDEDPANCONTROLLER_H
#define TSDGUIDEDPANCONTROLLER_H

@class UIScrollView;
@protocol TSDPanGuide;

#import <Foundation/Foundation.h>

#import "TSDCanvasLayer.h"
#import "TSDCanvasView.h"
#import "TSDInteractiveCanvasController.h"

@interface TSDGuidedPanController : NSObject

@property (nonatomic) TSDCanvasLayer *canvasLayer; // ivar: _canvasLayer
@property (nonatomic) UIScrollView *canvasScrollView; // ivar: _canvasScrollView
@property (nonatomic) TSDCanvasView *canvasView; // ivar: _canvasView
@property (readonly, nonatomic) ? centerPlusMovementContentPlacement;
@property (retain, nonatomic) NSObject<TSDPanGuide> *guide; // ivar: _guide
@property (nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // ivar: _interactiveCanvasController
@property (nonatomic) CGPoint movement; // ivar: _movement
@property (nonatomic) CGPoint startPoint; // ivar: _startPoint
@property (readonly, nonatomic) ? touchContentPlacement;
@property (nonatomic) CGPoint velocity; // ivar: _velocity


-(id)convertContentLocation:(id)arg0 fromPlacement:(struct ? )arg1 toPlacement:(struct ? )arg2 ;
-(id)initWithInteractiveCanvasController:(id)arg0 ;
-(id)p_convertContentLocation:(id)arg0 fromPlacement:(struct ? )arg1 toPlacement:(struct ? )arg2 ;
-(id)p_currentContentLocationWithPlacement:(struct ? )arg0 ;
-(struct CATransform3D )p_transformForContentLocation:(id)arg0 placement:(struct ? )arg1 ;
-(struct CGPoint )p_boundsOffsetForContentLocation:(id)arg0 placement:(struct ? )arg1 ;
-(void)dealloc;
-(void)handlePanGesture:(id)arg0 ;
-(void)p_didEnd;
-(void)p_scrollToContentLocation:(id)arg0 placement:(struct ? )arg1 ;
-(void)p_willBegin;


@end


#endif