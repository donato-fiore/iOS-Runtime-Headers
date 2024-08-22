// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCURATEDLIBRARYANALYSISSTATUS_H
#define PXCURATEDLIBRARYANALYSISSTATUS_H

@class NSTimer, NSString;
@protocol PXMutableCuratedLibraryAnalysisStatus, PXCuratedLibraryEventTracker;


#import "PXObservable.h"
#import "PXCuratedLibraryAssetsDataSourceManager.h"

@interface PXCuratedLibraryAnalysisStatus : PXObservable <PXMutableCuratedLibraryAnalysisStatus>

 {
    NSInteger _numberOfRequestsToCycleThroughAlternateTitles;
    NSTimer *_alternateTitleTimer;
}


@property (readonly, nonatomic) NSInteger alternateTitleIndex; // ivar: _alternateTitleIndex
@property (readonly, nonatomic) PXCuratedLibraryAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) float displayProgress; // ivar: _displayProgress
@property (retain, nonatomic) NSObject<PXCuratedLibraryEventTracker> *eventTracker; // ivar: _eventTracker
@property (readonly, nonatomic) BOOL hasBattery; // ivar: _hasBattery
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDaysMonthsYearsStructureEnabled; // ivar: _isDaysMonthsYearsStructureEnabled
@property (readonly, nonatomic) BOOL isDevicePlugged; // ivar: _isDevicePlugged
@property (readonly, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) float progress; // ivar: _progress
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)_initWithDataSourceManager:(id)arg0 ;
-(id)initWithDataSourceManager:(id)arg0 ;
-(void)_handleAlternateTitleTimer:(id)arg0 ;
-(void)_updateEventsTracking;
-(void)cycleToNextAlternateTitle;
-(void)dealloc;
-(void)didPerformChanges;
-(void)startCyclingThroughAlternateTitles;
-(void)stopCyclingThroughAlternateTitles;


@end


#endif