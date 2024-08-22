// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXINBOXAGGREGATEDATASOURCEMANAGER_H
#define PXINBOXAGGREGATEDATASOURCEMANAGER_H

@class NSArray, NSString;
@protocol PXSectionedDataSourceManagerObserver, PXChangeObserver;


#import "PXSectionedDataSourceManager.h"
#import "PXInboxAggregateDataSource.h"

@interface PXInboxAggregateDataSourceManager : PXSectionedDataSourceManager <PXSectionedDataSourceManagerObserver, PXChangeObserver>



@property (readonly, nonatomic) PXInboxAggregateDataSource *dataSource;
@property (readonly, nonatomic) NSArray *dataSourceManagers; // ivar: _dataSourceManagers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createInitialDataSource;
-(id)initWithDataSourceManagers:(id)arg0 ;
-(void)_updateDataSource;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif