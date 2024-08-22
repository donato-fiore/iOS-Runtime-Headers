// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMAVLOCALPREVIEWCLIENT_H
#define IMAVLOCALPREVIEWCLIENT_H

@class AVConferencePreview;
@protocol AVConferencePreviewClientDelegate, IMSystemMonitorListener;

#import <Foundation/Foundation.h>


@interface IMAVLocalPreviewClient : NSObject <AVConferencePreviewClientDelegate, IMSystemMonitorListener>

 {
    BOOL _shouldAlterPreviewState;
    BOOL _wantsPreview;
    BOOL _wantsPausedPreview;
    BOOL _wantsUnpausedPreview;
}


@property (nonatomic) unsigned int cameraOrientation;
@property (nonatomic) unsigned int cameraType;
@property (retain, nonatomic) AVConferencePreview *conferencePreview; // ivar: _conferencePreview
@property (readonly, nonatomic) BOOL isPreviewRunning;
@property (nonatomic) *void localVideoBackLayer;
@property (nonatomic) *void localVideoLayer;


+(id)sharedInstance;
+(struct CGSize )localPortraitAspectRatio;
-(BOOL)_shouldPreviewBeRunning;
-(id)init;
-(id)localScreenAttributesForVideoAttributes:(id)arg0 ;
-(void)_avDaemonConnected;
-(void)_updatePreviewState;
-(void)avChat:(id)arg0 setLocalPortraitRatio:(struct CGSize )arg1 localLandscapeRatio:(struct CGSize )arg2 ;
-(void)beginAnimationToPIP;
-(void)beginAnimationToPreview;
-(void)cameraDidBecomeAvailableForUniqueID:(id)arg0 ;
-(void)dealloc;
-(void)didChangeLocalScreenAttributes:(id)arg0 ;
-(void)didChangeLocalVideoAttributes:(id)arg0 ;
-(void)didPausePreview;
-(void)didReceiveErrorFromCameraUniqueID:(id)arg0 error:(id)arg1 ;
-(void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg0 ;
-(void)didStartPreview;
-(void)didStopPreview;
-(void)endAnimationToPIP;
-(void)endAnimationToPreview;
-(void)pausePreview;
-(void)setLocalScreenAttributes:(id)arg0 ;
-(void)startPreview;
-(void)stopPreview;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(void)systemScreenDidPowerDown;
-(void)systemScreenDidPowerUp;
-(void)unpausePreview;
-(void)updateLocalScreenAtrributes;


@end


#endif