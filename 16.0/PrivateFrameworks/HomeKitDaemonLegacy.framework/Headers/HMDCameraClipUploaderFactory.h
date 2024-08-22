// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERACLIPUPLOADERFACTORY_H
#define HMDCAMERACLIPUPLOADERFACTORY_H

@class NSString;
@protocol HMDCameraClipUploaderFactory;

#import <Foundation/Foundation.h>


@interface HMDCameraClipUploaderFactory : NSObject <HMDCameraClipUploaderFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createAddSignificantEventOperationForClipModelID:(id)arg0 localZone:(id)arg1 significantEvent:(id)arg2 homePresenceByPairingIdentity:(id)arg3 ;
-(id)createCreateClipOperationForClipModelID:(id)arg0 localZone:(id)arg1 targetFragmentDuration:(CGFloat)arg2 clipStartDate:(id)arg3 quality:(NSInteger)arg4 encryptionManager:(id)arg5 ;
-(id)createCreateClipWithSignificantEventOperationForClipModelID:(id)arg0 localZone:(id)arg1 significantEvent:(id)arg2 homePresenceByPairingIdentity:(id)arg3 targetFragmentDuration:(CGFloat)arg4 clipStartDate:(id)arg5 quality:(NSInteger)arg6 encryptionManager:(id)arg7 ;
-(id)createFinalizeClipOperationForModelID:(id)arg0 localZone:(id)arg1 ;
-(id)createUploadVideoSegmentOperationForModelID:(id)arg0 localZone:(id)arg1 data:(id)arg2 metadata:(id)arg3 encryptionManager:(id)arg4 ;


@end


#endif