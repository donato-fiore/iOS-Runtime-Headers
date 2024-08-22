// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPTDEFAULTPOINTERANDFINGERINTEROPPINGCOMPOSER_H
#define RPTDEFAULTPOINTERANDFINGERINTEROPPINGCOMPOSER_H

@class NSProxy, NSString, CAMediaTimingFunction, RCPEventSenderProperties;
@protocol RPTComposer, RCPEventStreamComposer;


#import "RPTInteractionOptions.h"

@interface RPTDefaultPointerAndFingerInteroppingComposer : NSProxy <RPTComposer>



@property (nonatomic) CGPoint _currentlySetAbsolutePosition; // ivar: __currentlySetAbsolutePosition
@property (readonly, nonatomic) BOOL _usePointer; // ivar: __usePointer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat defaultPressure;
@property (readonly, nonatomic) CGFloat defaultRadius;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<RCPEventStreamComposer> *forwardingTarget; // ivar: _forwardingTarget
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RPTInteractionOptions *interactionOptions; // ivar: _interactionOptions
@property (retain, nonatomic) CAMediaTimingFunction *pointerCurveFunction;
@property (nonatomic) CGFloat pointerFrequency;
@property (nonatomic) BOOL scalePointerPhaseScrollToPixels;
@property (retain, nonatomic) RCPEventSenderProperties *senderProperties;
@property (readonly) Class superclass;
@property (retain, nonatomic) CAMediaTimingFunction *touchCurveFunction;
@property (nonatomic) NSInteger touchFrequency;


+(id)composerWrapping:(id)arg0 withInteractionOptions:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initFromWrapping:(id)arg0 interactionOptions:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_pointerOrFingerFlickAt:(struct CGPoint )arg0 byDelta:(struct CGVector )arg1 duration:(CGFloat)arg2 ;
-(void)_pointerOrFingerScrollAt:(struct CGPoint )arg0 byDelta:(struct CGVector )arg1 duration:(CGFloat)arg2 touchDownAndLift:(BOOL)arg3 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)overrideInteractionOptions:(id)arg0 withEventActionsBlock:(id)arg1 ;
-(void)pointerMoveDelta:(struct CGPoint )arg0 duration:(CGFloat)arg1 frequency:(NSInteger)arg2 ;
-(void)pointerMoveToPoint:(struct CGPoint )arg0 duration:(CGFloat)arg1 ;
-(void)pointerMoveToPointIfApplicable:(struct CGPoint )arg0 ;
-(void)pointerOrFingerDoubleTap:(struct CGPoint )arg0 ;
-(void)pointerOrFingerDragWithStartPoint:(struct CGPoint )arg0 mask:(NSUInteger)arg1 endPoint:(struct CGPoint )arg2 mask:(NSUInteger)arg3 duration:(CGFloat)arg4 ;
-(void)pointerOrFingerMoveToPoint:(struct CGPoint )arg0 duration:(CGFloat)arg1 ;
-(void)pointerOrFingerScrollAt:(struct CGPoint )arg0 byDelta:(struct CGVector )arg1 duration:(CGFloat)arg2 ;
-(void)pointerOrFingerTap:(struct CGPoint )arg0 ;
-(void)pointerOrFingerTapDown:(struct CGPoint )arg0 ;
-(void)pointerOrFingerTapUp:(struct CGPoint )arg0 ;


@end


#endif