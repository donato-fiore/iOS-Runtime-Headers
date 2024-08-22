// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLENGINEFORCEPROCESSINGSTAGEDSCOPESTASK_H
#define CPLENGINEFORCEPROCESSINGSTAGEDSCOPESTASK_H



#import "CPLEngineForceSyncTask.h"

@interface CPLEngineForceProcessingStagedScopesTask : CPLEngineForceSyncTask



-(BOOL)bypassForceSyncLimitations;
-(BOOL)forcingProcessedStagedScopes;
-(id)description;
-(id)initWithEngineLibrary:(id)arg0 delegate:(id)arg1 ;


@end


#endif