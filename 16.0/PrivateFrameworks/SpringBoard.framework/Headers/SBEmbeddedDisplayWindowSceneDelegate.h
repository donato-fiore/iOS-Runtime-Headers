// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBEMBEDDEDDISPLAYWINDOWSCENEDELEGATE_H
#define SBEMBEDDEDDISPLAYWINDOWSCENEDELEGATE_H



#import "SBAbstractWindowSceneDelegate.h"
#import "SBTraitsWindowParticipantDelegate.h"
#import "SBTraitsEmbeddedDisplayPipelineManager.h"
#import "SBProductivityGestureController.h"
#import "SBRecordingIndicatorManager.h"

@interface SBEmbeddedDisplayWindowSceneDelegate : SBAbstractWindowSceneDelegate {
    SBTraitsWindowParticipantDelegate *_traitsWindowParticipantsDelegate;
    SBTraitsEmbeddedDisplayPipelineManager *_traitsEmbeddedPipelineManager;
    SBProductivityGestureController *_productivityGestureController;
}


@property (retain, nonatomic) SBRecordingIndicatorManager *recordingIndicatorManager; // ivar: _recordingIndicatorManager


+(id)_individuallyManagedRoles;
+(id)_windowWillBecomeHiddenExemptRoles;
-(BOOL)_shouldHandleWindowWillBecomeHiddenForRole:(id)arg0 ;
-(BOOL)_shouldManageParticipantWithRole:(id)arg0 ;
-(id)_pipelineManager;
-(id)_traitsDelegateForWindowRole:(id)arg0 ;
-(id)init;
-(void)_configureForConnectingWindowScene:(id)arg0 windowSceneContext:(id)arg1 ;
-(void)_windowScene:(id)arg0 windowWillBecomeVisible:(id)arg1 ;
-(void)initializeProductivityGestureControllerIfNecessary;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;


@end


#endif