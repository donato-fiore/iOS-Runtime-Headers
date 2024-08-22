// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCAMERACLIPFEEDBACKMANAGER_H
#define HFCAMERACLIPFEEDBACKMANAGER_H


#import <Foundation/Foundation.h>


@interface HFCameraClipFeedbackManager : NSObject



+(void)donateAllCameraClipsForCameraProfile:(id)arg0 completion:(id)arg1 ;
+(void)donateCameraClip:(id)arg0 forCameraProfile:(id)arg1 completion:(id)arg2 ;
+(void)donateCameraClip:(id)arg0 forCameraProfile:(id)arg1 processName:(id)arg2 completion:(id)arg3 ;
+(void)donateNotificationCenterCameraClip:(id)arg0 forCameraProfile:(id)arg1 completion:(id)arg2 ;


@end


#endif