// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCDIRECTIONALGAMEPAD_H
#define GCDIRECTIONALGAMEPAD_H

@class NSString;
@protocol CoalescableMicroGamepad, DigitizerValueChangedDelegate, DirectionPadValueChangedDelegate;


#import "GCMicroGamepad.h"
#import "GCControllerDirectionPad.h"
#import "GCControllerButtonInput.h"

@interface GCDirectionalGamepad : GCMicroGamepad <CoalescableMicroGamepad, DigitizerValueChangedDelegate, DirectionPadValueChangedDelegate>

 {
    BOOL _reportsAbsoluteDpadValues;
    float _touchpadRelativeWindowSize;
    float _touchpadRelativeOriginBufferSize;
    unsigned char _directionPadButtonsState;
    BOOL _centerButtonPressed;
    NSInteger _touchState;
    BOOL _leftBufferZone;
    BOOL _beganTouchOutsideBounds;
    float _previousButtonState;
    CGPoint _absoluteWindowLocation;
    CGPoint _absolutePosition;
    CGPoint _absoluteTouchDownPosition;
    CGPoint _relativePosition;
    GCControllerDirectionPad *_cardinalDpad;
    GCControllerButtonInput *_centerButton;
    BOOL _treatOnlyCenterRingAsButtonA;
    NSUInteger _owner;
    NSInteger _deviceType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger deviceType;
@property (readonly) GCControllerDirectionPad *dpad;
@property (readonly) GCControllerDirectionPad *dpad;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger owner;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(BOOL)allowsRotation;
-(BOOL)calculateRelativePositionWithDigitizerX:(float)arg0 digitizerY:(float)arg1 touchDown:(BOOL)arg2 ;
-(BOOL)determineTouchStateWithDigitizerX:(float)arg0 digitizerY:(float)arg1 touchDown:(BOOL)arg2 ;
-(BOOL)reportsAbsoluteDpadValues;
-(CGFloat)distanceBetweenCGPoint:(struct CGPoint )arg0 andCGPoint:(struct CGPoint )arg1 ;
-(CGFloat)magnitudeForCGPoint:(struct CGPoint )arg0 ;
-(id)centerButtonEvent:(id)arg0 pressed:(BOOL)arg1 ;
-(id)dpadDirectionEvent:(id)arg0 direction:(NSUInteger)arg1 pressed:(BOOL)arg2 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)productCategory;
-(struct CGPoint )addCGPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 ;
-(struct CGPoint )clampPoint:(struct CGPoint )arg0 toLength:(CGFloat)arg1 ;
-(struct CGPoint )mulCGPoint:(struct CGPoint )arg0 byScalar:(CGFloat)arg1 ;
-(struct CGPoint )normalizeCGPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )scaleCGPoint:(struct CGPoint )arg0 toLength:(CGFloat)arg1 ;
-(struct CGPoint )subCGPoint:(struct CGPoint )arg0 fromPoint:(struct CGPoint )arg1 ;
-(void)digitizerTouchEvent:(id)arg0 x:(CGFloat)arg1 y:(CGFloat)arg2 timestamp:(NSUInteger)arg3 forceSkipDpadRotation:(BOOL)arg4 ;
-(void)digitizerTouchUp:(id)arg0 timestamp:(NSUInteger)arg1 forceSkipDpadRotation:(BOOL)arg2 ;
-(void)reportDigitizerChange:(id)arg0 ;
-(void)reportDirectionpadChange:(id)arg0 onQueue:(id)arg1 ;
-(void)setAllowsRotation:(BOOL)arg0 ;
-(void)setReportsAbsoluteDpadValues:(BOOL)arg0 ;


@end


#endif