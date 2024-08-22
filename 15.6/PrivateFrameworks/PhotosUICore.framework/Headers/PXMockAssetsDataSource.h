// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMOCKASSETSDATASOURCE_H
#define PXMOCKASSETSDATASOURCE_H

@class NSArray;


#import "PXAssetsDataSource.h"

@interface PXMockAssetsDataSource : PXAssetsDataSource

@property (readonly, nonatomic) NSArray *assetCollections; // ivar: _assetCollections
@property (readonly, nonatomic) NSArray *assetsBySection; // ivar: _assetsBySection


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)initWithAssetsBySection:(id)arg0 assetCollections:(id)arg1 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectID:(id)arg0 ;


@end


#endif