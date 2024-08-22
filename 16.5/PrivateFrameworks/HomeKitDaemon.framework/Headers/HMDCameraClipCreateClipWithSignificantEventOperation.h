// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERACLIPCREATECLIPWITHSIGNIFICANTEVENTOPERATION_H
#define HMDCAMERACLIPCREATECLIPWITHSIGNIFICANTEVENTOPERATION_H

@class NSDate, HMCameraClipEncryptionManager;


#import "HMDCameraClipAddSignificantEventOperation.h"

@interface HMDCameraClipCreateClipWithSignificantEventOperation : HMDCameraClipAddSignificantEventOperation

@property (readonly, copy) NSDate *clipStartDate; // ivar: _clipStartDate
@property (readonly) HMCameraClipEncryptionManager *encryptionManager; // ivar: _encryptionManager
@property (readonly) NSInteger quality; // ivar: _quality
@property (readonly) CGFloat targetFragmentDuration; // ivar: _targetFragmentDuration


+(NSUInteger)cameraClipOperationType;
+(id)logCategory;
-(id)attributeDescriptions;
-(id)initWithClipModelID:(id)arg0 localZone:(id)arg1 significantEvent:(id)arg2 homePresenceByPairingIdentity:(id)arg3 targetFragmentDuration:(CGFloat)arg4 clipStartDate:(id)arg5 quality:(NSInteger)arg6 encryptionManager:(id)arg7 ;
-(id)initWithClipModelID:(id)arg0 localZone:(id)arg1 significantEvent:(id)arg2 homePresenceByPairingIdentity:(id)arg3 targetFragmentDuration:(CGFloat)arg4 clipStartDate:(id)arg5 quality:(NSInteger)arg6 encryptionManager:(id)arg7 dataSource:(id)arg8 ;
-(id)modelsToAdd;


@end


#endif