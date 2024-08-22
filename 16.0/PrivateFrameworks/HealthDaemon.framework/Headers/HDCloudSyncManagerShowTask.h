// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCMANAGERSHOWTASK_H
#define HDCLOUDSYNCMANAGERSHOWTASK_H

@class NSMutableArray, NSArray;


#import "HDCloudSyncManagerPipelineTask.h"

@interface HDCloudSyncManagerShowTask : HDCloudSyncManagerPipelineTask {
    os_unfair_lock_s _lock;
    NSMutableArray *_allRepositoryDescriptions;
    NSArray *_repositoryDescriptions;
}


@property (readonly, copy) NSArray *repositoryDescriptions;


-(id)initWithManager:(id)arg0 context:(id)arg1 accessibilityAssertion:(id)arg2 completion:(id)arg3 ;
-(id)pipelineForRepository:(id)arg0 ;
-(void)didFailWithErrors:(id)arg0 ;
-(void)didFinishWithSuccess;


@end


#endif