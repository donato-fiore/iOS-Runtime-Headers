// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRICLIENTTREATMENTSTORAGE_H
#define TRICLIENTTREATMENTSTORAGE_H

@protocol TRIPaths, TRIAssetExtracting;

#import <Foundation/Foundation.h>


@interface TRIClientTreatmentStorage : NSObject {
    id<TRIPaths> *_paths;
    id<TRIAssetExtracting> *_extractor;
}




-(BOOL)_deleteOnDemandAssetsWithIndexes:(id)arg0 treatment:(id)arg1 forRollouts:(BOOL)arg2 ;
-(BOOL)_linkAssetsUpdatingTreatment:(id)arg0 forRollouts:(BOOL)arg1 ;
-(BOOL)_linkAssetsWithIds:(id)arg0 updatingTreatment:(id)arg1 ;
-(BOOL)_removeFactorsWithTreatmentId:(id)arg0 namespaceName:(id)arg1 ;
-(BOOL)_removeFactorsWithURL:(id)arg0 ;
-(BOOL)_removeRolloutWithDescriptor:(id)arg0 descriptorDir:(id)arg1 treatmentLayer:(NSUInteger)arg2 namespaceName:(id)arg3 ;
-(BOOL)_resolveAssetPathsInTreatment:(id)arg0 usingReferenceURL:(id)arg1 ;
-(BOOL)_saveNamespacePartitionedTreatmentsForTreatment:(id)arg0 forNamespaceNames:(id)arg1 forRollouts:(BOOL)arg2 ;
-(BOOL)_savePersistedTreatment:(id)arg0 ;
-(BOOL)removeTreatmentFromLayer:(NSUInteger)arg0 withNamespaceName:(id)arg1 upgradeNCVs:(id)arg2 ;
-(BOOL)removeTreatmentWithTreatmentId:(id)arg0 ;
-(id)_assetURLForFactor:(id)arg0 treatmentId:(id)arg1 ;
-(id)_baseUrlForTreatment:(id)arg0 namespaceName:(id)arg1 ;
-(id)_copyFileFromURL:(id)arg0 to:(id)arg1 ;
-(id)_defaultsAssetURLForFactor:(id)arg0 ;
-(id)_linkAssetWithId:(id)arg0 treatmentId:(id)arg1 assetStore:(id)arg2 factor:(id)arg3 forRollouts:(BOOL)arg4 ;
-(id)init;
-(id)initWithPaths:(id)arg0 ;
-(id)initWithPaths:(id)arg0 extractor:(id)arg1 ;
-(id)loadTreatmentWithTreatmentId:(id)arg0 isFilePresent:(*BOOL)arg1 ;
-(id)saveTreatment:(id)arg0 ;
-(id)updateSavedTreatmentWithTreatmentId:(id)arg0 deletingAssetsIndexes:(id)arg1 forNamespaceNames:(id)arg2 forRollouts:(BOOL)arg3 ;
-(id)updateSavedTreatmentWithTreatmentId:(id)arg0 linkingNewAssetIds:(id)arg1 forNamespaceNames:(id)arg2 ;
-(id)urlForDefaultFactorsWithNamespaceName:(id)arg0 ;
-(id)urlForFactorsWithTreatmentId:(id)arg0 namespaceName:(id)arg1 ;
-(id)urlForTreatmentWithTreatmentId:(id)arg0 ;


@end


#endif