// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCPSYNTHETICEVENTSTREAM_H
#define RCPSYNTHETICEVENTSTREAM_H

@class NSMutableArray, NSString;
@protocol RCPEventStreamComposer, RCPFluidSwipeGesturesEventStreamComposer, RCPCrownEventStreamComposer, RCPPointerEventStreamComposer, RCPNaturalInputCollectionEventStreamComposer;


#import "RCPEventStream.h"
#import "RCPPointerTrackingChildEventStream.h"
#import "RCPEventSenderProperties.h"

@interface RCPSyntheticEventStream : RCPEventStream <RCPEventStreamComposer, RCPFluidSwipeGesturesEventStreamComposer, RCPCrownEventStreamComposer, RCPPointerEventStreamComposer, RCPNaturalInputCollectionEventStreamComposer>

 {
    NSMutableArray *_processingEventBuffer;
    CGFloat _currentTimeOffset;
    NSInteger _generationCount;
}


@property (nonatomic) NSUInteger activePointCount; // ivar: _activePointCount
@property (readonly, nonatomic) *? activePoints; // ivar: _activePoints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat defaultPressure;
@property (readonly, nonatomic) CGFloat defaultRadius;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize gsScreenPointSize; // ivar: _gsScreenPointSize
@property (nonatomic) CGFloat gsScreenScaleFactor; // ivar: _gsScreenScaleFactor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RCPPointerTrackingChildEventStream *pointerChildEventStream; // ivar: _pointerChildEventStream
@property (nonatomic) CGFloat pointerFrequency; // ivar: _pointerFrequency
@property (readonly, nonatomic) CGSize screenSize; // ivar: _screenSize
@property (retain, nonatomic) RCPEventSenderProperties *senderProperties; // ivar: _senderProperties
@property (readonly) Class superclass;
@property (nonatomic) NSInteger touchFrequency; // ivar: _touchFrequency
@property (nonatomic) unsigned int transducerType; // ivar: _transducerType


+(id)eventStreamWithCLIArguments:(id)arg0 ;
+(id)eventStreamWithEventActions:(id)arg0 ;
-(BOOL)_isEdgePoint:(struct CGPoint )arg0 getMask:(*unsigned int)arg1 ;
-(CGFloat)touchMoveInterval;
-(NSUInteger)_currentMachTime;
-(id)_splitStringIntoArrayOfCharacters:(id)arg0 ;
-(id)init;
-(struct CGPoint )_normalizePoint:(struct CGPoint )arg0 ;
-(struct __IOHIDEvent *)_createIOHIDGameControllerEventForDpadButton:(NSInteger)arg0 ;
-(struct __IOHIDEvent *)_createIOHIDWithEventType:(NSInteger)arg0 ;
-(struct __IOHIDEvent *)_createIOSButtonHIDEventWithButtonType:(NSInteger)arg0 down:(BOOL)arg1 ;
-(struct __IOHIDEvent *)_createIOSButtonHIDEventWithPage:(unsigned int)arg0 usage:(unsigned int)arg1 down:(BOOL)arg2 ;
-(struct __IOHIDEvent *)_parentZeroPointerEvent;
-(void)_addIOHIDEventToProcessingBuffer:(struct __IOHIDEvent *)arg0 ;
-(void)_delayBetweenMove:(int)arg0 elapsedTime:(CGFloat)arg1 ;
-(void)_dragWithStartPoint:(struct CGPoint )arg0 mask:(NSUInteger)arg1 endPoint:(struct CGPoint )arg2 mask:(NSUInteger)arg3 duration:(CGFloat)arg4 tapAndWait:(CGFloat)arg5 lift:(BOOL)arg6 ;
-(void)_finalizeHomeButtonEvents;
-(void)_finalizePointerButtonMasks;
-(void)_finalizeProcessingEventBuffer;
-(void)_flickWithStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 duration:(CGFloat)arg2 ;
-(void)_initScreenProperties;
-(void)_initScreenPropertiesForScreen:(id)arg0 ;
-(void)_knobEventForOffset:(struct CGVector )arg0 buttonMask:(unsigned int)arg1 oldButtonMask:(unsigned int)arg2 ;
-(void)_moveLastTouchPoint:(struct CGPoint )arg0 eventMask:(NSUInteger)arg1 ;
-(void)_pressButtonEventForIndex:(NSInteger)arg0 down:(BOOL)arg1 ;
-(void)_setMajorRadiusForAllPoints:(CGFloat)arg0 ;
-(void)_setPressureForAllPoints:(CGFloat)arg0 ;
-(void)_tap:(struct CGPoint )arg0 withPressure:(CGFloat)arg1 ;
-(void)_touchDownAtPoints:(struct CGPoint *)arg0 touchCount:(NSUInteger)arg1 pressure:(CGFloat)arg2 radius:(CGFloat)arg3 edgeMaskOptions:(struct ? *)arg4 ;
-(void)_updateTouchPoints:(struct CGPoint *)arg0 count:(NSUInteger)arg1 ;
-(void)_withPointerEventStreamAtFrequency:(NSInteger)arg0 perform:(id)arg1 ;
-(void)_wrapInPointerParentAndAddToProcessingBuffer:(struct __IOHIDEvent *)arg0 ;
-(void)advanceTime:(CGFloat)arg0 ;
-(void)beginButtonPressWithPage:(NSUInteger)arg0 usage:(NSUInteger)arg1 ;
-(void)composeDockGestureInMotion:(unsigned short)arg0 frequency:(NSUInteger)arg1 actionBlock:(id)arg2 ;
-(void)composeDockGestureOfFlavor:(unsigned short)arg0 motion:(unsigned short)arg1 frequency:(NSUInteger)arg2 actionBlock:(id)arg3 ;
-(void)composeNavigationGestureInMotion:(unsigned short)arg0 frequency:(NSUInteger)arg1 actionBlock:(id)arg2 ;
-(void)composeWithSender:(id)arg0 actionBlock:(id)arg1 ;
-(void)dealloc;
-(void)doubleFingerTap:(struct CGPoint )arg0 ;
-(void)doubleTap:(struct CGPoint )arg0 ;
-(void)dragWithStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 duration:(CGFloat)arg2 ;
-(void)dragWithStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 duration:(CGFloat)arg2 tapAndWait:(CGFloat)arg3 lift:(BOOL)arg4 ;
-(void)dragWithStartPoint:(struct CGPoint )arg0 mask:(NSUInteger)arg1 endPoint:(struct CGPoint )arg2 mask:(NSUInteger)arg3 duration:(CGFloat)arg4 ;
-(void)edgeOrb:(struct CGPoint )arg0 ;
-(void)edgeOrbSwipe:(struct CGPoint )arg0 withEndLocation:(struct CGPoint )arg1 withDuration:(CGFloat)arg2 ;
-(void)endButtonPressWithPage:(NSUInteger)arg0 usage:(NSUInteger)arg1 ;
-(void)flipRingerSwitchToValue:(BOOL)arg0 ;
-(void)knobNudge:(struct CGVector )arg0 buttonMask:(unsigned int)arg1 duration:(CGFloat)arg2 ;
-(void)liftUp:(struct CGPoint )arg0 ;
-(void)liftUp:(struct CGPoint )arg0 touchCount:(NSUInteger)arg1 ;
-(void)liftUpActivePointsByIndex:(id)arg0 ;
-(void)liftUpAtAllActivePoints;
-(void)liftUpAtAllActivePointsWithEventType:(NSInteger)arg0 ;
-(void)liftUpAtPoints:(struct CGPoint *)arg0 touchCount:(NSUInteger)arg1 ;
-(void)moveToPoint:(struct CGPoint )arg0 duration:(CGFloat)arg1 ;
-(void)moveToPoints:(struct CGPoint *)arg0 touchCount:(NSUInteger)arg1 duration:(CGFloat)arg2 ;
-(void)moveToPoints:(struct CGPoint *)arg0 touchCount:(NSUInteger)arg1 pressure:(CGFloat)arg2 duration:(CGFloat)arg3 ;
-(void)moveToPoints:(struct CGPoint *)arg0 touchCount:(NSUInteger)arg1 pressure:(CGFloat)arg2 duration:(CGFloat)arg3 radius:(CGFloat)arg4 ;
-(void)multifingerDragWithPointArray:(struct CGPoint *)arg0 numPoints:(NSUInteger)arg1 duration:(CGFloat)arg2 numFingers:(NSUInteger)arg3 ;
-(void)peekAndPop:(struct CGPoint )arg0 commit:(BOOL)arg1 duration:(CGFloat)arg2 ;
-(void)pinchCloseWithStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 duration:(CGFloat)arg2 ;
-(void)pinchOpenWithStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 duration:(CGFloat)arg2 ;
-(void)pointerBeginPressingButton:(NSInteger)arg0 ;
-(void)pointerDiscreteGesture:(id)arg0 duration:(CGFloat)arg1 frequency:(NSInteger)arg2 ;
-(void)pointerDiscreteScroll:(struct CGPoint )arg0 duration:(CGFloat)arg1 ;
-(void)pointerDiscreteScroll:(struct CGPoint )arg0 duration:(CGFloat)arg1 frequency:(NSInteger)arg2 ;
-(void)pointerEndPressingButton:(NSInteger)arg0 ;
-(void)pointerMoveByDelta:(struct CGVector )arg0 duration:(CGFloat)arg1 ;
-(void)pointerMoveDelta:(struct CGPoint )arg0 duration:(CGFloat)arg1 frequency:(NSInteger)arg2 ;
-(void)pointerMoveFromOriginPoint:(struct CGPoint )arg0 toDestinationPoint:(struct CGPoint )arg1 duration:(CGFloat)arg2 frequency:(NSInteger)arg3 ;
-(void)pointerMoveToPoint:(struct CGPoint )arg0 duration:(CGFloat)arg1 ;
-(void)pointerPhasedScroll:(struct CGPoint )arg0 duration:(CGFloat)arg1 ;
-(void)pointerPhasedScroll:(struct CGPoint )arg0 duration:(CGFloat)arg1 frequency:(NSInteger)arg2 ;
-(void)pointerRotation:(CGFloat)arg0 duration:(CGFloat)arg1 frequency:(NSInteger)arg2 ;
-(void)pointerScale:(CGFloat)arg0 duration:(CGFloat)arg1 frequency:(NSInteger)arg2 ;
-(void)pointerSetAbsolutePosition:(struct CGPoint )arg0 ;
-(void)pointerTranslatation:(struct CGPoint )arg0 duration:(CGFloat)arg1 frequency:(NSInteger)arg2 ;
-(void)pressButtons:(id)arg0 duration:(CGFloat)arg1 ;
-(void)pressButtonsWithPages:(id)arg0 usages:(id)arg1 duration:(CGFloat)arg2 ;
-(void)pressDiscreteGameControllerButton:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)rotate:(struct CGPoint )arg0 withRadius:(CGFloat)arg1 rotation:(CGFloat)arg2 duration:(CGFloat)arg3 touchCount:(NSUInteger)arg4 ;
-(void)rotateCrown:(CGFloat)arg0 direction:(NSInteger)arg1 duration:(CGFloat)arg2 ;
-(void)sendFlickWithStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 duration:(CGFloat)arg2 ;
-(void)sendUnicodeString:(id)arg0 ;
-(void)sendUnicodeString:(id)arg0 synthesizePerCharacterEvents:(BOOL)arg1 durationBetweenEvents:(CGFloat)arg2 ;
-(void)sendUnicodeStringByCharacters:(id)arg0 durationBetweenEvents:(CGFloat)arg1 ;
-(void)stylusBarrelDoubleTap;
-(void)tap:(struct CGPoint )arg0 ;
-(void)tapToWakeAtPoint:(struct CGPoint )arg0 ;
-(void)taps:(NSUInteger)arg0 location:(struct CGPoint )arg1 withNumberOfTouches:(NSUInteger)arg2 ;
-(void)tapsNoLift:(NSUInteger)arg0 location:(struct CGPoint )arg1 withNumberOfTouches:(NSUInteger)arg2 ;
-(void)touchDown:(struct CGPoint )arg0 ;
-(void)touchDown:(struct CGPoint )arg0 touchCount:(NSUInteger)arg1 ;
-(void)touchDownAtPoints:(struct CGPoint *)arg0 touchCount:(NSUInteger)arg1 ;
-(void)touchDownAtPoints:(struct CGPoint *)arg0 touchCount:(NSUInteger)arg1 pressure:(CGFloat)arg2 ;
-(void)touchDownAtPoints:(struct CGPoint *)arg0 touchCount:(NSUInteger)arg1 pressure:(CGFloat)arg2 radius:(CGFloat)arg3 ;
-(void)touchTapDown:(struct CGPoint )arg0 ;
-(void)withExclusiveChildStream:(id)arg0 perform:(id)arg1 ;


@end


#endif