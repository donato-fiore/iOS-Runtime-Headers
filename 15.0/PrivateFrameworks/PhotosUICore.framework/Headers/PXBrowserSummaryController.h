// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXBROWSERSUMMARYCONTROLLER_H
#define PXBROWSERSUMMARYCONTROLLER_H

@class NSAttributedString, NSDateInterval, NSString, NSDateIntervalFormatter, NSDictionary, NSDateFormatter, NSArray;
@protocol PXMutableBrowserSummaryController, PXInfoUpdaterObserver, PXInfoProvider, PXBrowserSummaryControllerDataSource, OS_dispatch_queue, PXBrowserSelectionSnapshot;


#import "PXObservable.h"
#import "PXSelectedItemsStack.h"
#import "PXInfoUpdater.h"

@interface PXBrowserSummaryController : PXObservable <PXMutableBrowserSummaryController, PXInfoUpdaterObserver, PXInfoProvider>

 {
    ? _needsUpdateFlags;
    ? _dataSourceRespondsTo;
}


@property (copy, nonatomic) NSAttributedString *attributedPrimaryTitle; // ivar: _attributedPrimaryTitle
@property (copy, nonatomic) NSAttributedString *attributedSelectionTitle; // ivar: _attributedSelectionTitle
@property (readonly, nonatomic) NSUInteger containerDateFormatGranularity; // ivar: _containerDateFormatGranularity
@property (copy, nonatomic) NSDateInterval *containerDateInterval; // ivar: _containerDateInterval
@property (copy, nonatomic) NSString *containerTitle; // ivar: _containerTitle
@property (weak, nonatomic) NSObject<PXBrowserSummaryControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter; // ivar: _dateIntervalFormatter
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *defaultAttributes; // ivar: _defaultAttributes
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *emphasizedAttributes; // ivar: _emphasizedAttributes
@property (nonatomic, getter=isFilteringContainerContent) BOOL filteringContainerContent; // ivar: _filteringContainerContent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDateFormatter *importDateFormatter; // ivar: _importDateFormatter
@property (readonly, nonatomic) NSString *localizedComponentsSeparator; // ivar: _localizedComponentsSeparator
@property (copy, nonatomic) NSString *localizedContainerItemsCount; // ivar: _localizedContainerItemsCount
@property (copy, nonatomic) NSString *navigationTitle; // ivar: _navigationTitle
@property (readonly, nonatomic) NSString *noFilteringResultsPlaceholderText; // ivar: _noFilteringResultsPlaceholderText
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic, getter=isReady) BOOL ready; // ivar: _ready
@property (copy, nonatomic) NSString *secondaryTitle; // ivar: _secondaryTitle
@property (retain, nonatomic) PXSelectedItemsStack *selectedAssetsStack; // ivar: _selectedAssetsStack
@property (copy, nonatomic) NSDictionary *selectionAttributes; // ivar: _selectionAttributes
@property (readonly, nonatomic) PXInfoUpdater *selectionInfoUpdater; // ivar: _selectionInfoUpdater
@property (retain, nonatomic) NSObject<PXBrowserSelectionSnapshot> *selectionSnapshot; // ivar: _selectionSnapshot
@property (nonatomic) BOOL shouldShowLocationNames; // ivar: _shouldShowLocationNames
@property (nonatomic) BOOL shouldUseAbbreviatedDates; // ivar: _shouldUseAbbreviatedDates
@property (nonatomic) BOOL shouldUseNavigationTitle; // ivar: _shouldUseNavigationTitle
@property (nonatomic) BOOL shouldUseSubtitles; // ivar: _shouldUseSubtitles
@property (copy, nonatomic) NSArray *stackedAssets; // ivar: _stackedAssets
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *tertiaryTitle; // ivar: _tertiaryTitle
@property (readonly, nonatomic) PXInfoUpdater *titlesInfoUpdater; // ivar: _titlesInfoUpdater
@property (readonly, nonatomic) PXInfoUpdater *visibleMetadataInfoUpdater; // ivar: _visibleMetadataInfoUpdater


-(BOOL)_needsUpdate;
-(BOOL)shouldUpdateImmediately;
-(NSInteger)priorityForInfoRequestOfKind:(id)arg0 ;
-(id)_performRequestBlock:(id)arg0 ;
-(id)_requestTitlesInfoWithResultHandler:(id)arg0 ;
-(id)init;
-(id)mutableChangeObject;
-(id)requestInfoOfKind:(id)arg0 withResultHandler:(id)arg1 ;
-(void)_invalidateAttributedSelectionTitle;
-(void)_invalidateContainerDateInterval;
-(void)_invalidateContainerTitle;
-(void)_invalidateFilteringContainerContent;
-(void)_invalidateLocalizedContainerItemsCount;
-(void)_invalidateSelectionSnapshot;
-(void)_invalidateStackedAssets;
-(void)_invalidateTitles;
-(void)_setNeedsUpdate;
-(void)_updateAttributedSelectionTitleIfNeeded;
-(void)_updateContainerDateIntervalIfNeeded;
-(void)_updateContainerTitleIfNeeded;
-(void)_updateFilteringContainerContentIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateLocalizedContainerItemsCountIfNeeded;
-(void)_updateSelectionSnapshotIfNeeded;
-(void)_updateStackedAssetsIfNeeded;
-(void)didPerformChanges;
-(void)infoUpdaterDidUpdate:(id)arg0 ;
-(void)invalidateContainerDateInterval;
-(void)invalidateContainerTitle;
-(void)invalidateFilteringContainerContent;
-(void)invalidateLocalizedContainerItemsCount;
-(void)invalidateSelection;
-(void)invalidateVisibleContent;
-(void)performBlockWhenDoneUpdating:(id)arg0 ;
-(void)performChanges:(id)arg0 ;


@end


#endif