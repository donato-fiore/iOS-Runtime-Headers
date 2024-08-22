// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACSPOKENCOMMANDGESTUREMANAGER_H
#define CACSPOKENCOMMANDGESTUREMANAGER_H

@class AXPIFingerController;

#import <Foundation/Foundation.h>


@interface CACSpokenCommandGestureManager : NSObject {
    AXPIFingerController *_fingerController;
}


@property (nonatomic) CGPoint defaultPortraitUpPointForGestures; // ivar: _defaultPortraitUpPointForGestures
@property (nonatomic) BOOL didStart3DTouch; // ivar: _didStart3DTouch
@property (nonatomic) BOOL didStartDrag; // ivar: _didStartDrag
@property (readonly, nonatomic) AXPIFingerController *fingerController;
@property (readonly, nonatomic) BOOL isIn3DTouchGesture;
@property (readonly, nonatomic) BOOL isInDragGesture;
@property (readonly, nonatomic) BOOL isInGesture;
@property (nonatomic) BOOL shouldHoldStartPointForDrag; // ivar: _shouldHoldStartPointForDrag
@property (nonatomic) CGPoint startPointFor3DTouch; // ivar: _startPointFor3DTouch
@property (nonatomic) CGPoint startPointForDrag; // ivar: _startPointForDrag


+(id)sharedManager;
-(struct CGPoint )_fingerControllerPointForPortraitUpPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )_pointForGestureGivenPortraitUpPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )_pointForGestureGivenPortraitUpPoint:(struct CGPoint )arg0 shouldToggleSelectionOptions:(BOOL)arg1 ;
-(void)_adjust3DTouchToForce:(CGFloat)arg0 ;
-(void)_clearStateFlags;
-(void)_performGesture:(id)arg0 ;
-(void)_startDragWithHold:(BOOL)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)endDragAtPoint:(struct CGPoint )arg0 ;
-(void)maximize3DTouch;
-(void)performDoubleTapAtPoint:(struct CGPoint )arg0 numberOfFingers:(NSUInteger)arg1 ;
-(void)performGesture:(id)arg0 ;
-(void)performLongPressAtPoint:(struct CGPoint )arg0 numberOfFingers:(NSUInteger)arg1 ;
-(void)performPinchInGestureAtPoint:(struct CGPoint )arg0 ;
-(void)performPinchOutGestureAtPoint:(struct CGPoint )arg0 ;
-(void)performRotateLeftGestureAtPoint:(struct CGPoint )arg0 ;
-(void)performRotateRightGestureAtPoint:(struct CGPoint )arg0 ;
-(void)performSwipeGestureAtPoint:(struct CGPoint )arg0 inDirection:(NSInteger)arg1 fast:(BOOL)arg2 numberOfFingers:(NSUInteger)arg3 ;
-(void)performTapAtPoint:(struct CGPoint )arg0 numberOfFingers:(NSUInteger)arg1 ;
-(void)resetState;
-(void)reveal3DTouchActions;
-(void)start3DTouchAtPoint:(struct CGPoint )arg0 ;
-(void)startDragAtPoint:(struct CGPoint )arg0 ;
-(void)startHoldAndDragAtPoint:(struct CGPoint )arg0 ;


@end


#endif