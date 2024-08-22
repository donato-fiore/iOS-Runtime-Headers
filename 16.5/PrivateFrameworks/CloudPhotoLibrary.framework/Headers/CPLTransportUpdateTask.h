// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLTRANSPORTUPDATETASK_H
#define CPLTRANSPORTUPDATETASK_H



#import "CPLEngineMultiscopeSyncTask.h"

@interface CPLTransportUpdateTask : CPLEngineMultiscopeSyncTask



-(BOOL)shouldSkipScopesWithMissingTransportScope;
-(id)enumerateScopesForTaskInTransaction:(id)arg0 ;
-(id)newScopedTaskWithScope:(id)arg0 session:(id)arg1 transportScope:(id)arg2 clientCacheIdentifier:(id)arg3 ;
-(id)taskIdentifier;


@end


#endif