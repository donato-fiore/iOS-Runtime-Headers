// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPTEXTMAGNIFIERCARET_H
#define TSWPTEXTMAGNIFIERCARET_H

@class UIView, NSString;
@protocol TSWPTextMagnifier, TSWPTextMagnifierRendererDelegate;


#import "TSWPTextMagnifierTimeWeightedPoint.h"
#import "TSWPTextMagnifierRenderer.h"
#import "TSWPRep.h"

@interface TSWPTextMagnifierCaret : UIView <TSWPTextMagnifier, TSWPTextMagnifierRendererDelegate>

 {
    TSWPTextMagnifierTimeWeightedPoint *_weightedPoint;
    TSWPTextMagnifierRenderer *_magnifierRenderer;
}


@property (nonatomic) CGPoint animationPoint; // ivar: _magnificationPoint
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
@property (nonatomic) CGFloat yOffset; // ivar: _yOffset


+(id)sharedCaretMagnifier;
-(BOOL)shouldHideCanvasLayer;
-(id)initWithDefaultFrame;
-(void)autoscrollWillNotStart;
-(void)beginMagnifyingTarget:(id)arg0 magnificationPoint:(struct CGPoint )arg1 offset:(struct CGPoint )arg2 animated:(BOOL)arg3 ;
-(void)dealloc;
-(void)drawMagnifierClippedCanvasLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)postAutoscrollPoint:(struct CGPoint )arg0 ;
-(void)remove;
-(void)setAutoscrollDirections:(int)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsDisplay;
-(void)stopMagnifying:(BOOL)arg0 ;
-(void)updateFrameAndOffset;
-(void)zoomDownAnimation;
-(void)zoomUpAnimation;


@end


#endif