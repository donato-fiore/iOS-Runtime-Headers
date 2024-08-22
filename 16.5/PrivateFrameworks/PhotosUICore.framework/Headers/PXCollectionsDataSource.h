// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCOLLECTIONSDATASOURCE_H
#define PXCOLLECTIONSDATASOURCE_H



#import "PXSectionedDataSource.h"

@interface PXCollectionsDataSource : PXSectionedDataSource

@property (readonly, nonatomic) id *content; // ivar: _content


-(NSInteger)countForCollection:(id)arg0 ;
-(id)collectionAtIndexPath:(id)arg0 ;
-(id)collectionListForSection:(NSInteger)arg0 ;
-(id)existingAssetsFetchResultAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)indexPathForCollection:(id)arg0 ;


@end


#endif