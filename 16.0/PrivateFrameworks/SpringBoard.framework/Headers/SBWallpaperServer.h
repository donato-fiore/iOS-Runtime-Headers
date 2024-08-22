// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWALLPAPERSERVER_H
#define SBWALLPAPERSERVER_H

@class FBSServiceFacility, FBServiceClientAuthenticator;
@protocol SBWallpaperServerDelegate;



@interface SBWallpaperServer : FBSServiceFacility

@property (retain, nonatomic) FBServiceClientAuthenticator *accessAuthenticator; // ivar: _accessAuthenticator
@property (weak, nonatomic) NSObject<SBWallpaperServerDelegate> *delegate; // ivar: _delegate


+(id)sharedInstance;
-(BOOL)_clientPermittedToModifyWallpaper:(id)arg0 ;
-(BOOL)_xpcObjectIsDictionary:(id)arg0 ;
-(NSInteger)_deviceOrientationFromXPCDictionary:(id)arg0 ;
-(NSInteger)_wallpaperModeFromXPCDictionary:(id)arg0 ;
-(NSInteger)_wallpaperVariantFromXPCDictionary:(id)arg0 ;
-(id)_init;
-(void)_handleFetchContentCutoutBoundsMessage:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleFetchLimitedOcclusionBoundsMessage:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleFetchLockScreenContentCutoutBoundsMessage:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleFetchLockScreenForegroundBoundsMessage:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleFetchLockScreenMaximalContentCutoutBoundsMessage:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleFetchLockScreenTimeBoundsMessage:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleFetchOriginalImageMessage:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleFetchOriginalVideoURLMessage:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleFetchThumbnailMessage:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleRestoreDefaultWallpaperMessage:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleSetColorMessage:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleSetColorNameMessage:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleSetGradientMessage:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleSetVideoMessageWithWallpaperMode:(id)arg0 fromClient:(id)arg1 ;
-(void)_handleTriggerPosterSignificantEventMessage:(id)arg0 fromClient:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg0 withType:(NSInteger)arg1 fromClient:(id)arg2 ;


@end


#endif