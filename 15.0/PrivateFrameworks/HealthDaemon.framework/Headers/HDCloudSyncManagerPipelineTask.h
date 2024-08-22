// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCMANAGERPIPELINETASK_H
#define HDCLOUDSYNCMANAGERPIPELINETASK_H

@class HDAssertion, NSArray;


#import "HDCloudSyncManagerRepositoryTask.h"

@interface HDCloudSyncManagerPipelineTask : HDCloudSyncManagerRepositoryTask {
    os_unfair_lock_s _lock;
    id *_completion;
}


@property (retain, nonatomic) HDAssertion *accessibilityAssertion; // ivar: _accessibilityAssertion
@property (retain, nonatomic) NSArray *pipelines; // ivar: _pipelines


-(BOOL)requiresExistingShareOwnerParticipant;
-(id)initWithManager:(id)arg0 context:(id)arg1 ;
-(id)initWithManager:(id)arg0 context:(id)arg1 accessibilityAssertion:(id)arg2 completion:(id)arg3 ;
-(id)pipelineForRepository:(id)arg0 ;
-(void)callCompletionWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)didFailWithErrors:(id)arg0 ;
-(void)didFinishWithSuccess;
-(void)mainWithRepositories:(id)arg0 error:(id)arg1 ;


@end


#endif