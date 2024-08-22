// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGADGETDATASOURCEMANAGER_H
#define PXGADGETDATASOURCEMANAGER_H

@class NSMutableArray, NSArray, NSString;
@protocol PXGadgetProviderDelegate, PXGadgetDelegate, OS_dispatch_queue, OS_dispatch_group, PXGadgetTransition;


#import "PXSectionedDataSourceManager.h"
#import "PXGadgetDataSource.h"
#import "PXGadgetNavigationHelper.h"

@interface PXGadgetDataSourceManager : PXSectionedDataSourceManager <PXGadgetProviderDelegate, PXGadgetDelegate>

 {
    NSObject<OS_dispatch_queue> *_lookupQueue;
    NSMutableArray *_lookupQueue_loadedProviders;
    NSObject<OS_dispatch_group> *_deferredGadgetLoadingGroup;
    NSObject<OS_dispatch_queue> *_deferredGadgetQueue;
    BOOL _isPerformingChanges;
    BOOL _dataSourceNeedsUpdate;
}


@property (copy, nonatomic) NSArray *cachedProviders; // ivar: _cachedProviders
@property (nonatomic) BOOL canLoadRemainingDataForProviders; // ivar: _canLoadRemainingDataForProviders
@property (readonly, nonatomic) PXGadgetDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didLoadRemainingGadgets; // ivar: _didLoadRemainingGadgets
@property (readonly, nonatomic) id *gadgetProviderSortComparator;
@property (readonly, nonatomic) NSArray *gadgetProviders;
@property (readonly, nonatomic) id *gadgetSortComparator;
@property (readonly, nonatomic) NSObject<PXGadgetTransition> *gadgetTransition;
@property (nonatomic) BOOL hasLoadedPriorities; // ivar: _hasLoadedPriorities
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL loadingInitialGadgets; // ivar: _loadingInitialGadgets
@property (nonatomic) BOOL needsToLoadAllProviders; // ivar: _needsToLoadAllProviders
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *nextGadgetResponder; // ivar: _nextGadgetResponder
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (readonly) Class superclass;


+(id)gadgetDataSourceManagerLog;
-(BOOL)gadget:(id)arg0 transitionToViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(id)createInitialDataSource;
-(id)gadgetViewControllerHostingGadget:(id)arg0 ;
-(id)hiddenGadgetProviders;
-(id)init;
-(id)initWithQueueName:(id)arg0 ;
-(id)noContentGadget;
-(id)presentationEnvironmentForGadget:(id)arg0 ;
-(void)_loadDataFromProviders:(id)arg0 withGadgetMinimum:(NSUInteger)arg1 ;
-(void)_loadPriorityForProviders:(id)arg0 ;
-(void)_updateDataSource;
-(void)beginLoadingInitialGadgets:(NSUInteger)arg0 ;
-(void)didLoadDataForPriorities;
-(void)didPerformChanges;
-(void)dismissGadgetViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)gadget:(id)arg0 animateChanges:(id)arg1 ;
-(void)gadget:(id)arg0 didChange:(NSUInteger)arg1 ;
-(void)invalidateGadgets;
-(void)loadRemainingGadgetsIfNeeded;
-(void)loadRemainingGadgetsIfNeeded:(id)arg0 ;
// -(void)loadRemainingGadgetsIfNeededWithGenerateGadgetFinishedBlock:(id)arg0 completion:(unk)arg1  ;
-(void)presentGadgetViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)removeCachedProviders;
-(void)willPerformChanges;


@end


#endif