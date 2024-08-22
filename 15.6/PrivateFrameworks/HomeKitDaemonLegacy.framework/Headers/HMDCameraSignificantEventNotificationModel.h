// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERASIGNIFICANTEVENTNOTIFICATIONMODEL_H
#define HMDCAMERASIGNIFICANTEVENTNOTIFICATIONMODEL_H

@class HMBModel, HMBModelCloudReference, NSNumber, NSDate, CKAsset, NSDictionary;



@interface HMDCameraSignificantEventNotificationModel : HMBModel

@property (retain) HMBModelCloudReference *associatedClip;
@property (retain) NSNumber *confidenceLevel;
@property (retain) NSDate *dateOfOccurrence;
@property (retain) CKAsset *faceCropAsset;
@property (retain) CKAsset *heroFrameAsset;
@property (retain) NSDictionary *homePresenceByPairingIdentity;
@property (retain) NSNumber *significantEvent;
@property (retain) NSNumber *timeOffsetWithinClip;


+(id)hmbExternalRecordType;
+(id)hmbProperties;
+(id)hmbQueries;
+(id)significantEventsBetweenDatesQueryWithIsAscending:(BOOL)arg0 ;
-(id)createClipSignificantEventWithCameraProfileUUID:(id)arg0 faceClassification:(id)arg1 ;


@end


#endif