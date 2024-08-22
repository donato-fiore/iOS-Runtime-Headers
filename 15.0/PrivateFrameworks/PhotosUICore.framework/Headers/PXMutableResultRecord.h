// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMUTABLERESULTRECORD_H
#define PXMUTABLERESULTRECORD_H

@class PHFetchResult, NSPredicate, NSSet;


#import "PXResultRecord.h"

@interface PXMutableResultRecord : PXResultRecord {
    PHFetchResult *_filteredFetchResult;
    NSPredicate *_inclusionPredicate;
    BOOL _filteredFetchResultIsValid;
    BOOL _inclusionPredicateIsValid;
}


@property (retain, nonatomic) PHFetchResult *curatedFetchResult; // ivar: _curatedFetchResult
@property (readonly, nonatomic) NSSet *curatedOids; // ivar: _curatedOids
@property (copy, nonatomic) id *curatedRefetchCondition; // ivar: _curatedRefetchCondition
@property (nonatomic) BOOL ensureKeyAssetAtBeginning; // ivar: _ensureKeyAssetAtBeginning
@property (readonly, nonatomic) NSSet *excludedOids; // ivar: _excludedOids
@property (readonly, nonatomic) PHFetchResult *exposedFetchResult;
@property (readonly, nonatomic) PHFetchResult *fetchResult; // ivar: _fetchResult
@property (readonly, nonatomic) PHFetchResult *filteredFetchResult;
@property (readonly, nonatomic) NSSet *includedOids; // ivar: _includedOids
@property (readonly, nonatomic) NSPredicate *inclusionPredicate;
@property (readonly, nonatomic) BOOL isCurated;
@property (nonatomic) NSInteger keyAssetIndex; // ivar: _keyAssetIndex
@property (retain, nonatomic) PHFetchResult *keyAssetsFetchResult; // ivar: _keyAssetsFetchResult
@property (nonatomic) BOOL preloadAssetTypeCounts; // ivar: _preloadAssetTypeCounts
@property (readonly, nonatomic) BOOL reverseSortOrder; // ivar: _reverseSortOrder
@property (nonatomic) BOOL wantsCuration; // ivar: _wantsCuration


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_invalidateFilteredFetchResult;
-(void)_invalidateInclusionPredicate;
-(void)_invalidateKeyAssetIndex;
-(void)_setIncludeOids:(id)arg0 ;
-(void)_updateFilteredFetchResultIfNeeded;
-(void)excludeOids:(id)arg0 ;
-(void)includeOids:(id)arg0 ;
-(void)invalidateFetchResultAssetCache;
-(void)stopExcludingOids:(id)arg0 ;
-(void)stopIncludingAllOids;


@end


#endif