// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYPERSISTABLERECIPEMANAGER_H
#define PXSTORYPERSISTABLERECIPEMANAGER_H

@class NSString, NSError, NSProgress;
@protocol PXChangeObserver, PXStoryQueueParticipant, PXStoryErrorReporter, PFStoryRecipe, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXStoryModel.h"
#import "PXStoryRecipeAssetEdits.h"
#import "PXStoryRecipeManager.h"
#import "PXStoryResourcesDataSourceManager.h"
#import "PXStoryStyleManager.h"
#import "PXUpdater.h"

@interface PXStoryPersistableRecipeManager : PXObservable <PXChangeObserver, PXStoryQueueParticipant>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSObject<PXStoryErrorReporter> *errorReporter; // ivar: _errorReporter
@property (nonatomic) BOOL hasAnyUserChange; // ivar: _hasAnyUserChange
@property (nonatomic) BOOL hasUserExperiencedFirstPlaybackEver; // ivar: _hasUserExperiencedFirstPlaybackEver
@property (nonatomic) BOOL hasUserExperiencedPlayback; // ivar: _hasUserExperiencedPlayback
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isOriginalPersistableRecipeValid; // ivar: _isOriginalPersistableRecipeValid
@property (readonly, nonatomic) BOOL isProducingPersistableRecipe; // ivar: _isProducingPersistableRecipe
@property (readonly, nonatomic) BOOL isReadyToProducePersistableRecipe; // ivar: _isReadyToProducePersistableRecipe
@property (readonly, nonatomic) PXStoryModel *model; // ivar: _model
@property (retain, nonatomic) NSObject<PFStoryRecipe> *originalPersistableRecipe; // ivar: _originalPersistableRecipe
@property (retain, nonatomic) NSObject<PFStoryRecipe> *persistableRecipe; // ivar: _persistableRecipe
@property (nonatomic) NSInteger persistencePermission; // ivar: _persistencePermission
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (retain, nonatomic) PXStoryRecipeAssetEdits *recipeAssetEdits; // ivar: _recipeAssetEdits
@property (readonly, nonatomic) PXStoryRecipeManager *recipeManager; // ivar: _recipeManager
@property (readonly, nonatomic) PXStoryResourcesDataSourceManager *resourcesDataSourceManager; // ivar: _resourcesDataSourceManager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (readonly, nonatomic) PXStoryStyleManager *styleManager; // ivar: _styleManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)_persistableRecipeWithOriginalPersistableRecipe:(id)arg0 recipe:(id)arg1 recipeAssetEdits:(id)arg2 currentStyle:(id)arg3 error:(*id)arg4 ;
-(id)init;
-(id)initWithModel:(id)arg0 styleManager:(id)arg1 ;
-(void)_handlePersistableRecipe:(id)arg0 recipeAssetEdits:(id)arg1 error:(id)arg2 progress:(id)arg3 ;
-(void)_invalidateHasUserExperiencedFirstPlaybackEver;
-(void)_invalidateHasUserExperiencedPlayback;
-(void)_invalidateIsReadyToProducePersistableRecipe;
-(void)_invalidateOriginalPersistableRecipe;
-(void)_invalidatePersistableRecipe;
-(void)_invalidatePersistencePermission;
-(void)_setNeedsUpdate;
-(void)_updateHasUserExperiencedFirstPlaybackEver;
-(void)_updateHasUserExperiencedPlayback;
-(void)_updateIsReadyToProducePersistableRecipe;
-(void)_updateOriginalPersistableRecipe;
-(void)_updatePersistableRecipe;
-(void)_updatePersistencePermission;
-(void)dealloc;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;


@end


#endif