// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCPIPELINESTAGEMEDICALID_H
#define HDCLOUDSYNCPIPELINESTAGEMEDICALID_H

@class _HKMedicalIDData;


#import "HDCloudSyncPipelineStage.h"
#import "HDCloudSyncMedicalIDRecord.h"

@interface HDCloudSyncPipelineStageMedicalID : HDCloudSyncPipelineStage {
    _HKMedicalIDData *_localMedicalIDData;
    _HKMedicalIDData *_cloudMedicalIDData;
    HDCloudSyncMedicalIDRecord *_medicalIDRecord;
}




-(void)main;


@end


#endif