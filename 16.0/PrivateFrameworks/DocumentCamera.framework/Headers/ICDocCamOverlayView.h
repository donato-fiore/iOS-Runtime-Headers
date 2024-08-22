// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDOCCAMOVERLAYVIEW_H
#define ICDOCCAMOVERLAYVIEW_H

@class UIView, NSDate, NSString, NSArray, UILabel, CAGradientLayer, CAAnimation, CAShapeLayer, UIColor;
@protocol CAAnimationDelegate, OS_dispatch_semaphore;


#import "ICDocCamImageQuad.h"

@interface ICDocCamOverlayView : UIView <CAAnimationDelegate>

 {
    NSObject<OS_dispatch_semaphore> *sem;
}


@property (retain, nonatomic) NSDate *dateToStartGridAnimation; // ivar: _dateToStartGridAnimation
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSArray *debugRects; // ivar: _debugRects
@property (readonly, copy) NSString *description;
@property (retain) NSString *displayString; // ivar: _displayString
@property (retain, nonatomic) UILabel *displayStringLabel; // ivar: _displayStringLabel
@property (retain) ICDocCamImageQuad *documentQuad; // ivar: _documentQuad
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer; // ivar: _gradientMaskLayer
@property (retain, nonatomic) CAAnimation *gridAnimation; // ivar: _gridAnimation
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CAShapeLayer *llShapeLayer; // ivar: _llShapeLayer
@property (retain, nonatomic) CAShapeLayer *lrShapeLayer; // ivar: _lrShapeLayer
@property NSUInteger numberOfMissedFrames; // ivar: _numberOfMissedFrames
@property CGRect previewBounds; // ivar: _previewBounds
@property (retain) UIColor *rectColor; // ivar: _rectColor
@property (retain, nonatomic) CAShapeLayer *rectangleGridLayer; // ivar: _rectangleGridLayer
@property (nonatomic) BOOL rectangleIsActive; // ivar: _rectangleIsActive
@property (retain, nonatomic) CAShapeLayer *rectangleShapeLayer; // ivar: _rectangleShapeLayer
@property BOOL showGridAnimation; // ivar: _showGridAnimation
@property (readonly) Class superclass;
@property (retain, nonatomic) CAShapeLayer *ulShapeLayer; // ivar: _ulShapeLayer
@property (retain, nonatomic) CAShapeLayer *urShapeLayer; // ivar: _urShapeLayer


-(CGFloat)crossProduct:(struct CGPoint )arg0 v2:(struct CGPoint )arg1 ;
-(id)calculateCurrentRectangleFromDocumentQuad:(id)arg0 ;
-(id)extrudedRectFromRect:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)tintColorWithAlpha:(CGFloat)arg0 ;
-(struct CATransform3D )calculateRotationTransformForPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 ;
-(struct CGPath *)newGridPathFromRect:(id)arg0 ;
-(struct CGPath *)newPathFromRect:(id)arg0 ;
-(struct CGRect )frameForContentInView;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)clearRectangles;
-(void)setupGridLayers;
-(void)setupRectangleLayer;
-(void)setupShapeLayersIfNeeded;
-(void)startGridAnimationFromRect:(id)arg0 ;
-(void)stopGridAnimation;
-(void)updateGridLayerFromRect:(id)arg0 ;
-(void)updateRectangleLayerFromRect:(id)arg0 ;
-(void)updateShapeLayers;


@end


#endif