// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSRESULTTUPLE_H
#define PXPHOTOSRESULTTUPLE_H

@class PHFetchResult, NSPredicate;

#import <Foundation/Foundation.h>


@interface PXPhotosResultTuple : NSObject

@property (readonly, nonatomic) PHFetchResult *curatedFetchResult; // ivar: _curatedFetchResult
@property (readonly, nonatomic) id *curatedRefetchCondition; // ivar: _curatedRefetchCondition
@property (readonly, nonatomic) PHFetchResult *fetchResult; // ivar: _fetchResult
@property (readonly, nonatomic) BOOL fetchedWithReverseSortOrder; // ivar: _fetchedWithReverseSortOrder
@property (readonly, nonatomic) NSPredicate *filterPredicate; // ivar: _filterPredicate
@property (readonly, nonatomic) PHFetchResult *keyAssetsFetchResult; // ivar: _keyAssetsFetchResult


-(id)description;
// -(id)initWithFetchResult:(id)arg0 fetchedWithReverseSortOrder:(BOOL)arg1 curatedFetchResult:(id)arg2 curatedRefetchCondition:(id)arg3 keyAssetsFetchResult:(unk)arg4 filterPredicate:(id)arg5  ;
-(id)resultTupleUpdatedWithChange:(id)arg0 ;


@end


#endif