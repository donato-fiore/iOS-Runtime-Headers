// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFILEBACKEDASSETSDATASOURCE_H
#define PXFILEBACKEDASSETSDATASOURCE_H

@class NSDictionary;


#import "PXAssetsDataSource.h"

@interface PXFileBackedAssetsDataSource : PXAssetsDataSource {
    NSDictionary *_assetCollectionBySection;
}


@property (readonly, copy, nonatomic) NSDictionary *assetDescriptionsBySection; // ivar: _assetDescriptionsBySection


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)assetsInSectionIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)init;
-(id)initWithFileBackedAssetDescriptionsBySection:(id)arg0 ;
-(id)initWithFileURLsBySection:(id)arg0 ;
-(id)inputForItem:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)photosGraphSuggestedContributions;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;


@end


#endif