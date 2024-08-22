// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCPIPELINESTAGEWAITFORDEVICETODEVICEENCRYPTIONAVAILABILITY_H
#define HDCLOUDSYNCPIPELINESTAGEWAITFORDEVICETODEVICEENCRYPTIONAVAILABILITY_H

@protocol OS_dispatch_source;


#import "HDCloudSyncPipelineStage.h"

@interface HDCloudSyncPipelineStageWaitForDeviceToDeviceEncryptionAvailability : HDCloudSyncPipelineStage {
    NSObject<OS_dispatch_source> *_expirationTimer;
    CGFloat _expirationInterval;
}




-(BOOL)finishWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_cloudKitIdentityUpdated:(id)arg0 ;
-(void)main;
-(void)unitTest_setExpirationInterval:(CGFloat)arg0 ;


@end


#endif