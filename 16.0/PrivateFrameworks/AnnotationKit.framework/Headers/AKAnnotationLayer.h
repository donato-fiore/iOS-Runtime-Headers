// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKANNOTATIONLAYER_H
#define AKANNOTATIONLAYER_H

@class CALayer;


#import "AKAnnotation.h"
#import "AKPageController.h"

@interface AKAnnotationLayer : CALayer

@property (retain) AKAnnotation *annotation; // ivar: _annotation
@property (retain, nonatomic) CALayer *fastPathLayer; // ivar: _fastPathLayer
@property BOOL isObservingAnnotation; // ivar: _isObservingAnnotation
@property BOOL lastRedrawWasForDrawingBounds; // ivar: _lastRedrawWasForDrawingBounds
@property (weak) AKPageController *pageController; // ivar: _pageController
@property BOOL shouldRecalculateLoupeImage; // ivar: _shouldRecalculateLoupeImage
@property BOOL wasLastDrawingClipped; // ivar: _wasLastDrawingClipped


+(id)newAnnotationLayerForAnnotation:(id)arg0 withPageController:(id)arg1 ;
-(id)_initWithAnnotation:(id)arg0 andPageController:(id)arg1 ;
-(id)actionForKey:(id)arg0 ;
-(void)_addDebugVisuals;
-(void)_removeDebugVisuals;
-(void)_startObservingAnnotation;
-(void)_stopObservingAnnotation;
-(void)_updateAnnotationLayerWithLoupeFastPath:(BOOL)arg0 ;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateContents;
-(void)updatePixelAlignment;


@end


#endif