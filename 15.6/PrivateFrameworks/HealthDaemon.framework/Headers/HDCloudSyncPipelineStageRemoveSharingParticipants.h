// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCPIPELINESTAGEREMOVESHARINGPARTICIPANTS_H
#define HDCLOUDSYNCPIPELINESTAGEREMOVESHARINGPARTICIPANTS_H

@class NSSet;


#import "HDCloudSyncPipelineStage.h"

@interface HDCloudSyncPipelineStageRemoveSharingParticipants : HDCloudSyncPipelineStage

@property (copy, nonatomic) NSSet *participantsToRemove; // ivar: _participantsToRemove
@property (nonatomic) BOOL removeAllParticipants; // ivar: _removeAllParticipants


-(void)main;


@end


#endif