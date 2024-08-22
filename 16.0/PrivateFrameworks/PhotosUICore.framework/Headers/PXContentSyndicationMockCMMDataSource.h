// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCONTENTSYNDICATIONMOCKCMMDATASOURCE_H
#define PXCONTENTSYNDICATIONMOCKCMMDATASOURCE_H



#import "PXContentSyndicationDataSource.h"
#import "PXCMMInvitationsDataSource.h"

@interface PXContentSyndicationMockCMMDataSource : PXContentSyndicationDataSource

@property (readonly, nonatomic) PXCMMInvitationsDataSource *cmmDataSource; // ivar: _cmmDataSource


-(NSInteger)countForCollection:(id)arg0 ;
-(NSInteger)identifier;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)assetCollectionAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)collectionAtIndexPath:(id)arg0 ;
-(id)collectionListForSection:(NSInteger)arg0 ;
-(id)contentSyndicationItemAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)initWithCMMDataSource:(id)arg0 ;
-(id)mostRecentlyAddedDate;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;


@end


#endif