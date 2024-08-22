// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXLEGACYSECTIONEDDATASOURCECHANGEDETAILS_H
#define PXLEGACYSECTIONEDDATASOURCECHANGEDETAILS_H

@class NSIndexSet, NSArray;

#import <Foundation/Foundation.h>

#import "PXSectionedDataSourceChangeDetails.h"

@interface PXLegacySectionedDataSourceChangeDetails : NSObject {
    NSIndexSet *_deletedSections;
    NSIndexSet *_insertedSections;
    NSIndexSet *_changedSections;
    NSArray *_deletedIndexPaths;
    NSArray *_insertedIndexPaths;
    NSArray *_changedIndexPaths;
    NSArray *_contentChangedIndexPaths;
    NSInteger _shiftingSectionLocation;
    BOOL _prepared;
    BOOL _hasIncrementalChanges;
    BOOL _hasMoves;
}


@property (readonly, nonatomic) NSArray *changedItemsIndexPaths;
@property (readonly, nonatomic) NSIndexSet *changedSections;
@property (readonly, nonatomic) NSArray *contentItemsChangedIndexPaths; // ivar: _contentItemsChangedIndexPaths
@property (readonly, nonatomic) NSArray *deletedItemsIndexPaths;
@property (readonly, nonatomic) NSIndexSet *deletedSections;
@property (readonly, nonatomic) BOOL hasIncrementalChanges;
@property (readonly, nonatomic) BOOL hasMoves;
@property (readonly, nonatomic) NSArray *insertedItemsIndexPaths;
@property (readonly, nonatomic) NSIndexSet *insertedSections;
@property (readonly, nonatomic) PXSectionedDataSourceChangeDetails *sectionedDataSourceChangeDetails; // ivar: _sectionedDataSourceChangeDetails


-(id)contentChangedItemsIndexPaths;
-(id)description;
-(id)initWithSectionedDataSourceChangeDetails:(id)arg0 shiftedSection:(NSInteger)arg1 ;
-(void)_prepareIncrementalDetails;
-(void)enumerateMovedIndexPathsUsingBlock:(id)arg0 ;
-(void)prepareIfNeeded;


@end


#endif