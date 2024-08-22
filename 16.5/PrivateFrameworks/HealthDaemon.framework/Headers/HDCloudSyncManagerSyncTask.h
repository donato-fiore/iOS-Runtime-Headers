// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCMANAGERSYNCTASK_H
#define HDCLOUDSYNCMANAGERSYNCTASK_H



#import "HDCloudSyncManagerPipelineTask.h"

@interface HDCloudSyncManagerSyncTask : HDCloudSyncManagerPipelineTask



-(BOOL)combineWithTask:(id)arg0 ;
-(id)pipelineForRepository:(id)arg0 ;
-(void)didFailWithErrors:(id)arg0 ;
-(void)didFinishWithSuccess;


@end


#endif