// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCOLLECTIONSDATASOURCEMANAGER_H
#define PXCOLLECTIONSDATASOURCEMANAGER_H



#import "PXSectionedDataSourceManager.h"
#import "PXCollectionsDataSource.h"

@interface PXCollectionsDataSourceManager : PXSectionedDataSourceManager

@property (readonly, nonatomic) PXCollectionsDataSource *dataSource;


-(void)registerChangeObserver:(id)arg0 context:(*void)arg1 ;
-(void)unregisterChangeObserver:(id)arg0 context:(*void)arg1 ;


@end


#endif