// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCMEDICALIDMERGEOPERATION_H
#define HDCLOUDSYNCMEDICALIDMERGEOPERATION_H

@class _HKMedicalIDData;


#import "HDCloudSyncSynchronousOperation.h"

@interface HDCloudSyncMedicalIDMergeOperation : HDCloudSyncSynchronousOperation

@property (retain, nonatomic) _HKMedicalIDData *cloudMedicalIDData; // ivar: _cloudMedicalIDData
@property (retain, nonatomic) _HKMedicalIDData *localMedicalIDData; // ivar: _localMedicalIDData
@property (readonly, nonatomic) _HKMedicalIDData *mergedMedicalIDData; // ivar: _mergedMedicalIDData


-(BOOL)performWithError:(*id)arg0 ;


@end


#endif