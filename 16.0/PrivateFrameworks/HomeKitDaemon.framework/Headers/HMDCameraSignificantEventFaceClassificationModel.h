// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERASIGNIFICANTEVENTFACECLASSIFICATIONMODEL_H
#define HMDCAMERASIGNIFICANTEVENTFACECLASSIFICATIONMODEL_H

@class HMBModel, NSUUID, NSString;



@interface HMDCameraSignificantEventFaceClassificationModel : HMBModel

@property (retain) NSUUID *personManagerUUID;
@property (retain) NSString *personName;
@property (retain) NSUUID *personUUID;
@property (retain) NSUUID *unassociatedFaceCropUUID;


+(id)hmbExternalRecordType;
+(id)hmbProperties;
-(id)createFaceClassification;


@end


#endif