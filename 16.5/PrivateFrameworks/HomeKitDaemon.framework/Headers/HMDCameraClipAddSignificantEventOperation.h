// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERACLIPADDSIGNIFICANTEVENTOPERATION_H
#define HMDCAMERACLIPADDSIGNIFICANTEVENTOPERATION_H

@class NSString, NSDictionary;
@protocol HMBLocalZoneMirrorOutputObserver;


#import "HMDCameraClipAddModelsOperation.h"
#import "HMDCameraRecordingSessionSignificantEvent.h"

@interface HMDCameraClipAddSignificantEventOperation : HMDCameraClipAddModelsOperation <HMBLocalZoneMirrorOutputObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSDictionary *homePresenceByPairingIdentity; // ivar: _homePresenceByPairingIdentity
@property (readonly, copy) HMDCameraRecordingSessionSignificantEvent *significantEvent; // ivar: _significantEvent
@property (readonly) Class superclass;


+(NSUInteger)cameraClipOperationType;
+(id)logCategory;
-(id)attributeDescriptions;
-(id)initWithClipModelID:(id)arg0 localZone:(id)arg1 significantEvent:(id)arg2 homePresenceByPairingIdentity:(id)arg3 ;
-(id)initWithClipModelID:(id)arg0 localZone:(id)arg1 significantEvent:(id)arg2 homePresenceByPairingIdentity:(id)arg3 dataSource:(id)arg4 ;
-(id)modelsToAdd;
-(void)updateMirrorOutputModel:(id)arg0 ;


@end


#endif