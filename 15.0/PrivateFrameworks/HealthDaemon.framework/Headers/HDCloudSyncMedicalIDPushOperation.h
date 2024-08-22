// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCMEDICALIDPUSHOPERATION_H
#define HDCLOUDSYNCMEDICALIDPUSHOPERATION_H

@class _HKMedicalIDData;


#import "HDCloudSyncOperation.h"
#import "HDCloudSyncMedicalIDRecord.h"

@interface HDCloudSyncMedicalIDPushOperation : HDCloudSyncOperation

@property (retain, nonatomic) _HKMedicalIDData *cloudMedicalIDData; // ivar: _cloudMedicalIDData
@property (retain, nonatomic) _HKMedicalIDData *medicalIDDataToPush; // ivar: _medicalIDDataToPush
@property (retain, nonatomic) HDCloudSyncMedicalIDRecord *medicalIDRecord; // ivar: _medicalIDRecord


-(void)main;


@end


#endif