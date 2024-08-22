// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBRINGERCONTROL_H
#define SBRINGERCONTROL_H

@class NSString;
@protocol SBRingerHUDViewControllerDelegate, SBRingerAlertElementDelegate;

#import <Foundation/Foundation.h>

#import "SBBannerManager.h"
#import "SBRingerAlertElement.h"
#import "SBRingerHUDViewController.h"
#import "SBSoundController.h"

@interface SBRingerControl : NSObject <SBRingerHUDViewControllerDelegate, SBRingerAlertElementDelegate>

 {
    BOOL _ringerMuted;
}


@property (readonly, weak, nonatomic) SBBannerManager *bannerManager; // ivar: _bannerManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBRingerAlertElement *ringerAlertElement; // ivar: _ringerAlertElement
@property (weak, nonatomic) SBRingerHUDViewController *ringerHUDViewController; // ivar: _ringerHUDViewController
@property (nonatomic, getter=isRingerMuted) BOOL ringerMuted;
@property (readonly, nonatomic) SBSoundController *soundController; // ivar: _soundController
@property (readonly) Class superclass;
@property (nonatomic) float volume; // ivar: _volume


-(BOOL)lastSavedRingerMutedState;
-(id)_ringerUICoordinator;
-(id)initWithBannerManager:(id)arg0 soundController:(id)arg1 ;
-(void)_dismissRingerAlertElement:(id)arg0 forReason:(id)arg1 ;
-(void)_dismissRingerHUDViewController:(id)arg0 forReason:(id)arg1 ;
-(void)activateRingerHUD:(int)arg0 withInitialVolume:(float)arg1 fromSource:(NSUInteger)arg2 ;
-(void)activateRingerHUDForVolumeChangeWithInitialVolume:(float)arg0 ;
-(void)activateRingerHUDFromMuteSwitch:(int)arg0 ;
-(void)buttonReleased;
-(void)dismissRingerHUD;
-(void)nudgeUp:(BOOL)arg0 ;
-(void)ringerAlertElementWantsToBeDismissed:(id)arg0 forReason:(id)arg1 ;
-(void)ringerAlertElementWantsToBePresented:(id)arg0 ;
-(void)ringerAlertElementWantsToResetAutomaticInvalidationTimer:(id)arg0 ;
-(void)ringerHUDViewControllerWantsToBeDismissed:(id)arg0 ;
-(void)ringerHUDViewControllerWantsToBePresented:(id)arg0 ;
-(void)toggleRingerMute;


@end


#endif