// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCONTENTSYNDICATIONDATASOURCE_H
#define PXCONTENTSYNDICATIONDATASOURCE_H

@class NSDate;


#import "PXCollectionsDataSource.h"

@interface PXContentSyndicationDataSource : PXCollectionsDataSource

@property (readonly, copy, nonatomic) NSDate *mostRecentlyAddedDate;


-(NSInteger)countForCollection:(id)arg0 ;
-(id)allAssetsFetchResult;
-(id)assetCollectionAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)collectionAtIndexPath:(id)arg0 ;
-(id)collectionListForSection:(NSInteger)arg0 ;
-(id)contentSyndicationItemAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)indexPathForCollection:(id)arg0 ;


@end


#endif