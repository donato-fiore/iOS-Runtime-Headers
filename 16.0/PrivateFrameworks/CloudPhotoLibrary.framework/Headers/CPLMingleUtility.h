// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLMINGLEUTILITY_H
#define CPLMINGLEUTILITY_H


#import <Foundation/Foundation.h>


@interface CPLMingleUtility : NSObject



// +(BOOL)_applyMingledBatch:(id)arg0 scope:(id)arg1 forStore:(id)arg2 onPutBatchInPullQueue:(id)arg3 error:(unk)arg4  ;
+(BOOL)_remapScopedIdentifier:(id)arg0 to:(id)arg1 class:(Class)arg2 inBatch:(id)arg3 store:(id)arg4 idMapping:(id)arg5 cloudCache:(id)arg6 remappedRecords:(id)arg7 error:(*id)arg8 ;
+(BOOL)applyShareRemapFixUpTasks:(id)arg0 store:(id)arg1 error:(*id)arg2 ;
// +(BOOL)mingleChangeBatch:(id)arg0 scope:(id)arg1 forStore:(id)arg2 onPutBatchInPullQueue:(id)arg3 error:(unk)arg4  ;
// +(BOOL)mingleRemappedBatch:(id)arg0 scope:(id)arg1 forStore:(id)arg2 onPutBatchInPullQueue:(id)arg3 error:(unk)arg4  ;
// +(BOOL)mingleSharedRemappedBatch:(id)arg0 scope:(id)arg1 sharedScope:(id)arg2 forStore:(id)arg3 fixUpTasks:(*id)arg4 onPutBatchInPullQueue:(id)arg5 error:(unk)arg6  ;


@end


#endif