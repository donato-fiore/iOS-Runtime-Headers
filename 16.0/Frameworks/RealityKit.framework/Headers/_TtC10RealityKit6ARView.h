// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10REALITYKIT6ARVIEW_H
#define _TTC10REALITYKIT6ARVIEW_H

@class UIView, NSArray, CALayer, ARSession;
@protocol UIGestureRecognizerDelegate, ARSessionProviding;



@interface _TtC10RealityKit6ARView : UIView <UIGestureRecognizerDelegate, ARSessionProviding>

 {
    ? _scene;
    ? __delegatePrivate;
    ? initialized;
    ? engineStartedByThisView;
    ? currentIBL;
    ? environment;
    ? __environmentEntity;
    ? __enableAutomaticFrameRate;
    ? __preferredFrameRate;
    ? singleTapGesture;
    ? engineWasRunningWhenLastInTheForeground;
    ? backingLayer;
    ? useCAMetalLayer;
    ? pauseEngineOnLeaveForeground;
    ? __renderGraphEmitter;
    ? __forceLocalizedProbes;
    ? __parallaxBackgroundProbe;
    ? layerHandle;
    ? updateSubscription;
    ? renderSubscription;
    ? realityFusionSession;
    ? arSystem;
    ? renderView;
    ? interfaceOrientation;
    ? lastInterfaceOrientation;
    ? viewCounterRotating;
    ? updateAfterCounterRotation;
    ? sessionComponents;
    ? __disableCounterRotation;
    ? __disableComposition;
    ? __nonARKitDevices;
    ? enablePresentsWithTransaction;
    ? presentsWithTransactionFrames;
    ? __statisticsOptions;
    ? __disableStatisticsRendering;
}


@property (nonatomic) CGFloat contentScaleFactor;
@property (nonatomic, readonly) NSArray *entityAccessibilityWrappers;
@property (nonatomic, readonly) CALayer *renderLayer;
@property (nonatomic, retain) ARSession *session;


+(Class)layerClass;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)handleTapForEntityAccessibilityWrapper:(id)arg0 ;
-(float)distanceInMetersFromEntityAccessibilityWrapper:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)handleRotation:(id)arg0 ;
-(void)handleScale:(id)arg0 ;
-(void)handleSingleTapWithRecognizer:(id)arg0 ;
-(void)handleTranslation:(id)arg0 ;
-(void)layoutSubviews;
-(void)restartEngineWithNotification:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)willResignActiveWithNotification:(id)arg0 ;
-(void)windowDidRotateWithNotification:(id)arg0 ;
-(void)windowWillAnimateRotationWithNotification:(id)arg0 ;
-(void)windowWillRotateWithNotification:(id)arg0 ;


@end


#endif