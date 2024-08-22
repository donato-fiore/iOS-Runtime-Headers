// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYRESOURCESDATASOURCEMANAGER_H
#define PXSTORYRESOURCESDATASOURCEMANAGER_H

@class NSString;
@protocol PXStoryMutableResourcesDataSourceManager, PXChangeObserver, PXStoryQueueParticipant, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXStoryConfiguration.h"
#import "PXStoryResourcesDataSource.h"
#import "PXStoryRecipe.h"
#import "PXStoryRecipeManager.h"
#import "PXUpdater.h"

@interface PXStoryResourcesDataSourceManager : PXObservable <PXStoryMutableResourcesDataSourceManager, PXChangeObserver, PXStoryQueueParticipant>



@property (readonly, nonatomic) PXStoryConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) PXStoryResourcesDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDataSourceFinal; // ivar: _isDataSourceFinal
@property (retain, nonatomic) PXStoryRecipe *recipe; // ivar: _recipe
@property (readonly, nonatomic) PXStoryRecipeManager *recipeManager; // ivar: _recipeManager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater


-(id)init;
-(id)initWithRecipeManager:(id)arg0 ;
-(void)_invalidateDataSource;
-(void)_invalidateIsDataSourceFinal;
-(void)_invalidateRecipe;
-(void)_setNeedsUpdate;
-(void)_updateDataSource;
-(void)_updateIsDataSourceFinal;
-(void)_updateRecipe;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)reloadDataSource;


@end


#endif