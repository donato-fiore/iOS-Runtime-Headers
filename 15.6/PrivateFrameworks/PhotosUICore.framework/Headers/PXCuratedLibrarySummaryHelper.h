// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYSUMMARYHELPER_H
#define PXCURATEDLIBRARYSUMMARYHELPER_H

@class NSString;
@protocol PXBrowserSummaryControllerDataSource, PXChangeObserver, PXLibrarySummaryDataSource, PXLibrarySummaryOutputPresenter, PXDisplayAssetCollection;

#import <Foundation/Foundation.h>

#import "PXBrowserSummaryController.h"

@interface PXCuratedLibrarySummaryHelper : NSObject <PXBrowserSummaryControllerDataSource, PXChangeObserver>

 {
    BOOL _isPerformingUpdates;
    BOOL _isPerformingChanges;
    ? _needsUpdateFlags;
    ? _dataSourceRespondsTo;
    ? _outputPresenterRespondsTo;
}


@property (weak, nonatomic) NSObject<PXLibrarySummaryDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXLibrarySummaryOutputPresenter> *outputPresenter; // ivar: _outputPresenter
@property (readonly, nonatomic) BOOL shouldShowImportDates;
@property (nonatomic) BOOL shouldUseAbbreviatedDates; // ivar: _shouldUseAbbreviatedDates
@property (readonly, nonatomic) PXBrowserSummaryController *summaryController; // ivar: _summaryController
@property (readonly) Class superclass;
@property (retain, nonatomic, setter=_setTopmostAssetCollection:) NSObject<PXDisplayAssetCollection> *topmostAssetCollection; // ivar: _topmostAssetCollection


-(BOOL)_needsUpdate;
-(BOOL)browserSummaryControllerShouldUpdateImmediately:(id)arg0 ;
-(id)init;
-(id)visibleContentSnapshotForBrowserSummaryController:(id)arg0 ;
-(void)_invalidateSubtitle;
-(void)_invalidateTitle;
-(void)_invalidateTopmostAssetCollection;
-(void)_performChanges:(id)arg0 ;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(void)_updateSubtitle;
-(void)_updateSubtitleFromSummaryController;
-(void)_updateTitle;
-(void)_updateTitleFromSummaryController;
-(void)_updateTopmostAssetCollection;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)visibleContentDidChange;


@end


#endif