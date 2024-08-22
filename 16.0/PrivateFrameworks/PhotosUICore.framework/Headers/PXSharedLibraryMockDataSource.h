// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYMOCKDATASOURCE_H
#define PXSHAREDLIBRARYMOCKDATASOURCE_H

@class NSArray;


#import "PXSharedLibraryDataSource.h"

@interface PXSharedLibraryMockDataSource : PXSharedLibraryDataSource {
    NSArray *_mocks;
}




-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)initWithMocks:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)sharedLibraryAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;


@end


#endif