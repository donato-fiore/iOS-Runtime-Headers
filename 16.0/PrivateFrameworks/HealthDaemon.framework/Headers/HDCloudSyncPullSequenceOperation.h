// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCPULLSEQUENCEOPERATION_H
#define HDCLOUDSYNCPULLSEQUENCEOPERATION_H

@class NSArray;


#import "HDCloudSyncOperation.h"
#import "HDCloudSyncSequenceRecord.h"
#import "HDCloudSyncTarget.h"

@interface HDCloudSyncPullSequenceOperation : HDCloudSyncOperation {
    NSArray *_changeRecords;
}


@property (readonly, nonatomic) BOOL hasAppliedChange; // ivar: _hasAppliedChange
@property (readonly, nonatomic) HDCloudSyncSequenceRecord *sequenceRecord; // ivar: _sequenceRecord
@property (readonly, nonatomic) HDCloudSyncTarget *target; // ivar: _target


+(BOOL)shouldLogAtOperationStart;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 target:(id)arg2 sequence:(id)arg3 changes:(id)arg4 ;
-(void)main;


@end


#endif