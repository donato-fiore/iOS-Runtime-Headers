// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYPERSISTENCECONTROLLER_H
#define PXSTORYPERSISTENCECONTROLLER_H

@class NSError, NSProgress;
@protocol PXStoryDiagnosticHUDContentProvider, PXStoryErrorReporter, PFStoryRecipe, PXStoryPersistableRecipeWriter;


#import "PXStoryController.h"
#import "PXStoryConfiguration.h"
#import "PXStoryModel.h"
#import "PXStoryPersistableRecipeManager.h"
#import "PXStoryRecipeAssetEdits.h"

@interface PXStoryPersistenceController : PXStoryController <PXStoryDiagnosticHUDContentProvider>



@property (retain, nonatomic) PXStoryConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSObject<PXStoryErrorReporter> *errorReporter; // ivar: _errorReporter
@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, weak, nonatomic) PXStoryModel *model; // ivar: _model
@property (retain, nonatomic) NSObject<PFStoryRecipe> *persistableRecipe; // ivar: _persistableRecipe
@property (retain, nonatomic) PXStoryPersistableRecipeManager *persistableRecipeManager; // ivar: _persistableRecipeManager
@property (nonatomic) BOOL persisted; // ivar: _persisted
@property (retain, nonatomic) PXStoryRecipeAssetEdits *recipeAssetEdits; // ivar: _recipeAssetEdits
@property (readonly, nonatomic) NSObject<PXStoryPersistableRecipeWriter> *writer; // ivar: _writer
@property (retain, nonatomic) NSProgress *writerProgress; // ivar: _writerProgress


-(id)diagnosticErrorsByComponentForHUDType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 displaySize:(struct CGSize )arg1 ;
-(id)initWithModel:(id)arg0 ;
-(id)initWithObservableModel:(id)arg0 ;
-(void)_ensureWriter;
-(void)_handleWriteSuccess:(BOOL)arg0 createdAssetCollection:(id)arg1 error:(id)arg2 forPersistableRecipe:(id)arg3 recipeAssetEdits:(id)arg4 ;
-(void)_invalidatePersistableRecipe;
-(void)_invalidatePersistableRecipeManager;
-(void)_invalidateRecipeAssetEdits;
-(void)_invalidateWrite;
-(void)_updatePersistableRecipe;
-(void)_updatePersistableRecipeManager;
-(void)_updateRecipeAssetEdits;
-(void)_updateWrite;
-(void)configureUpdater:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif