// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERASIGNIFICANTEVENTBULLETINPARAMS_H
#define HMDCAMERASIGNIFICANTEVENTBULLETINPARAMS_H

@class HMFObject, NSUUID, NSDate, NSSet;



@interface HMDCameraSignificantEventBulletinParams : HMFObject

@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSUUID *cameraProfileUUID; // ivar: _cameraProfileUUID
@property (readonly) NSUInteger confidenceLevel; // ivar: _confidenceLevel
@property (readonly, copy) NSDate *dateOfOccurrence; // ivar: _dateOfOccurrence
@property (readonly, copy) NSSet *faceClassifications; // ivar: _faceClassifications
@property (readonly) NSUInteger reason; // ivar: _reason


-(id)init;
-(id)initWithSignificantEvent:(id)arg0 cameraProfileUUID:(id)arg1 ;
-(id)initWithUUID:(id)arg0 reason:(NSUInteger)arg1 dateOfOccurrence:(id)arg2 confidenceLevel:(NSUInteger)arg3 faceClassifications:(id)arg4 cameraProfileUUID:(id)arg5 ;


@end


#endif