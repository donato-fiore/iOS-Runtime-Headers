// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXNAVIGATIONLISTDATASOURCEBASEDDATASECTIONMANAGER_H
#define PXNAVIGATIONLISTDATASOURCEBASEDDATASECTIONMANAGER_H

@class NSString;
@protocol PXCollectionsDataSourceManagerObserver, PXDataSectionManagerEnabling;


#import "PXDataSectionManager.h"
#import "PXSectionedDataSource.h"
#import "PXSectionedDataSourceManager.h"
#import "PXDataSectionEnablementForwarder.h"

@interface PXNavigationListDataSourceBasedDataSectionManager : PXDataSectionManager <PXCollectionsDataSourceManagerObserver, PXDataSectionManagerEnabling>



@property (readonly, nonatomic, getter=isDataSectionVisible) BOOL dataSectionVisible;
@property (retain, nonatomic) PXSectionedDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic, getter=isDataSourceEmpty) BOOL dataSourceEmpty;
@property (readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) PXDataSectionEnablementForwarder *enablementForwarder; // ivar: _enablementForwarder
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHiddenWhenEmpty) BOOL hiddenWhenEmpty; // ivar: _hiddenWhenEmpty
@property (readonly) Class superclass;


-(BOOL)allowsEmptyDataSection;
-(id)createDataSection;
-(id)dataSectionFromDataSource:(id)arg0 ;
-(id)initWithChildDataSectionManagers:(id)arg0 ;
-(id)initWithDataSourceManager:(id)arg0 ;
-(void)_handleDataSourceChange;
-(void)_updateVisibilityViaDataSectionIfNecessary;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif