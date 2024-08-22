// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCSTARTSEQUENCEOPERATION_H
#define HDCLOUDSYNCSTARTSEQUENCEOPERATION_H



#import "HDCloudSyncSynchronousOperation.h"
#import "HDCloudSyncTarget.h"
#import "HDCloudSyncSequenceRecord.h"
#import "HDCloudSyncSequenceState.h"

@interface HDCloudSyncStartSequenceOperation : HDCloudSyncSynchronousOperation {
    HDCloudSyncTarget *_target;
    HDCloudSyncSequenceRecord *_sequenceRecord;
    HDCloudSyncSequenceRecord *_replacedSequenceRecord;
    BOOL _shouldClearRebaselineDeadline;
}


@property (readonly, copy, nonatomic) HDCloudSyncSequenceState *sequenceState; // ivar: _sequenceState


-(BOOL)performWithError:(*id)arg0 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 target:(id)arg2 sequence:(id)arg3 replacingSequence:(id)arg4 shouldClearRebaselineDeadline:(BOOL)arg5 ;


@end


#endif