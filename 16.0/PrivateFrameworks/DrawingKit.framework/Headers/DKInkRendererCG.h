// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DKINKRENDERERCG_H
#define DKINKRENDERERCG_H

@class UIView, NSMutableArray, NSString, UIColor;
@protocol DKInkRenderer, DKInkRendererDelegate;



@interface DKInkRendererCG : UIView <DKInkRenderer>



@property (retain, nonatomic) NSMutableArray *cachedInterpolatedBrushStrokes; // ivar: _cachedInterpolatedBrushStrokes
@property (retain, nonatomic) NSMutableArray *currentInterpolatedBrushStroke; // ivar: _currentInterpolatedBrushStroke
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DKInkRendererDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL drawingEnabled; // ivar: drawingEnabled
@property (nonatomic) CGFloat drawingScale; // ivar: drawingScale
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL initialized;
@property (retain, nonatomic) UIColor *inkColor; // ivar: inkColor
@property (nonatomic) CGRect invalidRect; // ivar: _invalidRect
@property (readonly, nonatomic) NSUInteger maximumPointsForBleedAnimation;
@property (nonatomic) NSUInteger mode; // ivar: mode
@property (nonatomic) BOOL scaleDrawingToFitCanvas; // ivar: scaleDrawingToFitCanvas
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsBleedAnimation;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)snapshotImage;
-(void)_commonInit;
-(void)addPoint:(struct ? )arg0 ;
-(void)beginStroke;
-(void)clear;
-(void)completeAnimationsImmediately;
-(void)dealloc;
-(void)display;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)endStroke;
-(void)flush;
-(void)force;
-(void)removeLastStroke;
-(void)resetRendererState;
-(void)teardown;


@end


#endif