// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKADORNMENTLAYER_H
#define AKADORNMENTLAYER_H

@class CALayer;


#import "AKAnnotation.h"
#import "AKPageController.h"

@interface AKAdornmentLayer : CALayer

@property (retain) AKAnnotation *annotation; // ivar: _annotation
@property CGFloat currentScaleFactor; // ivar: _currentScaleFactor
@property (retain) CALayer *handleContainerLayer; // ivar: _handleContainerLayer
@property BOOL isObservingAnnotation; // ivar: _isObservingAnnotation
@property BOOL isObservingEventHandling; // ivar: _isObservingEventHandling
@property (weak) AKPageController *pageController; // ivar: _pageController


+(Class)_adornmentClassForAnnotation:(id)arg0 ;
+(id)newAdornmentLayerForAnnotation:(id)arg0 withPageController:(id)arg1 ;
-(BOOL)needsUpdateWhenDraggingStartsOrEnds;
-(NSUInteger)currentlyDraggedArea;
-(id)_initWithAnnotation:(id)arg0 andPageController:(id)arg1 ;
-(id)actionForKey:(id)arg0 ;
-(void)_addHandleSublayerAtPoint:(struct CGPoint )arg0 withStyle:(NSUInteger)arg1 ;
-(void)_startObservingAnnotation;
-(void)_startObservingAnnotationEventHandlers;
-(void)_stopObservingAnnotation;
-(void)_stopObservingAnnotationEventHandlers;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)teardown;
-(void)updateAdornmentElements;
-(void)updatePixelAlignment;
-(void)updateSublayersWithScale:(CGFloat)arg0 ;


@end


#endif