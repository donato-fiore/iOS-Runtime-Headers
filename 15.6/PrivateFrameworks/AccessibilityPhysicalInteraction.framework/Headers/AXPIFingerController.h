// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXPIFINGERCONTROLLER_H
#define AXPIFINGERCONTROLLER_H

@class NSMutableDictionary, NSString, UIView, NSArray, UIWindow, AXAssertionCoordinator;
@protocol AXPIFingerModelDelegate, AXAssertionCoordinatorDelegate, AXPIFingerAppearanceDelegate;

#import <Foundation/Foundation.h>

#import "AXPIFingerEventSender.h"

@interface AXPIFingerController : NSObject <AXPIFingerModelDelegate, AXAssertionCoordinatorDelegate>

 {
    AXPIFingerEventSender *_eventSender;
    NSUInteger _updateCount;
    NSMutableDictionary *_downInfosByIdentifier;
    NSMutableDictionary *_upInfosByIdentifier;
    BOOL _didMoveFingersDuringUpdate;
    id *_gestureCompletion;
}


@property (weak, nonatomic) NSObject<AXPIFingerAppearanceDelegate> *appearanceDelegate; // ivar: _appearanceDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *fingerContainerView; // ivar: _fingerContainerView
@property (readonly, nonatomic) NSArray *fingerModels; // ivar: _fingerModels
@property (retain, nonatomic) UIWindow *fixedReferenceWindow; // ivar: _fixedReferenceWindow
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPerformingGesture; // ivar: _isPerformingGesture
@property (readonly, nonatomic) BOOL isPinchEnabled;
@property (readonly, nonatomic) NSUInteger numberOfFingers;
@property (nonatomic) NSUInteger senderID;
@property (nonatomic) BOOL shouldAddRealEventFlag;
@property (readonly) Class superclass;
@property (readonly, nonatomic) AXAssertionCoordinator *suppressVisualsAssertionCoodinator; // ivar: _suppressVisualsAssertionCoodinator


-(BOOL)_isInUpdateBlock;
-(BOOL)moveFingersToPoints:(id)arg0 ;
-(NSUInteger)_fingerIdentifierForIndex:(NSUInteger)arg0 ;
-(id)_eventTouchInfoForFinger:(id)arg0 ;
-(id)_eventTouchInfoForFingerLocation:(struct CGPoint )arg0 force:(CGFloat)arg1 ;
-(id)_handleStartingFingersForGesture:(id)arg0 animated:(BOOL)arg1 startPointForAnimation:(struct CGPoint )arg2 midpoint:(struct CGPoint *)arg3 showFingers:(BOOL)arg4 ;
-(id)_pointStringsFromFingers;
-(id)_showStartingFingersForGesture:(id)arg0 animated:(BOOL)arg1 startPointForAnimation:(struct CGPoint )arg2 ;
-(id)_touchInfosByIdentifierForPressedFingers;
-(id)acquireAssertionToSuppressVisualsWithReason:(id)arg0 ;
-(id)fingerModelAtPoint:(struct CGPoint )arg0 ;
-(id)init;
-(id)legacyLiftFingersUp;
-(id)legacyPressFingersDown;
-(struct CGPoint )_fingerLocationFromSceneReferencePoint:(struct CGPoint )arg0 ;
-(struct CGPoint )_sceneReferencePointFromFingerLocation:(struct CGPoint )arg0 ;
-(struct CGPoint )midpointForFingers;
-(struct CGPoint )midpointOfStartingFingersForGesture:(id)arg0 ;
-(struct CGRect )rectForFingersAtPoints:(id)arg0 ;
-(void)_endGestureWithSuccess:(BOOL)arg0 ;
-(void)_interruptGestureIfNeeded;
-(void)_performGesture:(id)arg0 shouldShowFingers:(BOOL)arg1 completion:(id)arg2 ;
-(void)_replayEventAtIndex:(NSUInteger)arg0 inGesture:(id)arg1 allFingerIdentifiers:(id)arg2 ;
-(void)_sendMoveEventIfNeededForFingerModel:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_showFingerModels:(id)arg0 animated:(BOOL)arg1 startPointForAnimation:(struct CGPoint )arg2 shouldShowPinchChain:(BOOL)arg3 shouldReuseFingers:(BOOL)arg4 ;
-(void)animateToTapWithDuration:(CGFloat)arg0 ;
-(void)assertionCoordinator:(id)arg0 assertionsDidBecomeActive:(BOOL)arg1 ;
-(void)beginUpdates;
-(void)cancelCircularProgressAnimation;
-(void)cancelGesture;
-(void)clearAllFingersAnimated:(BOOL)arg0 endPointForAnimation:(struct CGPoint )arg1 ;
-(void)dealloc;
-(void)didUpdateForceForFingerModel:(id)arg0 ;
-(void)didUpdateLocationForFingerModel:(id)arg0 ;
-(void)didUpdatePressStateForFingerModel:(id)arg0 ;
-(void)didUpdateSelectedStateForFingerModel:(id)arg0 ;
-(void)didUpdateShapeForFingerModel:(id)arg0 ;
-(void)endUpdates;
-(void)enumerateFingersUsingBlock:(id)arg0 ;
-(void)liftFingersUpAnimated:(BOOL)arg0 ;
-(void)liftFingersUpAnimated:(BOOL)arg0 sendTouchEvents:(BOOL)arg1 ;
-(void)performCircularProgressAnimationOnFingersWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)performDownAtPoint:(struct CGPoint )arg0 ;
-(void)performGesture:(id)arg0 ;
-(void)performGesture:(id)arg0 completion:(id)arg1 ;
-(void)performMoveToPoint:(struct CGPoint )arg0 ;
-(void)performUpAtPoint:(struct CGPoint )arg0 ;
-(void)performWithoutPreparingGesture:(id)arg0 completion:(id)arg1 ;
-(void)pressFingersDownAnimated:(BOOL)arg0 ;
-(void)pressFingersDownAnimated:(BOOL)arg0 sendTouchEvents:(BOOL)arg1 ;
-(void)resetPinchFingers;
-(void)showFingerModels:(id)arg0 animated:(BOOL)arg1 startPointForAnimation:(struct CGPoint )arg2 ;
-(void)showPinchFingersAnimated:(BOOL)arg0 midpoint:(struct CGPoint )arg1 ;
-(void)showStartingFingersForGesture:(id)arg0 ;
-(void)showStartingFingersForGesture:(id)arg0 animated:(BOOL)arg1 startPointForAnimation:(struct CGPoint )arg2 ;


@end


#endif