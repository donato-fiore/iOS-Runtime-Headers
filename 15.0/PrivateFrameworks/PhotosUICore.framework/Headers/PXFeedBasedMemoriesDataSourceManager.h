// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFEEDBASEDMEMORIESDATASOURCEMANAGER_H
#define PXFEEDBASEDMEMORIESDATASOURCEMANAGER_H

@class NSString;
@protocol PXSectionedDataSourceManagerObserver;


#import "PXMemoriesDataSourceManager.h"
#import "PXMemoriesFeedDataSource.h"
#import "PXMemoriesFeedWidgetDataSourceManager.h"

@interface PXFeedBasedMemoriesDataSourceManager : PXMemoriesDataSourceManager <PXSectionedDataSourceManagerObserver>



@property (retain, nonatomic) PXMemoriesFeedDataSource *childDataSource; // ivar: _childDataSource
@property (readonly, nonatomic) PXMemoriesFeedWidgetDataSourceManager *childDataSourceManager; // ivar: _childDataSourceManager
@property (nonatomic) _NSRange dataSourceRange; // ivar: _dataSourceRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldHandleEntireDataSource;
@property (readonly) Class superclass;


-(id)_adjustChangeDetailsIfNeeded:(id)arg0 previousDataSource:(id)arg1 newDataSource:(id)arg2 ;
-(id)_adjustChangedIndexSetIfNeeded:(id)arg0 ;
-(id)_adjustDataSourceIfNeeded:(id)arg0 ;
-(id)createInitialDataSource;
-(id)initWithMemoriesFeedWidgetDataSourceManager:(id)arg0 ;
-(void)_handleDataSourceChange;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)updateCurrentMemoriesNonPendingAndNotificationStatus;


@end


#endif