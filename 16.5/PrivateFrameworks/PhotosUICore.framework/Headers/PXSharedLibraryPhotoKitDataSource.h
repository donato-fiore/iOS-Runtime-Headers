// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYPHOTOKITDATASOURCE_H
#define PXSHAREDLIBRARYPHOTOKITDATASOURCE_H

@class PHFetchResult;


#import "PXSharedLibraryDataSource.h"

@interface PXSharedLibraryPhotoKitDataSource : PXSharedLibraryDataSource {
    PHFetchResult *_fetchResult;
}




-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)dataSourceUpdatedWithChange:(id)arg0 changeDetails:(*id)arg1 ;
-(id)initWithFetchResult:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)sharedLibraryAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;


@end


#endif