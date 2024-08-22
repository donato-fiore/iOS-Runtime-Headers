// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERACLIPCREATECLIPOPERATION_H
#define HMDCAMERACLIPCREATECLIPOPERATION_H

@class NSDate, HMCameraClipEncryptionManager;


#import "HMDCameraClipAddModelsOperation.h"

@interface HMDCameraClipCreateClipOperation : HMDCameraClipAddModelsOperation

@property (readonly, copy) NSDate *clipStartDate; // ivar: _clipStartDate
@property (readonly) HMCameraClipEncryptionManager *encryptionManager; // ivar: _encryptionManager
@property (readonly) NSInteger quality; // ivar: _quality
@property (readonly) CGFloat targetFragmentDuration; // ivar: _targetFragmentDuration


+(id)logCategory;
-(id)attributeDescriptions;
-(id)initWithClipModelID:(id)arg0 localZone:(id)arg1 targetFragmentDuration:(CGFloat)arg2 clipStartDate:(id)arg3 quality:(NSInteger)arg4 encryptionManager:(id)arg5 ;
-(id)initWithClipModelID:(id)arg0 localZone:(id)arg1 targetFragmentDuration:(CGFloat)arg2 clipStartDate:(id)arg3 quality:(NSInteger)arg4 encryptionManager:(id)arg5 dataSource:(id)arg6 ;
-(id)modelsToAdd;


@end


#endif