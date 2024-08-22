// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIFACTORPACKSTORAGE_H
#define TRIFACTORPACKSTORAGE_H

@protocol TRIPaths, TRIAssetExtracting;

#import <Foundation/Foundation.h>


@interface TRIFactorPackStorage : NSObject {
    id<TRIPaths> *_paths;
    id<TRIAssetExtracting> *_extractor;
}




-(BOOL)_linkAssetsUpdatingFactorLevel:(id)arg0 fromFactorPackWithId:(id)arg1 usingAssetStore:(id)arg2 currentFactorPackPath:(id)arg3 futureFactorPackPath:(id)arg4 ;
-(BOOL)_removeUnreferencedFactorPackSetsWithNamespaceName:(id)arg0 removedCount:(*unsigned int)arg1 ;
-(BOOL)_removeUnreferencedFactorPackSetsWithParentDir:(id)arg0 removedCount:(*unsigned int)arg1 ;
-(BOOL)removeUnreferencedFactorPacksWithRemovedCount:(*unsigned int)arg0 ;
-(BOOL)saveFactorPack:(id)arg0 factorPackByNamePath:(*id)arg1 factorPackByIdPath:(*id)arg2 ;
-(BOOL)updateSavedFactorPackWithId:(id)arg0 namespaceName:(id)arg1 deletingAssetsWithFactorNames:(id)arg2 inUseAssetBehavior:(unsigned char)arg3 ;
-(BOOL)updateSavedFactorPackWithId:(id)arg0 namespaceName:(id)arg1 linkingNewAssetIds:(id)arg2 ;
-(id)_collectChildrenOfParentDir:(id)arg0 ;
-(id)_legacyParentDirForFactorPackWithNamespaceName:(id)arg0 ;
-(id)_legacyPathForFactorPackWithId:(id)arg0 namespaceName:(id)arg1 ;
-(id)_linkAssetWithId:(id)arg0 assetStore:(id)arg1 forFactorName:(id)arg2 currentFactorPackPath:(id)arg3 futureFactorPackPath:(id)arg4 ;
-(id)_linkAssetsWithIds:(id)arg0 copyingModifiedFactorPackWithPath:(id)arg1 tempDirRef:(id)arg2 ;
-(id)_parentDirForFactorPackWithNamespaceName:(id)arg0 ;
-(id)_pathForFactorPackWithId:(id)arg0 namespaceName:(id)arg1 ;
-(id)_removeAssetsWithFactorNames:(id)arg0 copyingModifiedFactorPackWithPath:(id)arg1 appendingToPathsToRemove:(id)arg2 tempDirRef:(id)arg3 ;
-(id)init;
-(id)initWithPaths:(id)arg0 ;
-(id)initWithPaths:(id)arg0 extractor:(id)arg1 ;
-(id)legacyPathForFactorPackWithId:(id)arg0 namespaceName:(id)arg1 ;
-(id)loadFactorPackWithDir:(id)arg0 ;
-(id)loadFactorPackWithId:(id)arg0 namespaceName:(id)arg1 ;
-(id)loadParsedFactorPackWithDir:(id)arg0 ;
-(id)loadParsedFactorPackWithId:(id)arg0 namespaceName:(id)arg1 ;
-(id)pathForFactorPackWithId:(id)arg0 namespaceName:(id)arg1 ;
-(void)_reportFactorPackDiskUsagesWithNamespaceName:(id)arg0 namespaceDirName:(id)arg1 context:(id)arg2 ;
-(void)reportFactorPackDiskUsagesUsingContext:(id)arg0 ;


@end


#endif