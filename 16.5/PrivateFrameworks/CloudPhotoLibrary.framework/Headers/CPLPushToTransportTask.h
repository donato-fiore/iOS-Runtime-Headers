// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLPUSHTOTRANSPORTTASK_H
#define CPLPUSHTOTRANSPORTTASK_H



#import "CPLEngineMultiscopeSyncTask.h"

@interface CPLPushToTransportTask : CPLEngineMultiscopeSyncTask {
    BOOL _deferredCancel;
}


@property (nonatomic) BOOL highPriority; // ivar: _highPriority


+(BOOL)dontAutoRetry;
+(void)setDontAutoRetry:(BOOL)arg0 ;
-(BOOL)shouldSkipScopesWithMissingTransportScope;
-(id)enumerateScopesForTaskInTransaction:(id)arg0 ;
-(id)newScopedTaskWithScope:(id)arg0 session:(id)arg1 transportScope:(id)arg2 clientCacheIdentifier:(id)arg3 ;
-(id)scopeFilterInTransaction:(id)arg0 ;
-(id)taskIdentifier;
-(void)cancel:(BOOL)arg0 ;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)taskDidFinishWithError:(id)arg0 ;


@end


#endif