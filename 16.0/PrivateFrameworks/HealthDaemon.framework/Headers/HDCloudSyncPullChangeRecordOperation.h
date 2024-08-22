// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCPULLCHANGERECORDOPERATION_H
#define HDCLOUDSYNCPULLCHANGERECORDOPERATION_H

@class NSFileHandle;


#import "HDCloudSyncOperation.h"
#import "HDCloudSyncChangeRecord.h"
#import "HDCloudSyncSequenceRecord.h"
#import "HDCloudSyncTarget.h"

@interface HDCloudSyncPullChangeRecordOperation : HDCloudSyncOperation {
    NSFileHandle *_fileHandle;
}


@property (readonly, nonatomic) HDCloudSyncChangeRecord *changeRecord; // ivar: _changeRecord
@property (readonly, nonatomic) HDCloudSyncSequenceRecord *sequenceRecord; // ivar: _sequenceRecord
@property (readonly, nonatomic) HDCloudSyncTarget *target; // ivar: _target


+(NSInteger)progressCount;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 target:(id)arg2 sequenceRecord:(id)arg3 changeRecord:(id)arg4 ;
-(void)main;


@end


#endif