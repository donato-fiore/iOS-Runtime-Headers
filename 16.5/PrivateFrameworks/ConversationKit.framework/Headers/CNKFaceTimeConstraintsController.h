// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNKFACETIMECONSTRAINTSCONTROLLER_H
#define CNKFACETIMECONSTRAINTSCONTROLLER_H


#import <Foundation/Foundation.h>


@interface CNKFaceTimeConstraintsController : NSObject {
    ? shutterButtonState;
    ? captionsState;
    ? participantListState;
    ? shouldForceAllowNextLocalParticipantStateUpdate;
    ? mostRecentLocalParticipantCorner;
    ? localParticipantState;
    ? localParticipantAspectRatio;
    ? inCallConversationBannerState;
    ? participantGridState;
    ? floatingControlsState;
    ? viewStateEffects;
    ? viewControllerLayout;
    ? bannerControlsWidthConstraint;
    ? bannerControlsHeightConstraint;
    ? configurableRosterCellWidthConstraint;
    ? bannerDodgingLayoutGuide;
    ? bannerControlsSize;
    ? configurableRosterCellWidth;
    ? inCallControlsFramesCache;
}


@property (nonatomic) NSInteger accessibilityLocalParticipantState;
@property (nonatomic) NSInteger inCallControlsState; // ivar: inCallControlsState


-(NSInteger)localParticipantState;
-(id)init;
-(id)initWithContainingView:(id)arg0 controlsViewController:(id)arg1 inCallControlsState:(NSInteger)arg2 localParticipantView:(id)arg3 deviceOrientation:(NSInteger)arg4 ;
-(struct CGRect )inCallControlsViewFrameFor:(id)arg0 state:(NSInteger)arg1 ;
-(void)removeEffectsConstraints;
-(void)setLocalParticipantState:(NSInteger)arg0 ;
-(void)updateConstraintsWith:(id)arg0 controlsViewController:(id)arg1 localParticipantView:(id)arg2 effectsView:(id)arg3 effectsBrowserViewController:(id)arg4 ;
-(void)updateFor:(struct CGRect )arg0 deviceOrientation:(NSInteger)arg1 ;


@end


#endif