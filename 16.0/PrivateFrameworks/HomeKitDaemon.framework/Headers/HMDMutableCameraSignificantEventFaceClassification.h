// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMUTABLECAMERASIGNIFICANTEVENTFACECLASSIFICATION_H
#define HMDMUTABLECAMERASIGNIFICANTEVENTFACECLASSIFICATION_H

@class NSString, NSUUID;


#import "HMDCameraSignificantEventFaceClassification.h"

@interface HMDMutableCameraSignificantEventFaceClassification : HMDCameraSignificantEventFaceClassification

@property (copy) NSString *personName;
@property (copy) NSUUID *personUUID;
@property (copy) NSUUID *unassociatedFaceCropUUID;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif