// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTACKEDDATASOURCE_H
#define PXSTACKEDDATASOURCE_H

@class NSArray;


#import "PXSectionedDataSource.h"

@interface PXStackedDataSource : PXSectionedDataSource

@property (readonly, nonatomic) NSArray *dataSections; // ivar: _dataSections


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)changeDetailsToDataSource:(id)arg0 sectionChanges:(id)arg1 itemChanges:(id)arg2 ;
-(id)init;
-(id)initWithDataSections:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;


@end


#endif