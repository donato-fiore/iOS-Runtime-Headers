// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERASIGNIFICANTEVENTFACECLASSIFICATION_H
#define HMDCAMERASIGNIFICANTEVENTFACECLASSIFICATION_H

@class HMFObject, NSUUID, NSString;
@protocol NSCopying, NSMutableCopying;



@interface HMDCameraSignificantEventFaceClassification : HMFObject <NSCopying, NSMutableCopying>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSUUID *personManagerUUID; // ivar: _personManagerUUID
@property (copy) NSString *personName; // ivar: _personName
@property (copy) NSUUID *personUUID; // ivar: _personUUID
@property (copy) NSUUID *unassociatedFaceCropUUID; // ivar: _unassociatedFaceCropUUID


+(id)faceClassificationWithHMIFaceClassification:(id)arg0 person:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithUUID:(id)arg0 personManagerUUID:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif