// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPTEXTMAGNIFIERRANGED_H
#define TSWPTEXTMAGNIFIERRANGED_H

@class UIView, NSString;
@protocol TSWPTextMagnifier, TSWPTextMagnifierRendererDelegate;


#import "TSWPTextMagnifierTimeWeightedPoint.h"
#import "TSWPTextMagnifierRenderer.h"
#import "TSWPRep.h"

@interface TSWPTextMagnifierRanged : UIView <TSWPTextMagnifier, TSWPTextMagnifierRendererDelegate>

 {
    CGPoint _magnificationPoint;
    TSWPTextMagnifierTimeWeightedPoint *_weightedPoint;
    TSWPTextMagnifierRenderer *_magnifierRenderer;
    BOOL _inPlace;
}


@property (nonatomic) CGPoint animationPoint; // ivar: _animationPoint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint magnificationPoint;
@property (readonly, nonatomic) NSString *maskImageName;
@property (nonatomic) CGPoint offset; // ivar: _offset
@property (readonly, nonatomic) NSString *overlayImageName;
@property (readonly) Class superclass;
@property (retain, nonatomic) TSWPRep *target; // ivar: _target
@property (readonly, nonatomic) CGPoint terminalPoint;
@property (readonly, nonatomic) BOOL terminalPointPlacedCarefully;
@property (readonly, nonatomic) NSString *underlayImageName;


-(BOOL)shouldHideCanvasLayer;
-(BOOL)wasPlacedCarefullyAtTime:(CGFloat)arg0 ;
-(CGFloat)currentOffset;
-(CGFloat)horizontalMovement;
-(CGFloat)horizontalMovementAtTime:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)autoscrollWillNotStart;
-(void)beginMagnifyingTarget:(id)arg0 magnificationPoint:(struct CGPoint )arg1 offset:(struct CGPoint )arg2 animated:(BOOL)arg3 ;
-(void)canvasNeedsDisplay;
-(void)dealloc;
-(void)drawMagnifierClippedCanvasLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)postAutoscrollPoint:(struct CGPoint )arg0 ;
-(void)setAutoscrollDirections:(int)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsDisplay;
-(void)stopMagnifying:(BOOL)arg0 ;
-(void)updateFrame;


@end


#endif