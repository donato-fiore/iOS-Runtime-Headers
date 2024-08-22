// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCURATEDLIBRARYEVENTTRACKER_H
#define PXCURATEDLIBRARYEVENTTRACKER_H

@class NSTimer, NSString, NSMutableDictionary;
@protocol PXChangeObserver, PXCuratedLibraryEventTracker;


#import "PXMediaViewControllerEventTracker.h"
#import "PXSectionedObjectReference.h"
#import "PXCuratedLibraryLayout.h"
#import "PXCuratedLibraryViewModel.h"

@interface PXCuratedLibraryEventTracker : PXMediaViewControllerEventTracker <PXChangeObserver, PXCuratedLibraryEventTracker>

 {
    BOOL _loggedFirstTimeExperience;
    NSTimer *_slowScrollRegimeTimer;
}


@property (nonatomic) float analysisProgress; // ivar: _analysisProgress
@property (retain, nonatomic) NSString *currentAllPhotosZoomStateName; // ivar: _currentAllPhotosZoomStateName
@property (nonatomic) NSInteger currentAllPhotosZoomStateSignpost; // ivar: _currentAllPhotosZoomStateSignpost
@property (nonatomic) NSInteger currentZoomLevelSignpost; // ivar: _currentZoomLevelSignpost
@property (nonatomic) NSInteger currentlyViewedZoomLevel; // ivar: _currentlyViewedZoomLevel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXSectionedObjectReference *dominantObjectReference; // ivar: _dominantObjectReference
@property (nonatomic) float firstTimeExperienceAnalysisProgress; // ivar: _firstTimeExperienceAnalysisProgress
@property (nonatomic) NSInteger firstTimeExperienceLibraryItemsCount; // ivar: _firstTimeExperienceLibraryItemsCount
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXCuratedLibraryLayout *layout; // ivar: _layout
@property (nonatomic) NSInteger libraryItemsCount; // ivar: _libraryItemsCount
@property (copy, nonatomic) NSMutableDictionary *payload;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger userEventSource; // ivar: _userEventSource
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // ivar: _viewModel


-(id)initWithViewModel:(id)arg0 layout:(id)arg1 ;
-(id)initWithViewName:(id)arg0 ;
-(id)userEventTracker;
-(void)_configureTimerForSlowScrollRegimeUpdatesIfNeeded;
-(void)_invalidateCurrentAllPhotosZoomState;
-(void)_invalidateCurrentlyViewedZoomLevel;
-(void)_invalidateDominantObjectReference;
-(void)_invalidateFirstTimeExperienceReadinessLogging;
-(void)_invalidateUserEventSource;
-(void)_logDidEndViewingAllPhotosZoomStateName:(id)arg0 ;
-(void)_logDidEndViewingZoomLevel:(NSInteger)arg0 ;
-(void)_logDidStartViewingAllPhotosZoomStateName:(id)arg0 ;
-(void)_logDidStartViewingZoomLevel:(NSInteger)arg0 ;
-(void)_updateCurrentAllPhotosZoomState;
-(void)_updateCurrentlyViewedZoomLevel;
-(void)_updateDominantObjectReference;
-(void)_updateFirstTimeExperienceReadinessLogging;
-(void)_updateUserEventSource;
-(void)dealloc;
-(void)logAnalysisProgress:(float)arg0 ;
-(void)logLibraryItemsCount:(NSInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif