// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFETCHRESULTDATASOURCE_H
#define PXFETCHRESULTDATASOURCE_H

@class PHFetchResult;


#import "PXSectionedDataSource.h"

@interface PXFetchResultDataSource : PXSectionedDataSource

@property (readonly, nonatomic) PHFetchResult *fetchResult; // ivar: _fetchResult


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)init;
-(id)initWithFetchResult:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectsInIndexPath:(struct PXSimpleIndexPath )arg0 ;


@end


#endif