// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCPUSHREFERENCETOMBSTONESOPERATION_H
#define HDCLOUDSYNCPUSHREFERENCETOMBSTONESOPERATION_H

@class NSMutableArray;


#import "HDCloudSyncOperation.h"
#import "HDCloudSyncCachedZone.h"

@interface HDCloudSyncPushReferenceTombstonesOperation : HDCloudSyncOperation {
    NSMutableArray *_unsynchronizedTombstones;
    NSMutableArray *_referenceRecordsToDelete;
    NSMutableArray *_attachmentsRecordsToDelete;
    NSMutableArray *_tombstoneRecordsToPush;
    HDCloudSyncCachedZone *_attachmentZone;
}




-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(void)main;


@end


#endif