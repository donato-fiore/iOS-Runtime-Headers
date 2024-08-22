// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGMANAGERDEPENDENCYFACTORY_H
#define HMDCAMERARECORDINGMANAGERDEPENDENCYFACTORY_H

@class HMFObject, HMFPreferences;
@protocol HMMLogEventSubmitting;



@interface HMDCameraRecordingManagerDependencyFactory : HMFObject

@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) HMFPreferences *preferences;


-(id)createBulkSendSessionInitiatorWithWorkQueue:(id)arg0 accessory:(id)arg1 ;
-(id)createFeaturesDataSource;
-(id)createRecordingSessionRetryContextWithWorkQueue:(id)arg0 homePresenceByPairingIdentity:(id)arg1 ;
-(id)createRecordingSessionWithWorkQueue:(id)arg0 camera:(id)arg1 hapAccessory:(id)arg2 home:(id)arg3 configuredFragmentDuration:(CGFloat)arg4 timelineManager:(id)arg5 significantEventServer:(id)arg6 homePresenceByPairingIdentity:(id)arg7 ;
-(id)createSessionNotificationTrigger:(id)arg0 workQueue:(id)arg1 ;
-(id)createSettingsControl:(id)arg0 accessory:(id)arg1 managementService:(id)arg2 ;
-(id)createSignificantEventServerWithWorkQueue:(id)arg0 camera:(id)arg1 ;
-(id)createTimerWithTimeInterval:(CGFloat)arg0 ;


@end


#endif