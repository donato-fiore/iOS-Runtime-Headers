// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCMANAGERREPOSITORYTASK_H
#define HDCLOUDSYNCMANAGERREPOSITORYTASK_H

@class NSArray;


#import "HDCloudSyncManagerTask.h"
#import "HDCloudSyncContext.h"
#import "HDCloudSyncManager.h"

@interface HDCloudSyncManagerRepositoryTask : HDCloudSyncManagerTask

@property (copy, nonatomic) HDCloudSyncContext *context; // ivar: _context
@property (weak, nonatomic) HDCloudSyncManager *manager; // ivar: _manager
@property (copy, nonatomic) NSArray *repositories; // ivar: _repositories
@property BOOL runWhenSyncProhibited; // ivar: _runWhenSyncProhibited


-(id)initWithManager:(id)arg0 context:(id)arg1 ;
-(void)main;
-(void)mainWithRepositories:(id)arg0 error:(id)arg1 ;


@end


#endif