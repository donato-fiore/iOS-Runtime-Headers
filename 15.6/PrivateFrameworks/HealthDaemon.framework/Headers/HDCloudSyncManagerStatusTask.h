// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCMANAGERSTATUSTASK_H
#define HDCLOUDSYNCMANAGERSTATUSTASK_H



#import "HDCloudSyncManagerRepositoryTask.h"

@interface HDCloudSyncManagerStatusTask : HDCloudSyncManagerRepositoryTask {
    id *_completion;
}




-(id)initWithManager:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)mainWithRepositories:(id)arg0 error:(id)arg1 ;


@end


#endif