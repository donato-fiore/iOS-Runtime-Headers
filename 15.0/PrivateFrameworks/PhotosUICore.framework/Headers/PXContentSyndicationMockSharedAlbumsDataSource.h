// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCONTENTSYNDICATIONMOCKSHAREDALBUMSDATASOURCE_H
#define PXCONTENTSYNDICATIONMOCKSHAREDALBUMSDATASOURCE_H



#import "PXContentSyndicationDataSource.h"
#import "PXCollectionsDataSource.h"

@interface PXContentSyndicationMockSharedAlbumsDataSource : PXContentSyndicationDataSource

@property (readonly, nonatomic) PXCollectionsDataSource *sharedAlbumsDataSource; // ivar: _sharedAlbumsDataSource


-(NSInteger)countForCollection:(id)arg0 ;
-(NSInteger)identifier;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)assetCollectionAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)collectionAtIndexPath:(id)arg0 ;
-(id)collectionListForSection:(NSInteger)arg0 ;
-(id)contentSyndicationItemAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)initWithSharedAlbumsDataSource:(id)arg0 ;
-(id)mostRecentlyAddedDate;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;


@end


#endif