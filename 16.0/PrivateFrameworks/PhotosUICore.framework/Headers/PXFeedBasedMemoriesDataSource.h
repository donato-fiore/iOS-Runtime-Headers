// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFEEDBASEDMEMORIESDATASOURCE_H
#define PXFEEDBASEDMEMORIESDATASOURCE_H

@class NSArray;


#import "PXMemoriesDataSource.h"

@interface PXFeedBasedMemoriesDataSource : PXMemoriesDataSource

@property (readonly, copy, nonatomic) NSArray *entries; // ivar: _entries


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)initWithDataSource:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)sectionedObjectReferenceForMemoryUUID:(id)arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;


@end


#endif