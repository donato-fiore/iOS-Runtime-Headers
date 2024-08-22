// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLENGINEBACKUPSYNCTASK_H
#define CPLENGINEBACKUPSYNCTASK_H



#import "CPLEngineForceSyncTask.h"

@interface CPLEngineBackupSyncTask : CPLEngineForceSyncTask



-(BOOL)forBackup;
-(id)description;
-(id)initWithEngineLibrary:(id)arg0 delegate:(id)arg1 ;


@end


#endif