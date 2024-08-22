// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEADPHONEAUDIOEXPOSURECONTROLSERVER_H
#define HDHEADPHONEAUDIOEXPOSURECONTROLSERVER_H

@class HDStandardTaskServer, HDProfile, HDHealthStoreClient, NSString;
@protocol HDDiagnosticObject, HKHeadphoneAudioExposureControlServer, OS_dispatch_queue;


#import "HDHearingProfileExtension.h"

@interface HDHeadphoneAudioExposureControlServer : HDStandardTaskServer <HDDiagnosticObject, HKHeadphoneAudioExposureControlServer>

 {
    HDProfile *_profile;
    HDHearingProfileExtension *_profileExtension;
    HDHealthStoreClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)_headphoneProvenanceForRemoteDevice:(BOOL)arg0 ;
-(id)_headphoneProvenanceForRemoteWatch;
-(id)_makeAirPods;
-(id)_makeBeatsHeadphones;
-(id)_makeEarPods;
-(id)_makeUnknownHeadphones;
-(id)diagnosticDescription;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)remote_fetchDoseLimitWithCompletion:(id)arg0 ;
-(void)remote_fetchInfoWithCompletion:(id)arg0 ;
-(void)remote_insertQuantityWithExposure:(CGFloat)arg0 duration:(CGFloat)arg1 startDate:(id)arg2 includesNotificationSample:(BOOL)arg3 synced:(BOOL)arg4 completion:(id)arg5 ;
-(void)remote_overrideDoseLimit:(id)arg0 completion:(id)arg1 ;
-(void)remote_rebuildWithCompletion:(id)arg0 ;


@end


#endif