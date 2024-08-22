// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERACLIPIMPORTER_H
#define HMDCAMERACLIPIMPORTER_H

@class HMFObject, NSUUID, NSString, HMBLocalZone;
@protocol HMFLogging, OS_dispatch_queue;



@interface HMDCameraClipImporter : HMFObject <HMFLogging>



@property (readonly, copy) NSUUID *cameraProfileUUID; // ivar: _cameraProfileUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMBLocalZone *localZone; // ivar: _localZone
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)importClipsWithImportData:(id)arg0 ;
-(id)initWithLocalZone:(id)arg0 cameraProfileUUID:(id)arg1 ;


@end


#endif