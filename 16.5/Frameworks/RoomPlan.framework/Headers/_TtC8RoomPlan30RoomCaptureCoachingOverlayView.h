// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8ROOMPLAN30ROOMCAPTURECOACHINGOVERLAYVIEW_H
#define _TTC8ROOMPLAN30ROOMCAPTURECOACHINGOVERLAYVIEW_H

@class UIView;
@protocol UIGestureRecognizerDelegate;



@interface _TtC8RoomPlan30RoomCaptureCoachingOverlayView : UIView <UIGestureRecognizerDelegate>

 {
    ? directionalLightDirection;
    ? dollHouseARView;
    ? dollHouse;
    ? isModelEnabled;
    ? $__lazy_storage_$_pitchAdjustment;
    ? arcBallCamera;
    ? runtimeScaleAdjustment;
    ? completionMargin;
    ? scaleAdjustment;
    ? arGlyphView;
    ? floorEntity;
    ? coachingLabel;
    ? coachingLabelContainer;
    ? panGestureRecognizer;
    ? pinchGestureRecognizer;
    ? immediateLongPressRecognizer;
    ? directionalDebugEntity;
    ? cameraTransform;
    ? currentInstruction;
    ? currentInitializationState;
    ? sceneObserver;
    ? ambientLight;
    ? directionalLight;
    ? lightingAnchor;
    ? $__lazy_storage_$_debugBBCornerEntity;
}




-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didPanWithPanGesture:(id)arg0 ;
-(void)didPinchWithPinchGesture:(id)arg0 ;
-(void)didTouchDownWithLongPressGesture:(id)arg0 ;


@end


#endif