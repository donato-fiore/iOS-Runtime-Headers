// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSYSTEMCONTROLLER_H
#define AVSYSTEMCONTROLLER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVSystemController : NSObject {
    *AVSystemControllerPrivate _priv;
    BOOL mFullMute;
    float mVolume;
    NSString *mCategory;
    *OpaqueFigSystemController mFigController;
}




+(id)compatibleAudioRouteForRoute:(id)arg0 ;
+(id)sharedAVSystemController;
+(id)sharedInstance;
+(void)postNotificationOnMainQueue:(id)arg0 notification:(id)arg1 object:(id)arg2 ;
-(BOOL)allowUserToExceedEUVolumeLimit;
-(BOOL)changeActiveCategoryVolume:(BOOL)arg0 ;
-(BOOL)changeActiveCategoryVolume:(BOOL)arg0 fallbackCategory:(id)arg1 resultVolume:(*float)arg2 affectedCategory:(*id)arg3 ;
-(BOOL)changeActiveCategoryVolume:(BOOL)arg0 forRoute:(id)arg1 andDeviceIdentifier:(id)arg2 ;
-(BOOL)changeActiveCategoryVolumeBy:(float)arg0 ;
-(BOOL)changeActiveCategoryVolumeBy:(float)arg0 fallbackCategory:(id)arg1 resultVolume:(*float)arg2 affectedCategory:(*id)arg3 ;
-(BOOL)changeActiveCategoryVolumeBy:(float)arg0 forRoute:(id)arg1 andDeviceIdentifier:(id)arg2 ;
-(BOOL)changeVolume:(BOOL)arg0 forCategory:(id)arg1 ;
-(BOOL)changeVolume:(BOOL)arg0 forCategory:(id)arg1 mode:(id)arg2 ;
-(BOOL)changeVolumeBy:(float)arg0 forCategory:(id)arg1 ;
-(BOOL)changeVolumeForRoute:(BOOL)arg0 forCategory:(id)arg1 mode:(id)arg2 route:(id)arg3 deviceIdentifier:(id)arg4 andRouteSubtype:(id)arg5 ;
-(BOOL)changeVolumeForRouteBy:(float)arg0 forCategory:(id)arg1 mode:(id)arg2 route:(id)arg3 deviceIdentifier:(id)arg4 andRouteSubtype:(id)arg5 ;
-(BOOL)currentRouteHasVolumeControl;
-(BOOL)didCancelRoutePicking:(id)arg0 ;
-(BOOL)getActiveCategoryMuted:(*BOOL)arg0 ;
-(BOOL)getActiveCategoryMuted:(*BOOL)arg0 forRoute:(id)arg1 andDeviceIdentifier:(id)arg2 ;
-(BOOL)getActiveCategoryVolume:(*float)arg0 andName:(*id)arg1 ;
-(BOOL)getActiveCategoryVolume:(*float)arg0 andName:(*id)arg1 fallbackCategory:(id)arg2 ;
-(BOOL)getActiveCategoryVolume:(*float)arg0 andName:(*id)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3 ;
-(BOOL)getVibeIntensity:(*float)arg0 ;
-(BOOL)getVolume:(*float)arg0 forCategory:(id)arg1 ;
-(BOOL)getVolume:(*float)arg0 forCategory:(id)arg1 mode:(id)arg2 ;
-(BOOL)getVolumeForRoute:(*float)arg0 forCategory:(id)arg1 mode:(id)arg2 route:(id)arg3 deviceIdentifier:(id)arg4 andRouteSubtype:(id)arg5 ;
-(BOOL)hasRouteSharingPolicyLongFormVideo:(id)arg0 ;
-(BOOL)overrideToPartnerRoute;
-(BOOL)setActiveCategoryVolumeTo:(float)arg0 ;
-(BOOL)setActiveCategoryVolumeTo:(float)arg0 fallbackCategory:(id)arg1 resultVolume:(*float)arg2 affectedCategory:(*id)arg3 ;
-(BOOL)setActiveCategoryVolumeTo:(float)arg0 forRoute:(id)arg1 andDeviceIdentifier:(id)arg2 ;
-(BOOL)setAttribute:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)setBTHFPRoute:(id)arg0 availableForVoicePrompts:(BOOL)arg1 ;
-(BOOL)setPickedRouteWithPassword:(id)arg0 withPassword:(id)arg1 ;
-(BOOL)setVibeIntensityTo:(float)arg0 ;
-(BOOL)setVolumeForRouteTo:(float)arg0 forCategory:(id)arg1 mode:(id)arg2 route:(id)arg3 deviceIdentifier:(id)arg4 andRouteSubtype:(id)arg5 ;
-(BOOL)setVolumeTo:(float)arg0 forCategory:(id)arg1 ;
-(BOOL)setVolumeTo:(float)arg0 forCategory:(id)arg1 mode:(id)arg2 ;
-(BOOL)shouldClientWithAudioScore:(int)arg0 hijackRoute:(id)arg1 hijackDeniedReason:(*id)arg2 ;
-(BOOL)toggleActiveCategoryMuted;
-(BOOL)toggleActiveCategoryMutedForRoute:(id)arg0 andDeviceIdentifier:(id)arg1 ;
-(id)attributeForKey:(id)arg0 ;
-(id)errorWithCode:(int)arg0 description:(id)arg1 ;
-(id)init;
-(id)pickableRoutesForCategory:(id)arg0 ;
-(id)pickableRoutesForCategory:(id)arg0 andMode:(id)arg1 ;
-(id)routeForCategory:(id)arg0 ;
-(id)volumeCategoryForAudioCategory:(id)arg0 ;
-(int)allowAppToInitiateRecordingTemporarily:(id)arg0 ;
-(int)volumeCategoryAndMode:(id)arg0 mode:(id)arg1 outCategory:(*id)arg2 outMode:(*id)arg3 ;
-(void)dealloc;
-(void)handleServerDied;
-(void)postEffectiveVolumeNotification:(id)arg0 ;
-(void)postFullMuteDidChangeNotification:(id)arg0 ;


@end


#endif