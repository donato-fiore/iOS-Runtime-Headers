// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMUISCENESCOORDINATOR_H
#define SBSYSTEMUISCENESCOORDINATOR_H

@class NSMutableArray, NSString;
@protocol SBFSceneWorkspaceControlling;

#import <Foundation/Foundation.h>

#import "SBAccessibilityUIServerUISceneController.h"
#import "SBAssistiveTouchUISceneController.h"
#import "SBDruidUISceneController.h"
#import "SBEnsembleUISceneController.h"
#import "SBFullKeyboardAccessUISceneController.h"
#import "SBInputUISceneController.h"
#import "SBLiveTranscriptionUISceneController.h"
#import "SBOverlayUISceneController.h"
#import "SBVoiceControlUISceneController.h"

@interface SBSystemUIScenesCoordinator : NSObject <SBFSceneWorkspaceControlling>

 {
    NSMutableArray *_sceneControllers;
}


@property (retain, nonatomic) SBAccessibilityUIServerUISceneController *accessibilityUIServerUISceneController; // ivar: _accessibilityUIServerUISceneController
@property (retain, nonatomic) SBAssistiveTouchUISceneController *assistiveTouchUISceneController; // ivar: _assistiveTouchUISceneController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBDruidUISceneController *druidUISceneController; // ivar: _druidUISceneController
@property (retain, nonatomic) SBEnsembleUISceneController *ensembleUISceneController; // ivar: _ensembleUISceneController
@property (retain, nonatomic) SBFullKeyboardAccessUISceneController *fullKeyboardAccessUISceneController; // ivar: _fullKeyboardAccessUISceneController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBInputUISceneController *inputUISceneController; // ivar: _inputUISceneController
@property (retain, nonatomic) SBLiveTranscriptionUISceneController *liveTranscriptionUISceneController; // ivar: _liveTranscriptionUISceneController
@property (retain, nonatomic) SBOverlayUISceneController *overlayUISceneController; // ivar: _overlayUISceneController
@property (readonly) Class superclass;
@property (retain, nonatomic) SBVoiceControlUISceneController *voiceControlUISceneController; // ivar: _voiceControlUISceneController


-(BOOL)enumerateScenesWithBlock:(id)arg0 ;
-(id)init;
-(id)sceneFromIdentityToken:(id)arg0 ;
-(id)sceneFromIdentityTokenStringRepresentation:(id)arg0 ;
-(id)sceneWorkspaceControllerForProcessIdentity:(id)arg0 ;
-(void)createSceneForProcessIdentity:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)destroyScenesWithPersistentIdentifiers:(id)arg0 processIdentity:(id)arg1 completion:(id)arg2 ;
-(void)windowSceneDidConnect:(id)arg0 ;
-(void)windowSceneDidDisconnect:(id)arg0 ;


@end


#endif