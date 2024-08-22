// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGDEJUNKERDEDUPER_PHASSET_H
#define PGDEJUNKERDEDUPER_PHASSET_H

@class CLSInvestigationItem, NSDictionary, PHPhotoLibrary;



@interface PGDejunkerDeduper_PHAsset : CLSInvestigationItem {
    NSDictionary *_personLocalIdentifiersByAssetUUID;
    NSDictionary *_peopleScenesByAssetUUID;
    NSDictionary *_averageFaceQualityByAssetUUID;
}


@property (readonly) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


-(BOOL)isJunkForItem:(id)arg0 ;
-(id)bestItemInItems:(id)arg0 options:(id)arg1 ;
-(id)debugPersonStringForItem:(id)arg0 ;
-(id)dejunkedDedupedAssetsInAssets:(id)arg0 options:(id)arg1 debugInfo:(id)arg2 progressBlock:(id)arg3 ;
-(id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg0 ;
-(id)featureWithItem:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)itemsSortedByScoreWithItems:(id)arg0 options:(id)arg1 ;
-(void)_buildCachesWithAssets:(id)arg0 options:(id)arg1 ;


@end


#endif