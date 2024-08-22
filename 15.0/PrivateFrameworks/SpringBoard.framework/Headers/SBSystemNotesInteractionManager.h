// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSYSTEMNOTESINTERACTIONMANAGER_H
#define SBSYSTEMNOTESINTERACTIONMANAGER_H

@class SBFZStackParticipant, NSString;
@protocol SBSystemGestureRecognizerDelegate, SBFZStackParticipantDelegate, SBPIPInteractionControllerDataSource, SBPIPSceneContentContainerAdapterDelegate, SBSystemNotesInteractionManagerDelegate, SBSystemNotesInteractionManagerDataSource, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBSystemNotesPositionHyperregionComposer.h"
#import "SBCornerPencilPanGestureRecognizer.h"
#import "SBCornerFingerPanGestureRecognizer.h"
#import "SBSystemNotesSettings.h"
#import "SBSystemGestureManager.h"
#import "SBPIPControllerCoordinator.h"

@interface SBSystemNotesInteractionManager : NSObject <SBSystemGestureRecognizerDelegate, SBFZStackParticipantDelegate, SBPIPInteractionControllerDataSource, SBPIPSceneContentContainerAdapterDelegate>

 {
    id<SBSystemNotesInteractionManagerDelegate> *_delegate;
    id<SBSystemNotesInteractionManagerDataSource> *_dataSource;
    SBSystemNotesPositionHyperregionComposer *_positionRegionsComposer;
    SBCornerPencilPanGestureRecognizer *_pencilSystemCornerGestureRecognizer;
    SBCornerFingerPanGestureRecognizer *_fingerSystemCornerGestureRecognizer;
    SBSystemNotesSettings *_pipSettings;
    SBFZStackParticipant *_zStackParticipant;
    SBSystemGestureManager *_systemGestureManager;
    NSUInteger _cornerDismissState;
    unsigned int _cornerDismissGenCount;
    BOOL _isDismissingNonInteractively;
    unsigned int _nonInteractiveDismissGenCount;
    SBPIPControllerCoordinator *_pipCoordinator;
    NSInteger _initialInteractorPanPresentationMode;
    NSUInteger _edgeProtectState;
    unsigned int _edgeProtectGenCount;
    id<BSInvalidatable> *_edgeProtectStashAssertion;
    BOOL _panGestureIsSystemGesture;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_fingerCornerSwipesSupported;
-(BOOL)_gestureIsActive;
-(BOOL)_gestureRecognizerIsActive:(id)arg0 ;
-(BOOL)_panRecognizerOverFlickThreshold:(id)arg0 ;
-(BOOL)_pencilCornerSwipesSupported;
-(BOOL)_shouldEdgeProtectGestureRecognizer:(id)arg0 ;
-(BOOL)canHandlePresentationRequests:(*id)arg0 ;
-(BOOL)contentContainerAdapterShouldUpdateUIForStashing:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)initialStashStateForContentContainerAdapter:(id)arg0 ;
-(BOOL)interactionControllerIsExternalPanGestureRecognizing:(id)arg0 ;
-(BOOL)interactionControllerScalesDuringPanGesture:(id)arg0 ;
-(BOOL)interactionControllerUseSystemGesturesForResizing:(id)arg0 ;
-(CGFloat)_absoluteScaleForInteractiveSystemNotesGesture:(id)arg0 ;
-(CGFloat)_absoluteScaleThresholdBeforeFullSizeForGestureRecognizer:(id)arg0 ;
-(CGFloat)_cornerDistanceBeforeScalingForDismissGestureRecognizer:(id)arg0 ;
-(CGFloat)_flickVelocityThresholdForGestureRecognizer:(id)arg0 ;
-(CGFloat)_panDistanceBeforeScalingForGestureRecognizer:(id)arg0 ;
-(CGFloat)_panDistancePer1xScalingForGestureRecognizer:(id)arg0 ;
-(CGFloat)_panInitialThumbnailScaleForGestureRecognizer:(id)arg0 ;
-(CGFloat)_scaleThresholdBeforeFullSizeForGestureRecognizer:(id)arg0 ;
-(NSInteger)_presentationModeForGestureBegin;
-(NSUInteger)_swipeGestureCorner;
-(id)_gestureSettingsForRecognizer:(id)arg0 ;
-(id)debugName;
-(id)defaultPositionHyperregionComposers;
-(id)initWithWorkspace:(id)arg0 systemGestureManager:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3 ;
-(id)layoutSettings;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(struct CGPoint )_convertReferenceVelocity:(struct CGPoint )arg0 toOrientation:(NSInteger)arg1 ;
-(struct CGPoint )_cornerForGesture;
-(struct CGPoint )_orientedLocationForReferenceLocation:(struct CGPoint )arg0 ;
-(void)_cancelGestureIfNecessary:(id)arg0 reason:(id)arg1 ;
-(void)_createOrTeardownFingerGestureRecognizer;
-(void)_createOrTeardownPencilGestureRecognizer;
-(void)_handleInteractiveSwipeInGesture:(id)arg0 ;
-(void)_handleInteractiveSystemNotesGesture:(id)arg0 ;
-(void)_handleNonInteractiveSwipeInGesture:(id)arg0 ;
-(void)_interactionController:(id)arg0 updateScaleInteractorForSwipeToDismiss:(id)arg1 pipSize:(struct CGSize )arg2 forPanGesture:(id)arg3 ;
-(void)_interactionController:(id)arg0 updateScaleInteractorForSwipeToPresent:(id)arg1 pipSize:(struct CGSize )arg2 forPanGesture:(id)arg3 ;
-(void)_springBoardBootCompleted:(id)arg0 ;
-(void)_updateFailureRequirements;
-(void)_updateStashPadding;
-(void)collapseAnimated:(BOOL)arg0 ;
-(void)contentContainerAdapter:(id)arg0 handleDestructionRequestForSceneHandle:(id)arg1 ;
-(void)contentContainerAdapter:(id)arg0 willBeginInteractionWithGestureRecognizer:(id)arg1 ;
-(void)contentContainerAdapter:(id)arg0 willUpdateStashState:(BOOL)arg1 ;
-(void)contentContainerAdapterDidEndInteraction:(id)arg0 ;
-(void)contentContainerAdapterPanGestureDidEnd:(id)arg0 ;
-(void)dismissAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)expandAnimated:(BOOL)arg0 ;
-(void)interactionController:(id)arg0 updateScaleInteractor:(id)arg1 pipSize:(struct CGSize )arg2 forPanGesture:(id)arg3 ;
-(void)peepAnimated:(BOOL)arg0 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif