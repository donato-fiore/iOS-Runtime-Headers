// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIAGNOSTICHUDLAYER_H
#define DIAGNOSTICHUDLAYER_H

@class CALayer, CAShapeLayer, NSMutableArray;


#import "CRColor.h"

@interface DiagnosticHUDLayer : CALayer

@property (retain) CAShapeLayer *cameraAreaLayer; // ivar: _cameraAreaLayer
@property CGSize cameraResolution; // ivar: _cameraResolution
@property (retain) CAShapeLayer *focusIndicatorLayer; // ivar: _focusIndicatorLayer
@property (retain) CAShapeLayer *focusPointLayer; // ivar: _focusPointLayer
@property (retain) CAShapeLayer *frameIndicator; // ivar: _frameIndicator
@property (retain) CRColor *freshPointColor; // ivar: _freshPointColor
@property (retain) NSMutableArray *pointLayers; // ivar: _pointLayers
@property (retain) CALayer *previewLayer; // ivar: _previewLayer
@property CGRect previewLayerVisibleRect; // ivar: _previewLayerVisibleRect
@property (retain) CRColor *stalePointColor; // ivar: _stalePointColor


+(id)layer;
-(id)init;
-(void)layoutSublayers;
-(void)refreshFrameIndicator;
-(void)setAdjustingFocus:(BOOL)arg0 pointOfInterestSupported:(BOOL)arg1 focusPoint:(struct CGPoint )arg2 ;
-(void)setBoxPoints:(id)arg0 ;


@end


#endif