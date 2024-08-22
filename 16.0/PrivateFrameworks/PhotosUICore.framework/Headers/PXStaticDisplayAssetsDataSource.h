// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTATICDISPLAYASSETSDATASOURCE_H
#define PXSTATICDISPLAYASSETSDATASOURCE_H

@class NSArray;


#import "PXAssetsDataSource.h"

@interface PXStaticDisplayAssetsDataSource : PXAssetsDataSource

@property (readonly, nonatomic) NSArray *assetCollectionBySection; // ivar: _assetCollectionBySection
@property (readonly, nonatomic) NSArray *assetsBySection; // ivar: _assetsBySection
@property (readonly, nonatomic) NSArray *curatedAssetsBySection; // ivar: _curatedAssetsBySection
@property (readonly, nonatomic) NSArray *exposedAssetsBySection; // ivar: _exposedAssetsBySection
@property (readonly, nonatomic) NSArray *keyAssetsBySection; // ivar: _keyAssetsBySection
@property (readonly, nonatomic) NSInteger sectionContent; // ivar: _sectionContent


-(BOOL)hasCurationForAssetCollection:(id)arg0 ;
-(NSInteger)numberOfCuratedItemsInAssetCollection:(id)arg0 ;
-(NSInteger)numberOfCuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfUncuratedItemsInAssetCollection:(id)arg0 ;
-(NSInteger)numberOfUncuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)init;
-(id)initWithAssetCollectionBySection:(id)arg0 assetsBySection:(id)arg1 curatedAssetsBySection:(id)arg2 keyAsssetsBySection:(id)arg3 sectionContent:(NSInteger)arg4 ;
-(id)initWithDisplayAssetFetchResults:(id)arg0 ;
-(id)keyAssetsForAssetCollection:(id)arg0 ;
-(id)keyAssetsInSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectsInIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;


@end


#endif