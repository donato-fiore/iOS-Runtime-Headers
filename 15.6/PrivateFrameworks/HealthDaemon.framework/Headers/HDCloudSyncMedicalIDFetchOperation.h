// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCMEDICALIDFETCHOPERATION_H
#define HDCLOUDSYNCMEDICALIDFETCHOPERATION_H

@class CKContainer, _HKMedicalIDData;


#import "HDCloudSyncOperation.h"
#import "HDCloudSyncMedicalIDRecord.h"

@interface HDCloudSyncMedicalIDFetchOperation : HDCloudSyncOperation {
    CKContainer *_container;
}


@property (readonly, nonatomic) _HKMedicalIDData *cloudMedicalIDData; // ivar: _cloudMedicalIDData
@property (readonly, nonatomic) HDCloudSyncMedicalIDRecord *medicalIDRecord; // ivar: _medicalIDRecord


+(BOOL)shouldLogAtOperationStart;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 container:(id)arg2 ;
-(void)main;


@end


#endif