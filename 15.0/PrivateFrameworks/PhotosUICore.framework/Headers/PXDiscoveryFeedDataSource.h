// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXDISCOVERYFEEDDATASOURCE_H
#define PXDISCOVERYFEEDDATASOURCE_H

@class PHFetchResult;


#import "PXSectionedDataSource.h"

@interface PXDiscoveryFeedDataSource : PXSectionedDataSource

@property (readonly, nonatomic) PHFetchResult *assetCollections; // ivar: _assetCollections


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)init;
-(id)initWithAssetCollections:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectsInIndexPath:(struct PXSimpleIndexPath )arg0 ;


@end


#endif