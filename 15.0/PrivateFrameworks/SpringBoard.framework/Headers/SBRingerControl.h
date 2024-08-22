// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBRINGERCONTROL_H
#define SBRINGERCONTROL_H

@class NSString;
@protocol SBRingerHUDViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "SBHUDController.h"
#import "SBSoundController.h"

@interface SBRingerControl : NSObject <SBRingerHUDViewControllerDelegate>

 {
    BOOL _ringerMuted;
}


@property (readonly, nonatomic) SBHUDController *HUDController; // ivar: _HUDController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isRingerMuted) BOOL ringerMuted;
@property (readonly, nonatomic) SBSoundController *soundController; // ivar: _soundController
@property (readonly) Class superclass;
@property (nonatomic) float volume; // ivar: _volume


-(BOOL)lastSavedRingerMutedState;
-(id)existingRingerHUDViewController;
-(id)initWithHUDController:(id)arg0 soundController:(id)arg1 ;
-(void)activateRingerHUD:(int)arg0 withInitialVolume:(float)arg1 fromSource:(NSUInteger)arg2 ;
-(void)activateRingerHUDForVolumeChangeWithInitialVolume:(float)arg0 ;
-(void)activateRingerHUDFromMuteSwitch:(int)arg0 ;
-(void)buttonReleased;
-(void)hideRingerHUDIfVisible;
-(void)nudgeUp:(BOOL)arg0 ;
-(void)ringerHUDViewControllerWantsToBeDismissed:(id)arg0 ;
-(void)toggleRingerMute;


@end


#endif