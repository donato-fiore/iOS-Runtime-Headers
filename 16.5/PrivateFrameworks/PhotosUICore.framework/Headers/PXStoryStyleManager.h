// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYSTYLEMANAGER_H
#define PXSTORYSTYLEMANAGER_H

@class NSString, NSArray;
@protocol PXStoryMutableStyleManager, PXChangeObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider, PXStoryColorGradingRepository, PXAudioCueProvider, PXAudioCueSource, PXStoryStyle, PXStoryErrorReporter, OS_dispatch_queue, PXStoryStyleProducer;


#import "PXObservable.h"
#import "PXStoryStyleConfiguration.h"
#import "PXStoryRecipeManager.h"
#import "PXStoryStyleSelectionDataSource.h"
#import "PXStoryStyleConfigurationList.h"
#import "PXUpdater.h"

@interface PXStoryStyleManager : PXObservable <PXStoryMutableStyleManager, PXChangeObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider>



@property (nonatomic) BOOL areSelectionDataSourceStylesFinal; // ivar: _areSelectionDataSourceStylesFinal
@property (nonatomic) BOOL areStylesFinal; // ivar: _areStylesFinal
@property (readonly, nonatomic) NSUInteger changesOrigin; // ivar: _changesOrigin
@property (readonly, nonatomic) NSObject<PXStoryColorGradingRepository> *colorGradingRepository; // ivar: _colorGradingRepository
@property (retain, nonatomic) NSObject<PXAudioCueProvider> *cueProvider; // ivar: _cueProvider
@property (nonatomic) NSInteger cueRequestID; // ivar: _cueRequestID
@property (retain, nonatomic) NSObject<PXAudioCueSource> *cueSource; // ivar: _cueSource
@property (readonly, nonatomic) NSObject<PXStoryStyle> *currentStyle; // ivar: _currentStyle
@property (readonly, nonatomic) NSUInteger currentStyleAttributes; // ivar: _currentStyleAttributes
@property (retain, nonatomic) PXStoryStyleConfiguration *currentStyleInfo; // ivar: _currentStyleInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXStoryErrorReporter> *errorReporter; // ivar: _errorReporter
@property (readonly, nonatomic) NSInteger focusedStyleIndex;
@property (readonly, nonatomic) BOOL focusedStyleIsCurrentStyle;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCurrentStyleFinal; // ivar: _isCurrentStyleFinal
@property (copy, nonatomic) NSArray *predefinedStyleInfos; // ivar: _predefinedStyleInfos
@property (readonly, nonatomic) PXStoryRecipeManager *recipeManager; // ivar: _recipeManager
@property (readonly, nonatomic) PXStoryStyleSelectionDataSource *selectionDataSource; // ivar: _selectionDataSource
@property (nonatomic) NSUInteger selectionDataSourceStylesAttributes; // ivar: _selectionDataSourceStylesAttributes
@property (readonly, nonatomic) CGFloat selectionFocus; // ivar: _selectionFocus
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (retain, nonatomic) PXStoryStyleConfigurationList *styleConfigurationList; // ivar: _styleConfigurationList
@property (readonly, nonatomic) ? styleOptions; // ivar: _styleOptions
@property (readonly, nonatomic) NSObject<PXStoryStyleProducer> *styleProducer; // ivar: _styleProducer
@property (nonatomic) NSUInteger stylesAttributes; // ivar: _stylesAttributes
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater


-(id)init;
-(id)initWithRecipeManager:(id)arg0 errorReporter:(id)arg1 ;
-(void)_handleCueSource:(id)arg0 error:(id)arg1 requestID:(NSInteger)arg2 ;
-(void)_invalidateCueSource;
-(void)_invalidateCurrentStyle;
-(void)_invalidateCurrentStyleAttributes;
-(void)_invalidateCurrentStyleInfo;
-(void)_invalidatePredefinedStyleInfos;
-(void)_invalidateSelectionDataSource;
-(void)_invalidateSelectionDataSourceAttributes;
-(void)_invalidateStyleConfigurationList;
-(void)_invalidateStylesAttributes;
-(void)_setNeedsUpdate;
-(void)_updateCueSource;
-(void)_updateCurrentStyle;
-(void)_updateCurrentStyleAttributes;
-(void)_updateCurrentStyleInfo;
-(void)_updatePredefinedStyleInfos;
-(void)_updateSelectionDataSource;
-(void)_updateSelectionDataSourceStylesAttributes;
-(void)_updateStyleConfigurationList;
-(void)_updateStylesAttributes;
-(void)applyFocusedStyle;
-(void)applyFocusedStyleWithCustomizedColorGradeKind:(NSInteger)arg0 ;
-(void)applyFocusedStyleWithCustomizedSongResource:(id)arg0 ;
-(void)applyStyleAtIndex:(NSInteger)arg0 fromDataSource:(id)arg1 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)didEndChangeHandling;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
// -(void)performChanges:(id)arg0 origin:(unk)arg1  ;


@end


#endif