// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCTAGSFETCHOPERATION_H
#define FCTAGSFETCHOPERATION_H

@class NSArray;
@protocol FCTagsFetchOperationDelegate;


#import "FCMultiStepFetchOperation.h"
#import "FCHeldRecords.h"
#import "FCTagRecordSource.h"
#import "FCAssetManager.h"

@interface FCTagsFetchOperation : FCMultiStepFetchOperation {
    NSArray *_tagIDs;
    FCHeldRecords *_heldTagRecords;
    FCHeldRecords *_heldParentTagRecords;
    FCHeldRecords *_heldChildTagRecords;
    FCTagRecordSource *_tagRecordSource;
    FCAssetManager *_assetManager;
    id<FCTagsFetchOperationDelegate> *_delegate;
}


@property NSUInteger childrenCachePolicy; // ivar: _childrenCachePolicy
@property CGFloat childrenMaximumCachedAge; // ivar: _childrenMaximumCachedAge
@property (nonatomic) BOOL includeChildren; // ivar: _includeChildren
@property (nonatomic) BOOL includeParents; // ivar: _includeParents
@property BOOL overrideChildrenCachePolicy; // ivar: _overrideChildrenCachePolicy
@property BOOL overrideTargetsCachePolicy; // ivar: _overrideTargetsCachePolicy
@property NSUInteger targetsCachePolicy; // ivar: _targetsCachePolicy
@property CGFloat targetsMaximumCachedAge; // ivar: _targetsMaximumCachedAge


-(id)completeFetchOperation;
-(id)fetchChildTagRecordsWithCompletion:(id)arg0 ;
-(id)fetchParentTagRecordsWithCompletion:(id)arg0 ;
-(id)fetchTagRecordsWithCompletion:(id)arg0 ;
-(id)initWithTagIDs:(id)arg0 tagRecordSource:(id)arg1 assetManager:(id)arg2 delegate:(id)arg3 ;
-(void)customizeChildOperation:(id)arg0 forFetchStep:(SEL)arg1 ;


@end


#endif