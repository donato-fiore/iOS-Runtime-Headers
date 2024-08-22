// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBEXTERNALDISPLAYWINDOWSCENEDELEGATE_H
#define SBEXTERNALDISPLAYWINDOWSCENEDELEGATE_H

@class FBApplicationUpdateScenesTransaction;


#import "SBAbstractWindowSceneDelegate.h"
#import "SBTraitsWindowParticipantDelegate.h"
#import "SBTraitsExternalDisplayPipelineManager.h"
#import "SBExternalDisplayWallpaperController.h"
#import "SBExternalDisplayCoverSheetController.h"
#import "SBWindowSceneStatusBarSettingsAssertion.h"

@interface SBExternalDisplayWindowSceneDelegate : SBAbstractWindowSceneDelegate {
    FBApplicationUpdateScenesTransaction *_transaction;
    SBTraitsWindowParticipantDelegate *_traitsWindowParticipantsDelegate;
    SBTraitsExternalDisplayPipelineManager *_traitsExternalPipelineManager;
    SBExternalDisplayWallpaperController *_wallpaperController;
    SBExternalDisplayCoverSheetController *_coverSheetController;
    SBWindowSceneStatusBarSettingsAssertion *_showStatusBarAssertion;
}




+(id)_individuallyManagedRoles;
-(BOOL)_shouldManageParticipantWithRole:(id)arg0 ;
-(id)_pipelineManager;
-(id)_traitsDelegateForWindowRole:(id)arg0 ;
-(id)init;
-(void)_configureForConnectingWindowScene:(id)arg0 windowSceneContext:(id)arg1 ;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)sceneDidDisconnect:(id)arg0 ;


@end


#endif