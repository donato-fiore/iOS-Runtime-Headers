// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXCOLLECTIONSDATASOURCESECTION_H
#define _PXCOLLECTIONSDATASOURCESECTION_H

@class NSDictionary;


#import "PXCollectionsDataSection.h"
#import "PXCollectionsDataSource.h"

@interface _PXCollectionsDataSourceSection : PXCollectionsDataSection {
    NSInteger _count;
}


@property (readonly, nonatomic) PXCollectionsDataSource *collectionsDataSource; // ivar: _collectionsDataSource
@property (readonly, nonatomic) NSDictionary *lockStatePerCollection; // ivar: _lockStatePerCollection
@property (readonly, nonatomic) NSUInteger section; // ivar: _section


-(NSInteger)count;
-(NSInteger)countForCollection:(id)arg0 ;
-(NSInteger)indexOfCollection:(id)arg0 ;
-(NSUInteger)lockStateForCollection:(id)arg0 ;
-(id)content;
-(id)existingAssetsFetchResultAtIndex:(NSInteger)arg0 ;
-(id)initWithCollectionsDataSource:(id)arg0 ;
-(id)initWithCollectionsDataSource:(id)arg0 lockStatePerCollection:(id)arg1 ;
-(id)objectAtIndex:(NSInteger)arg0 ;


@end


#endif