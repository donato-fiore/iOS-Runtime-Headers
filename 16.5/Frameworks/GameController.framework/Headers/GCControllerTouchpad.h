// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCCONTROLLERTOUCHPAD_H
#define GCCONTROLLERTOUCHPAD_H

@class NSString;


#import "GCControllerElement.h"
#import "GCControllerButtonInput.h"
#import "GCControllerDirectionPad.h"

@interface GCControllerTouchpad : GCControllerElement {
    float _touchpadRelativeWindowSize;
    float _touchpadRelativeOriginBufferSize;
    BOOL _leftBufferZone;
    BOOL _beganTouchOutsideBounds;
    float _previousButtonState;
    CGPoint _absoluteWindowLocation;
    CGPoint _absolutePosition;
    CGPoint _absoluteTouchDownPosition;
    CGPoint _relativePosition;
    NSString *_descriptionName;
}


@property (readonly, nonatomic) GCControllerButtonInput *button; // ivar: _button
@property (nonatomic) BOOL reportsAbsoluteTouchSurfaceValues; // ivar: _reportsAbsoluteTouchSurfaceValues
@property (copy, nonatomic) id *touchDown; // ivar: _touchDown
@property (copy, nonatomic) id *touchMoved; // ivar: _touchMoved
@property (readonly, nonatomic) NSInteger touchState; // ivar: _touchState
@property (retain, nonatomic) GCControllerDirectionPad *touchSurface; // ivar: _touchSurface
@property (copy, nonatomic) id *touchUp; // ivar: _touchUp


-(BOOL)calculateRelativePositionWithDigitizerX:(float)arg0 digitizerY:(float)arg1 touchDown:(BOOL)arg2 ;
-(BOOL)determineTouchStateWithDigitizerX:(float)arg0 digitizerY:(float)arg1 touchDown:(BOOL)arg2 ;
-(BOOL)setDigitizerX:(float)arg0 digitizerY:(float)arg1 touchDown:(BOOL)arg2 queue:(id)arg3 ;
-(CGFloat)distanceBetweenCGPoint:(struct CGPoint )arg0 andCGPoint:(struct CGPoint )arg1 ;
-(CGFloat)magnitudeForCGPoint:(struct CGPoint )arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDescriptionName:(id)arg0 ;
-(struct CGPoint )addCGPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 ;
-(struct CGPoint )clampPoint:(struct CGPoint )arg0 toLength:(CGFloat)arg1 ;
-(struct CGPoint )mulCGPoint:(struct CGPoint )arg0 byScalar:(CGFloat)arg1 ;
-(struct CGPoint )normalizeCGPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )scaleCGPoint:(struct CGPoint )arg0 toLength:(CGFloat)arg1 ;
-(struct CGPoint )subCGPoint:(struct CGPoint )arg0 fromPoint:(struct CGPoint )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reportDigitizerChange:(id)arg0 ;
-(void)setValueForXAxis:(float)arg0 yAxis:(float)arg1 touchDown:(BOOL)arg2 buttonValue:(float)arg3 ;


@end


#endif