// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMEDUSAWINDOWDRAGGESTUREDESTINATIONMODIFIER_H
#define SBMEDUSAWINDOWDRAGGESTUREDESTINATIONMODIFIER_H

@class CADisplayLink;
@protocol SBMedusaWindowDragGestureDestinationModifierDelegate;


#import "SBSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBSwitcherModifierEventResponse.h"

@interface SBMedusaWindowDragGestureDestinationModifier : SBSwitcherModifier {
    SBAppLayout *_selectedLeafAppLayout;
    SBAppLayout *_initialMainAppLayout;
    SBAppLayout *_initialFloatingAppLayout;
    NSInteger _initialFloatingConfiguration;
    NSUInteger _gesturePhase;
    BOOL _supportsMedusa;
    BOOL _supportsCenterRole;
    CGPoint _location;
    CGPoint _translation;
    CGPoint _velocity;
    CADisplayLink *_displayLink;
    NSUInteger _dragPauseCounter;
    BOOL _isResizingToFullScreen;
    BOOL _hasResizedEnoughToUnblur;
    BOOL _dragBeganInOtherSwitcher;
    BOOL _dragBeganInOurSwitcher;
    id<SBMedusaWindowDragGestureDestinationModifierDelegate> *_dragDestinationDelegate;
    SBSwitcherModifierEventResponse *_pendingEnterPlatterZoneResponse;
}


@property (readonly, nonatomic) SBAppLayout *currentAppLayout; // ivar: _currentAppLayout
@property (readonly, nonatomic) NSUInteger currentDestination; // ivar: _currentDestination
@property (readonly, nonatomic, getter=hasEnteredPlatterZone) BOOL enteredPlatterZone; // ivar: _enteredPlatterZone
@property (readonly, nonatomic) SBAppLayout *proposedAppLayout; // ivar: _proposedAppLayout


-(BOOL)_draggingCenterWindow;
-(BOOL)_draggingFullScreenApp;
-(BOOL)_draggingSlideOverApp;
-(BOOL)_draggingSplitViewApp;
-(BOOL)_isDragOverFullscreenRegionAtLocation:(struct CGPoint )arg0 inBounds:(struct CGRect )arg1 ;
-(BOOL)_isDragOverSideGutterRegionsAtLocation:(struct CGPoint )arg0 inBounds:(struct CGRect )arg1 totalContentDragGutterWidth:(CGFloat)arg2 ;
-(BOOL)_shouldMinimizeOrEnterSplitHomeScreen;
-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)_contentDraggingCommandeerWidth;
-(CGFloat)_contentDraggingFloatingActivationWidth;
-(CGFloat)_contentDraggingSideActivationWidth;
-(CGFloat)_dismissLeftBoundary;
-(CGFloat)_dismissRightBoundary;
-(CGFloat)_sideActivationGutterSize;
-(NSInteger)_layoutRoleForDraggedApp;
-(id)_transitionRequestForDestination:(NSUInteger)arg0 complete:(BOOL)arg1 ;
-(id)_updateForWindowDrag;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleResizeProgressEvent:(id)arg0 ;
-(id)initWithSelectedLeafAppLayout:(id)arg0 initialMainAppLayout:(id)arg1 initialFloatingAppLayout:(id)arg2 initialFloatingConfiguration:(NSInteger)arg3 delegate:(id)arg4 ;
-(id)resizeProgressNotificationsForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(struct CGRect )_leftFloatingZoneForCenterWindow;
-(struct CGRect )_rightFloatingZoneForCenterWindow;
-(struct CGRect )_universalCenterZone;
-(struct CGSize )_fullscreenActivationRegionSize;
-(void)_displayLinkFired:(id)arg0 ;
-(void)_updateCurrentDropAction;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif