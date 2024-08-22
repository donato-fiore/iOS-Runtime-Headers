// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCSHAREDSUMMARYPUSHTASK_H
#define HDCLOUDSYNCSHAREDSUMMARYPUSHTASK_H



#import "HDCloudSyncManagerPipelineTask.h"

@interface HDCloudSyncSharedSummaryPushTask : HDCloudSyncManagerPipelineTask



-(BOOL)combineWithTask:(id)arg0 ;
-(id)pipelineForRepository:(id)arg0 ;
-(void)didFailWithErrors:(id)arg0 ;
-(void)didFinishWithSuccess;


@end


#endif