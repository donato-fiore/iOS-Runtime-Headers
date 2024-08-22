// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCMANAGERMEDICALIDSYNCTASK_H
#define HDCLOUDSYNCMANAGERMEDICALIDSYNCTASK_H



#import "HDCloudSyncManagerPipelineTask.h"

@interface HDCloudSyncManagerMedicalIDSyncTask : HDCloudSyncManagerPipelineTask {
    id *_completion;
}




-(BOOL)combineWithTask:(id)arg0 ;
-(id)pipelineForRepository:(id)arg0 ;
-(void)didFailWithErrors:(id)arg0 ;
-(void)didFinishWithSuccess;


@end


#endif