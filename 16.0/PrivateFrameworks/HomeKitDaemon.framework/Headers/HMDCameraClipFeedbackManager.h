// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERACLIPFEEDBACKMANAGER_H
#define HMDCAMERACLIPFEEDBACKMANAGER_H

@class HMFObject, NSUUID, HMBCloudZone, NSString, HMBLocalZone, HMFMessageDispatcher, NSNotificationCenter;
@protocol HMFLogging, HMFMessageReceiver, OS_dispatch_queue;


#import "HMDCameraClipFeedbackUploader.h"
#import "HMDHome.h"

@interface HMDCameraClipFeedbackManager : HMFObject <HMFLogging, HMFMessageReceiver>



@property (readonly, copy) NSUUID *cameraProfileUUID; // ivar: _cameraProfileUUID
@property (readonly) HMBCloudZone *cloudZone; // ivar: _cloudZone
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDCameraClipFeedbackUploader *feedbackUploader; // ivar: _feedbackUploader
@property (readonly) NSUInteger hash;
@property (readonly) HMDHome *home; // ivar: _home
@property (readonly) HMBLocalZone *localZone; // ivar: _localZone
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)isCurrentDeviceConfirmedPrimaryResident;
-(id)_performCloudPull;
-(id)initWithLocalZone:(id)arg0 cloudZone:(id)arg1 home:(id)arg2 messageDispatcher:(id)arg3 cameraProfileUUID:(id)arg4 messageTargetUUID:(id)arg5 feedbackUploader:(id)arg6 workQueue:(id)arg7 ;
-(id)logIdentifier;
-(void)_handleFindAndUploadSubmittedClipsMessage:(id)arg0 ;
-(void)_handleSubmitClipsMessage:(id)arg0 ;
-(void)_notifyPrimaryResidentThatClipsWereSubmitted;
-(void)_uploadNextClipFromQueryResult:(id)arg0 ;
-(void)configureWithHome:(id)arg0 deviceIsResidentCapable:(BOOL)arg1 ;
-(void)findAndUploadSubmittedClips;
-(void)handlePrimaryResidentUpdateNotification:(id)arg0 ;


@end


#endif