// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPERSONSSECTIONEDDATASOURCE_H
#define PXPERSONSSECTIONEDDATASOURCE_H

@class NSMutableDictionary, NSDictionary, NSArray;


#import "PXSectionedDataSource.h"

@interface PXPersonsSectionedDataSource : PXSectionedDataSource {
    NSMutableDictionary *_cachedSortedPersonsByTypeAndSection;
}


@property (readonly, copy, nonatomic) NSDictionary *faceTiles; // ivar: _faceTiles
@property (readonly, nonatomic) NSUInteger peopleHomeSortingType; // ivar: _peopleHomeSortingType
@property (readonly, copy, nonatomic) NSArray *personsSections; // ivar: _personsSections
@property (readonly, nonatomic) NSInteger totalItemCount;


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)_personsInSection:(NSInteger)arg0 ;
-(id)faceTileForIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)initWithPersonsSections:(id)arg0 faceTiles:(id)arg1 peopleHomeSortingType:(NSUInteger)arg2 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectsInIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)sortedObjectsInIndexPath:(struct PXSimpleIndexPath )arg0 ;


@end


#endif