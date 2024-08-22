// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLMINGLECHANGESTASK_H
#define CPLMINGLECHANGESTASK_H



#import "CPLEngineMultiscopeSyncTask.h"

@interface CPLMingleChangesTask : CPLEngineMultiscopeSyncTask



-(BOOL)shouldProcessScope:(id)arg0 inTransaction:(id)arg1 ;
-(id)enumerateScopesForTaskInTransaction:(id)arg0 ;
-(id)newScopedTaskWithScope:(id)arg0 session:(id)arg1 transportScope:(id)arg2 clientCacheIdentifier:(id)arg3 ;
-(id)scopeFilterInTransaction:(id)arg0 ;
-(id)taskIdentifier;
-(void)launch;
-(void)taskDidFinishWithError:(id)arg0 ;


@end


#endif