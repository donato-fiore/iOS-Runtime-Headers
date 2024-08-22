// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXRELATEDDATASOURCE_H
#define PXRELATEDDATASOURCE_H

@class NSArray;


#import "PXSectionedDataSource.h"

@interface PXRelatedDataSource : PXSectionedDataSource

@property (readonly, copy, nonatomic) NSArray *relatedEntries; // ivar: _relatedEntries
@property (readonly, nonatomic, getter=isTransient) BOOL transient; // ivar: _transient
@property (readonly, nonatomic) BOOL useItemIndexPaths; // ivar: _useItemIndexPaths


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)_relatedEntryAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)init;
-(id)initWithRelatedEntries:(id)arg0 isTransient:(BOOL)arg1 useItemIndexPaths:(BOOL)arg2 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)relatedEntryAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;
-(struct PXSimpleIndexPath )indexPathForRelatedEntry:(id)arg0 ;


@end


#endif