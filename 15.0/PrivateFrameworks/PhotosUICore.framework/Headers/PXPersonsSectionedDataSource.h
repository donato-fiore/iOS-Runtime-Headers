// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPERSONSSECTIONEDDATASOURCE_H
#define PXPERSONSSECTIONEDDATASOURCE_H

@class NSDictionary, NSArray;


#import "PXSectionedDataSource.h"

@interface PXPersonsSectionedDataSource : PXSectionedDataSource

@property (readonly, copy, nonatomic) NSDictionary *faceTiles; // ivar: _faceTiles
@property (readonly, copy, nonatomic) NSArray *personsSections; // ivar: _personsSections
@property (readonly, nonatomic) NSInteger totalItemCount;


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)faceTileForIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)initWithPersonsSections:(id)arg0 faceTiles:(id)arg1 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectsInIndexPath:(struct PXSimpleIndexPath )arg0 ;


@end


#endif