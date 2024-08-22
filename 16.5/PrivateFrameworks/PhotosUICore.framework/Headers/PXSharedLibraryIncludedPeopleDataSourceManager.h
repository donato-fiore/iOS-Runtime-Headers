// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYINCLUDEDPEOPLEDATASOURCEMANAGER_H
#define PXSHAREDLIBRARYINCLUDEDPEOPLEDATASOURCEMANAGER_H

@class NSMutableSet, NSMutableArray, NSString;
@protocol PXChangeObserver;


#import "PXSectionedDataSourceManager.h"
#import "PXSharedLibraryIncludedPeopleDataSource.h"
#import "PXSharedLibraryAssistantViewModel.h"

@interface PXSharedLibraryIncludedPeopleDataSourceManager : PXSectionedDataSourceManager <PXChangeObserver>

 {
    NSMutableSet *_removedParticipants;
    NSMutableArray *_infos;
    NSMutableArray *_infosWithBothPeopleAndParticipants;
    NSMutableArray *_infosWithoutPeople;
}


@property (readonly, nonatomic) PXSharedLibraryIncludedPeopleDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel; // ivar: _viewModel
@property (nonatomic) BOOL viewModelSyncingDisabled; // ivar: _viewModelSyncingDisabled


-(id)_infosForPersonIdentifiers:(id)arg0 ;
-(id)createInitialDataSource;
-(id)initWithViewModel:(id)arg0 ;
-(id)pauseChangeDeliveryWithTimeout:(CGFloat)arg0 identifier:(id)arg1 ;
-(void)_resetIfNeeded;
-(void)_updateDataSource;
-(void)_updateDataSourceWithItemChanges:(id)arg0 fromDataSourceIdentifier:(NSInteger)arg1 ;
-(void)_updateViewModel;
-(void)_updateViewModelInitially;
-(void)addInfos:(id)arg0 ;
-(void)addSelectedPersonIdentifiers:(id)arg0 ;
-(void)didCreateInitialDataSource;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)removeAllItems;
-(void)removeInfo:(id)arg0 ;
-(void)replaceInfo:(id)arg0 withInfo:(id)arg1 ;
-(void)resumeChangeDeliveryAndBackgroundLoading:(id)arg0 ;


@end


#endif