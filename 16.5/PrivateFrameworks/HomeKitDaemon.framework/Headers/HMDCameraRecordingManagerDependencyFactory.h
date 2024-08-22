// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERARECORDINGMANAGERDEPENDENCYFACTORY_H
#define HMDCAMERARECORDINGMANAGERDEPENDENCYFACTORY_H

@class HMFObject, NSString, HMFPreferences;
@protocol HMDCameraRecordingManagerDependencyFactory, HMDFeaturesDataSource, HMMLogEventSubmitting;



@interface HMDCameraRecordingManagerDependencyFactory : HMFObject <HMDCameraRecordingManagerDependencyFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMDFeaturesDataSource> *featuresDataSource;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) HMFPreferences *preferences;
@property (readonly) Class superclass;


-(id)createBulkSendSessionInitiatorWithWorkQueue:(id)arg0 accessory:(id)arg1 ;
-(id)createBulkSendSessionReaderWithWorkQueue:(id)arg0 session:(id)arg1 readTimeout:(CGFloat)arg2 logIdentifier:(id)arg3 ;
-(id)createLoadBalancingAttemptWithLocalResponseTimeout:(CGFloat)arg0 logIdentifier:(id)arg1 ;
-(id)createRecordingSessionRetryContextWithWorkQueue:(id)arg0 homePresenceByPairingIdentity:(id)arg1 ;
-(id)createRecordingSessionWithWorkQueue:(id)arg0 camera:(id)arg1 hapAccessory:(id)arg2 home:(id)arg3 localZone:(id)arg4 configuredFragmentDuration:(CGFloat)arg5 timelineManager:(id)arg6 significantEventServer:(id)arg7 homePresenceByPairingIdentity:(id)arg8 ;
-(id)createSessionNotificationTrigger:(id)arg0 workQueue:(id)arg1 ;
-(id)createSettingsControl:(id)arg0 accessory:(id)arg1 managementService:(id)arg2 ;
-(id)createSignificantEventServerWithWorkQueue:(id)arg0 camera:(id)arg1 ;
-(id)createTimelineManagerWithWorkQueue:(id)arg0 fragmentDuration:(CGFloat)arg1 fragmentCreationReferenceDate:(id)arg2 logIdentifier:(id)arg3 ;
-(id)createTimerWithTimeInterval:(CGFloat)arg0 ;


@end


#endif