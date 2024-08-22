// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMERACONFERENCESYNCHRONIZER_H
#define CAMERACONFERENCESYNCHRONIZER_H


#import <Foundation/Foundation.h>

#import "VCVideoRule.h"

@interface CameraConferenceSynchronizer : NSObject {
    BOOL isConference720p;
    BOOL isConferenceOniPad;
    BOOL receivedRequestToChangeCamera;
    BOOL receivedFirstRemoteFrame;
    int cameraHasChangedToCapture;
    int didSendFirstRemoteFrameNotification;
    VCVideoRule *captureRule;
    id *remoteFrameNotificationBlock;
    id *didStopNotificationBlock;
}


@property (nonatomic, setter=setLocalPortraitAspectRatio:) CGSize localPortraitAspectRatio; // ivar: localPortraitAspectRatio


-(BOOL)shouldConferenceChangeCameraToCaptureSettings;
-(BOOL)shouldConferenceChangeCameraToPreviewSettings;
-(BOOL)shouldConferenceSendFirstRemoteFrameNotification;
-(id)init;
-(void)cameraSizeChangedTo:(struct CGSize )arg0 ;
-(void)changeCameraToCaptureSettings:(CGFloat)arg0 forced:(BOOL)arg1 ;
-(void)dealloc;
-(void)notifyClientOfRemoteFrame:(CGFloat)arg0 ;
-(void)reset;
-(void)scheduleCameraChangeToCaptureSettings:(id)arg0 ;
-(void)scheduleCameraChangeToPreviewSettings;
-(void)scheduleFirstRemoteFrameNotification:(id)arg0 ;


@end


#endif