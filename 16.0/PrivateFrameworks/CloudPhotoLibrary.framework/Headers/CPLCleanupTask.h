// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLCLEANUPTASK_H
#define CPLCLEANUPTASK_H



#import "CPLEngineSyncTask.h"

@interface CPLCleanupTask : CPLEngineSyncTask



-(id)taskIdentifier;
-(void)_cleanupSharingFlags;
-(void)_doOneIteration;
-(void)launch;
-(void)taskDidFinishWithError:(id)arg0 ;


@end


#endif