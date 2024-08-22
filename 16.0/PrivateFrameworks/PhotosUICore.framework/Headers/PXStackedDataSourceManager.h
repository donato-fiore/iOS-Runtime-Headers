// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTACKEDDATASOURCEMANAGER_H
#define PXSTACKEDDATASOURCEMANAGER_H

@class NSArray, NSString;
@protocol PXDataSectionManagerChangeObserver;


#import "PXSectionedDataSourceManager.h"

@interface PXStackedDataSourceManager : PXSectionedDataSourceManager <PXDataSectionManagerChangeObserver>



@property (copy, nonatomic) NSArray *dataSectionManagers; // ivar: _dataSectionManagers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL initialDataSourceCreated; // ivar: _initialDataSourceCreated
@property (readonly) Class superclass;


-(id)_newDataSource;
-(id)createInitialDataSource;
-(id)initWithDataSectionManagers:(id)arg0 ;
-(void)_registerAsChangeObserverForDataSectionManagers:(id)arg0 ;
-(void)_unregisterAsChangeObserverForDataSectionManagers:(id)arg0 ;
-(void)_updateDataSourceWithSectionChanges:(id)arg0 itemChanges:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif