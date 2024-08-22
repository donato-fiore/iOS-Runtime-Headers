// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCMEDICALIDPERSISTOPERATION_H
#define HDCLOUDSYNCMEDICALIDPERSISTOPERATION_H

@class _HKMedicalIDData;


#import "HDCloudSyncSynchronousOperation.h"

@interface HDCloudSyncMedicalIDPersistOperation : HDCloudSyncSynchronousOperation

@property (retain, nonatomic) _HKMedicalIDData *medicalIDDataToPersist; // ivar: _medicalIDDataToPersist


-(BOOL)performWithError:(*id)arg0 ;


@end


#endif