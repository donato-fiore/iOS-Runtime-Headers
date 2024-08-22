// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIFLICKINGASSISTANTVIEWSUPPORT_H
#define UIFLICKINGASSISTANTVIEWSUPPORT_H



#import "UIKeyboardMotionSupport.h"
#import "UIPanGestureRecognizer.h"
#import "UIInputViewSetPlacement.h"

@interface UIFlickingAssistantViewSupport : UIKeyboardMotionSupport {
    UIPanGestureRecognizer *_panRecognizer;
    NSInteger _position;
    NSInteger _lastMinimizedPosition;
    NSInteger _visualState;
    CGPoint _initalTouchPoint;
    BOOL _shouldNotifyCompletion;
}


@property (nonatomic) NSInteger draggingState; // ivar: _draggingState
@property (nonatomic, setter=setCompact:) BOOL isCompact; // ivar: _isCompact
@property (retain, nonatomic) UIInputViewSetPlacement *remotePlacement; // ivar: _remotePlacement


-(BOOL)isInputAssistantItemHidden;
-(NSUInteger)assistantPosition;
-(struct CGPoint )barOriginFromTouchPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )keyboardOriginFromAssistantViewPosition:(NSInteger)arg0 ;
-(struct CGPoint )projectedLandingPointForGestureRecognizerEnd:(id)arg0 ;
-(struct CGRect )assistantFrame;
-(void)_connectController:(id)arg0 ;
-(void)_disconnectingController:(id)arg0 ;
-(void)_initalizePosition;
-(void)_updateKeyboardLayoutGuideForAssistantFrame:(struct CGRect )arg0 ;
-(void)_updatedController;
-(void)didUpdateTransition;
-(void)panGestureHandler:(id)arg0 ;
-(void)setPositionAndVisualStateByPersistentLocation:(BOOL)arg0 minimize:(BOOL)arg1 ;
-(void)transitToDraggingVisualState:(NSInteger)arg0 withTouchLocation:(struct CGPoint )arg1 ;
-(void)updateTransition:(struct CGPoint )arg0 animated:(BOOL)arg1 ;


@end


#endif