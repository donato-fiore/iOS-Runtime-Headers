// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCMANAGERSUBSCRIPTIONTASK_H
#define HDCLOUDSYNCMANAGERSUBSCRIPTIONTASK_H

@class NSDictionary;


#import "HDCloudSyncManagerPipelineTask.h"

@interface HDCloudSyncManagerSubscriptionTask : HDCloudSyncManagerPipelineTask {
    NSDictionary *_subscriptions;
}




-(id)initWithManager:(id)arg0 context:(id)arg1 subscriptions:(id)arg2 accessibilityAssertion:(id)arg3 completion:(id)arg4 ;
-(id)pipelineForRepository:(id)arg0 ;


@end


#endif