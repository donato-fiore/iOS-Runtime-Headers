// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERACLIPOPERATION_H
#define HMDCAMERACLIPOPERATION_H

@class HMFOperation, NSArray, NSUUID, NSDate, NSString, HMBLocalZone;
@protocol HMFObject, HMFLogging, HMDCameraClipOperationDataSource;


#import "HMDCameraRecordingUploadOperationEvent.h"

@interface HMDCameraClipOperation : HMFOperation <HMFObject, HMFLogging>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) NSUUID *clipModelID; // ivar: _clipModelID
@property (readonly, copy) NSDate *creationDate; // ivar: _creationDate
@property (readonly) NSObject<HMDCameraClipOperationDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSDate *endDate; // ivar: _endDate
@property (readonly) CGFloat executionDuration;
@property (readonly) NSUInteger hash;
@property (readonly) HMBLocalZone *localZone; // ivar: _localZone
@property (readonly, copy) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) CGFloat queuedDuration;
@property (readonly, copy) NSString *shortDescription;
@property (copy) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (readonly) HMDCameraRecordingUploadOperationEvent *uploadOperationEvent; // ivar: _uploadOperationEvent


+(NSUInteger)cameraClipOperationType;
+(id)logCategory;
-(id)fetchClipModel;
-(id)initWithClipModelID:(id)arg0 localZone:(id)arg1 ;
-(id)initWithClipModelID:(id)arg0 localZone:(id)arg1 dataSource:(id)arg2 ;
-(id)updateClipModel:(id)arg0 ;
-(void)_markEndDateAndSubmitUploadOperationEvent;
-(void)cancelWithError:(id)arg0 ;
-(void)finish;
-(void)main;


@end


#endif