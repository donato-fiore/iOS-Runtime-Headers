// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYRECIPEMANAGER_H
#define PXSTORYRECIPEMANAGER_H

@class NSDictionary, NSSet, NSProgress, NSString, NSDate;
@protocol PXStoryMutableRecipeManager, PXAssetsDataSourceManagerObserver, PXStoryDiagnosticHUDContentProvider, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider, PXDisplayAssetFetchResult, PXDisplayAssetCollection, PXStoryAssetsProducer, PXStoryAssetsProducerFactory, PXStoryAutoCurationProducer, PXStoryAutoCurationProducerFactory, PXStoryAutoEditDecisionListsProducer, PXStoryAutoEditDecisionListsProducerFactory, PXStoryStylesProducer, PXAudioAssetFetchResult, PXStorySongsProducer, PXStoryErrorReporter, PXStorySongResource, PXDisplayAsset, PXStoryMovieHighlightsProducer, PXStoryMovieHighlightsProducerFactory, PXStoryPersistableRecipeProducer, PXStoryPersistableRecipeProducerFactory, PXStorySongResourceProducer, PXStorySongResourceProducerFactory, PXStorySongsProducerFactory, OS_dispatch_queue, PXStoryStylesProducerFactory;


#import "PXObservable.h"
#import "PXAssetsDataSource.h"
#import "PXAssetsDataSourceManager.h"
#import "PXStoryProducerResult.h"
#import "PXStoryConfiguration.h"
#import "PXStoryAutoEditMomentsProvider.h"
#import "PXStoryRecipeAssetEdits.h"
#import "PXStoryRecipe.h"
#import "PXUpdater.h"

@interface PXStoryRecipeManager : PXObservable <PXStoryMutableRecipeManager, PXAssetsDataSourceManagerObserver, PXStoryDiagnosticHUDContentProvider, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider>



@property (copy, nonatomic) NSDictionary *additionalAutoEditDecisionListsBySong; // ivar: _additionalAutoEditDecisionListsBySong
@property (copy, nonatomic) NSSet *additionalSongs; // ivar: _additionalSongs
@property (retain, nonatomic) NSObject<PXDisplayAssetFetchResult> *allAssets; // ivar: _allAssets
@property (retain, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (retain, nonatomic) NSProgress *assetsAutoCurationProgress; // ivar: _assetsAutoCurationProgress
@property (retain, nonatomic) PXAssetsDataSource *assetsDataSource; // ivar: _assetsDataSource
@property (retain, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager; // ivar: _assetsDataSourceManager
@property (retain, nonatomic) NSObject<PXStoryAssetsProducer> *assetsProducer; // ivar: _assetsProducer
@property (readonly, nonatomic) NSObject<PXStoryAssetsProducerFactory> *assetsProducerFactory; // ivar: _assetsProducerFactory
@property (retain, nonatomic) NSProgress *assetsProgress; // ivar: _assetsProgress
@property (retain, nonatomic) PXStoryProducerResult *assetsResult; // ivar: _assetsResult
@property (retain, nonatomic) NSObject<PXStoryAutoCurationProducer> *autoCurationProducer; // ivar: _autoCurationProducer
@property (readonly, nonatomic) NSObject<PXStoryAutoCurationProducerFactory> *autoCurationProducerFactory; // ivar: _autoCurationProducerFactory
@property (retain, nonatomic) NSObject<PXStoryAutoEditDecisionListsProducer> *autoEditDecisionListsProducer; // ivar: _autoEditDecisionListsProducer
@property (readonly, nonatomic) NSObject<PXStoryAutoEditDecisionListsProducerFactory> *autoEditDecisionListsProducerFactory; // ivar: _autoEditDecisionListsProducerFactory
@property (retain, nonatomic) NSProgress *autoEditDecisionListsProgress; // ivar: _autoEditDecisionListsProgress
@property (retain, nonatomic) PXStoryProducerResult *autoEditDecisionListsResult; // ivar: _autoEditDecisionListsResult
@property (retain, nonatomic) NSObject<PXStoryStylesProducer> *autoEditStylesProducer; // ivar: _autoEditStylesProducer
@property (retain, nonatomic) NSProgress *autoEditStylesProgress; // ivar: _autoEditStylesProgress
@property (retain, nonatomic) PXStoryProducerResult *autoEditStylesResult; // ivar: _autoEditStylesResult
@property (nonatomic) NSUInteger availableCurationLengths; // ivar: _availableCurationLengths
@property (readonly, copy, nonatomic) PXStoryConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<PXDisplayAssetFetchResult> *curatedAssets; // ivar: _curatedAssets
@property (readonly, nonatomic) NSObject<PXAudioAssetFetchResult> *curatedSongs;
@property (retain, nonatomic) NSObject<PXStorySongsProducer> *curatedSongsProducer; // ivar: _curatedSongsProducer
@property (retain, nonatomic) NSProgress *curatedSongsProgress; // ivar: _curatedSongsProgress
@property (retain, nonatomic) PXStoryProducerResult *curatedSongsResult; // ivar: _curatedSongsResult
@property (retain, nonatomic) NSProgress *curationLengthsProgress; // ivar: _curationLengthsProgress
@property (retain, nonatomic) PXStoryProducerResult *curationLengthsResult; // ivar: _curationLengthsResult
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger defaultCurationLength; // ivar: _defaultCurationLength
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXStoryAutoEditMomentsProvider *diagnosticsMomentsProvider;
@property (readonly, nonatomic) NSObject<PXStoryErrorReporter> *errorReporter; // ivar: _errorReporter
@property (nonatomic) NSUInteger finalizedProducers; // ivar: _finalizedProducers
@property (nonatomic) BOOL hasInitialPersistableRecipeBeenProduced; // ivar: _hasInitialPersistableRecipeBeenProduced
@property (nonatomic) BOOL hasInitialStyleBeenProduced; // ivar: _hasInitialStyleBeenProduced
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL haveFinalMovieHighlightsBeenProduced; // ivar: _haveFinalMovieHighlightsBeenProduced
@property (retain, nonatomic) NSProgress *initialAutoEditDecisionListProgress; // ivar: _initialAutoEditDecisionListProgress
@property (retain, nonatomic) PXStoryProducerResult *initialAutoEditDecisionListResult; // ivar: _initialAutoEditDecisionListResult
@property (retain, nonatomic) NSObject<PXStorySongResource> *initialSongResource; // ivar: _initialSongResource
@property (retain, nonatomic) NSObject<PXStoryStylesProducer> *initialStyleProducer; // ivar: _initialStyleProducer
@property (retain, nonatomic) NSProgress *initialStyleProgress; // ivar: _initialStyleProgress
@property (retain, nonatomic) PXStoryProducerResult *initialStyleResult; // ivar: _initialStyleResult
@property (nonatomic) BOOL isAssetCollectionFinal; // ivar: _isAssetCollectionFinal
@property (readonly, nonatomic) BOOL isRecipeFinal; // ivar: _isRecipeFinal
@property (retain, nonatomic) NSObject<PXDisplayAsset> *keyAsset; // ivar: _keyAsset
@property (retain, nonatomic) NSDate *loadingFinalDate; // ivar: _loadingFinalDate
@property (retain, nonatomic) NSDate *loadingReadyForPlaybackDate; // ivar: _loadingReadyForPlaybackDate
@property (retain, nonatomic) NSDate *loadingStartDate; // ivar: _loadingStartDate
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *manuallyCuratedAssets; // ivar: _manuallyCuratedAssets
@property (retain, nonatomic) NSObject<PXStoryMovieHighlightsProducer> *movieHighlightsProducer; // ivar: _movieHighlightsProducer
@property (readonly, nonatomic) NSObject<PXStoryMovieHighlightsProducerFactory> *movieHighlightsProducerFactory; // ivar: _movieHighlightsProducerFactory
@property (retain, nonatomic) NSProgress *movieHighlightsProgress; // ivar: _movieHighlightsProgress
@property (retain, nonatomic) PXStoryProducerResult *movieHighlightsResult; // ivar: _movieHighlightsResult
@property (nonatomic) ? overallDurationInfo; // ivar: _overallDurationInfo
@property (retain, nonatomic) NSObject<PXStoryPersistableRecipeProducer> *persistableRecipeProducer; // ivar: _persistableRecipeProducer
@property (readonly, nonatomic) NSObject<PXStoryPersistableRecipeProducerFactory> *persistableRecipeProducerFactory; // ivar: _persistableRecipeProducerFactory
@property (retain, nonatomic) NSProgress *persistableRecipeProgress; // ivar: _persistableRecipeProgress
@property (retain, nonatomic) PXStoryProducerResult *persistableRecipeResult; // ivar: _persistableRecipeResult
@property (retain, nonatomic) PXStoryRecipeAssetEdits *persistedRecipeAssetEdits; // ivar: _persistedRecipeAssetEdits
@property (retain, nonatomic) NSObject<PXStorySongResourceProducer> *persistedSongProducer; // ivar: _persistedSongProducer
@property (retain, nonatomic) NSProgress *persistedSongProgress; // ivar: _persistedSongProgress
@property (retain, nonatomic) PXStoryProducerResult *persistedSongResult; // ivar: _persistedSongResult
@property (readonly, nonatomic) NSUInteger producersRequiredForPlayback;
@property (readonly, nonatomic) PXStoryRecipe *recipe; // ivar: _recipe
@property (retain, nonatomic) PXStoryRecipeAssetEdits *recipeAssetEdits; // ivar: _recipeAssetEdits
@property (readonly, nonatomic) NSUInteger recipeAttributes; // ivar: _recipeAttributes
@property (nonatomic) NSUInteger remainingProducers; // ivar: _remainingProducers
@property (readonly, nonatomic) BOOL requiresAssetsSynchronously;
@property (readonly, nonatomic) BOOL requiresAutoEditDecisionListsSynchronously;
@property (readonly, nonatomic) BOOL requiresAutoEditStylesSynchronously; // ivar: _requiresAutoEditStylesSynchronously
@property (readonly, nonatomic) BOOL requiresInitialStyleSynchronously;
@property (readonly, nonatomic) BOOL requiresMovieHighlightsSynchronously;
@property (readonly, nonatomic) BOOL requiresPersistableRecipeSynchronously;
@property (readonly, nonatomic) BOOL requiresSongsSynchronously;
@property (readonly, nonatomic) NSDictionary *resultsByComponent;
@property (readonly, nonatomic) BOOL shouldAvoidSynchronousProductions;
@property (readonly, nonatomic) NSObject<PXStorySongResourceProducerFactory> *songResourceProducerFactory; // ivar: _songResourceProducerFactory
@property (readonly, nonatomic) NSObject<PXStorySongsProducerFactory> *songsProducerFactory; // ivar: _songsProducerFactory
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (readonly, nonatomic) NSObject<PXStoryStylesProducerFactory> *stylesProducerFactory; // ivar: _stylesProducerFactory
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) BOOL wantsAutoEditResults;
@property (readonly, nonatomic) BOOL wantsSingleDelivery;


-(id)_collectAutoEditDecisionListsBySong;
-(id)_diagnosticTextForGenericHUDAtDisplaySize:(struct CGSize )arg0 ;
-(id)_shortDescriptionOfPersistableRecipe:(id)arg0 ;
-(id)diagnosticErrorsByComponentForHUDType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 displaySize:(struct CGSize )arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 assetsProducerFactory:(id)arg1 persistableRecipeProducerFactory:(id)arg2 songsProducerFactory:(id)arg3 movieHighlightsProducerFactory:(id)arg4 stylesProducerFactory:(id)arg5 autoEditDecisionListsProducerFactory:(id)arg6 autoCurationProducerFactory:(id)arg7 ;
-(void)_handleAdditionalAutoEditDecisionListsResult:(id)arg0 ;
-(void)_handleAssetsResult:(id)arg0 ;
-(void)_handleAutoEditDecisionListsResult:(id)arg0 ;
-(void)_handleAutoEditStylesResult:(id)arg0 ;
-(void)_handleCuratedAssetsResult:(id)arg0 targetOverallDurationInfo:(struct ? )arg1 ;
-(void)_handleCurationLengthsResult:(id)arg0 ;
-(void)_handleInitialAutoEditDecisionListResult:(id)arg0 ;
-(void)_handleInitialStyleResult:(id)arg0 ;
-(void)_handleMovieHighlightsResult:(id)arg0 ;
-(void)_handlePersistableRecipeResult:(id)arg0 ;
-(void)_handlePersistedSongResourceResult:(id)arg0 ;
-(void)_handleResult:(id)arg0 forComponent:(id)arg1 ;
-(void)_handleSongsResult:(id)arg0 ;
-(void)_invalidateAdditionalAutoEditDecisionLists;
-(void)_invalidateAllAssets;
-(void)_invalidateAssetCollection;
-(void)_invalidateAssets;
-(void)_invalidateAssetsProducer;
-(void)_invalidateAutoCurationProducer;
-(void)_invalidateAutoEditDecisionLists;
-(void)_invalidateAutoEditDecisionListsProducer;
-(void)_invalidateAutoEditStyles;
-(void)_invalidateAutoEditStylesProducer;
-(void)_invalidateCuratedAssets;
-(void)_invalidateCuratedSongs;
-(void)_invalidateCuratedSongsProducer;
-(void)_invalidateCurationLengths;
-(void)_invalidateInitialAutoEditDecisionList;
-(void)_invalidateInitialSongResource;
-(void)_invalidateInitialStyle;
-(void)_invalidateInitialStyleProducer;
-(void)_invalidateKeyAsset;
-(void)_invalidateManuallyCuratedAssets;
-(void)_invalidateMovieHighlights;
-(void)_invalidateMovieHighlightsProducer;
-(void)_invalidateOverallDurationInfo;
-(void)_invalidatePersistableRecipe;
-(void)_invalidatePersistableRecipeProducer;
-(void)_invalidatePersistedSong;
-(void)_invalidatePersistedSongProducer;
-(void)_invalidateRecipe;
-(void)_invalidateRecipeAttributes;
-(void)_setNeedsUpdate;
-(void)_storyQueue_handleChangedAssetsDataSource:(id)arg0 ;
-(void)_updateAdditionalAutoEditDecisionLists;
-(void)_updateAllAssets;
-(void)_updateAssetCollection;
-(void)_updateAssets;
-(void)_updateAssetsProducer;
-(void)_updateAutoCurationProducer;
-(void)_updateAutoEditDecisionLists;
-(void)_updateAutoEditDecisionListsProducer;
-(void)_updateAutoEditStyles;
-(void)_updateAutoEditStylesProducer;
-(void)_updateCuratedAssets;
-(void)_updateCuratedSongs;
-(void)_updateCuratedSongsProducer;
-(void)_updateCurationLengths;
-(void)_updateInitialAutoEditDecisionList;
-(void)_updateInitialSongResource;
-(void)_updateInitialStyle;
-(void)_updateInitialStyleProducer;
-(void)_updateKeyAsset;
-(void)_updateManuallyCuratedAssets;
-(void)_updateMovieHighlights;
-(void)_updateMovieHighlightsProducer;
-(void)_updateOverallDurationInfo;
-(void)_updatePersistableRecipe;
-(void)_updatePersistableRecipeProducer;
-(void)_updatePersistedSong;
-(void)_updatePersistedSongProducer;
-(void)_updateRecipe;
-(void)_updateRecipeAttributes;
-(void)applyKeyAsset:(id)arg0 ;
-(void)applyManuallyCuratedAssets:(id)arg0 ;
-(void)applyManuallyRemovedAsset:(id)arg0 ;
-(void)applyTargetOverallDurationInfo:(struct ? )arg0 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)dealloc;
-(void)didPerformChanges;
-(void)didPersistRecipeAssetEdits:(id)arg0 ;
-(void)ensureAutoEditDecisionListForSong:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;


@end


#endif