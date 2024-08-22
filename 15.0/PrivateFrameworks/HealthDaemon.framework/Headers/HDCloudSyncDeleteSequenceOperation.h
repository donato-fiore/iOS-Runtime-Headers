// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCDELETESEQUENCEOPERATION_H
#define HDCLOUDSYNCDELETESEQUENCEOPERATION_H



#import "HDCloudSyncOperation.h"
#import "HDCloudSyncTarget.h"
#import "HDCloudSyncSequenceRecord.h"

@interface HDCloudSyncDeleteSequenceOperation : HDCloudSyncOperation {
    HDCloudSyncTarget *_target;
    HDCloudSyncSequenceRecord *_sequenceRecord;
}




-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 target:(id)arg2 sequence:(id)arg3 ;
-(void)main;


@end


#endif