// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCLIPSCRUBBERDATASOURCE_H
#define HUCLIPSCRUBBERDATASOURCE_H

@class UICollectionView, NSDate, NSArray, NSString, UICollectionViewDiffableDataSource, HFPlaybackEventsData, HFCameraPlaybackEngine;
@protocol HFCameraPlaybackEngineObserver, UICollectionViewDataSource, HFCameraRecordingEvent, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HUClipScrubberSelectionView.h"
#import "HUClipScrubberTimeController.h"

@interface HUClipScrubberDataSource : NSObject <HFCameraPlaybackEngineObserver, UICollectionViewDataSource>



@property (weak, nonatomic) UICollectionView *clipCollectionView; // ivar: _clipCollectionView
@property (retain, nonatomic) NSDate *currentDate; // ivar: _currentDate
@property (weak, nonatomic) NSObject<HFCameraRecordingEvent> *currentEvent; // ivar: _currentEvent
@property (readonly, nonatomic) NSArray *currentEvents;
@property (nonatomic) NSUInteger currentTimelineState; // ivar: _currentTimelineState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (nonatomic) NSUInteger displayMode; // ivar: _displayMode
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (retain, nonatomic) HFPlaybackEventsData *eventsData; // ivar: _eventsData
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastGestureScale; // ivar: _lastGestureScale
@property (nonatomic) NSInteger lastSelectedClipIndex; // ivar: _lastSelectedClipIndex
@property (weak, nonatomic) NSObject<HFCameraRecordingEvent> *lastUpdatedEvent; // ivar: _lastUpdatedEvent
@property (readonly, nonatomic) NSUInteger mostRecentClipIndex; // ivar: _mostRecentClipIndex
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (nonatomic) CGFloat posterFrameWidth; // ivar: _posterFrameWidth
@property (retain, nonatomic) HUClipScrubberSelectionView *selectionView; // ivar: _selectionView
@property (nonatomic) BOOL selectionViewHidden; // ivar: _selectionViewHidden
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *snapshotQueue; // ivar: _snapshotQueue
@property (nonatomic) CGFloat startingPinchDeltaX; // ivar: _startingPinchDeltaX
@property (readonly) Class superclass;
@property (retain, nonatomic) HUClipScrubberTimeController *timeController; // ivar: _timeController


-(BOOL)isSpacerAtIndexPath:(id)arg0 ;
-(BOOL)isValidEventAtIndexPath:(id)arg0 ;
-(BOOL)isValidRecordingEventAtIndexPath:(id)arg0 ;
-(BOOL)isZoomingIn:(CGFloat)arg0 ;
-(CGFloat)offsetForEvent:(id)arg0 ;
-(CGFloat)scrubbingResolutionForClip:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)eventForSection:(NSUInteger)arg0 ;
-(id)indexPathForEvent:(id)arg0 ;
-(id)indexPathsForClip:(id)arg0 ;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(id)previousEventForSection:(NSUInteger)arg0 ;
-(id)reachabilitySectionCellForCollectionView:(id)arg0 forEvent:(id)arg1 atIndexPath:(id)arg2 ;
-(id)recordingSectionCellForCollectionView:(id)arg0 forEvent:(id)arg1 atIndexPath:(id)arg2 ;
-(id)selectedDateFromCell:(id)arg0 atCurrentOffset:(CGFloat)arg1 ;
-(id)selectedDateFromCell:(id)arg0 atOffset:(CGFloat)arg1 ;
-(id)spacerCellForCollectionView:(id)arg0 forEvent:(id)arg1 atIndexPath:(id)arg2 ;
-(id)startDateFromCell:(id)arg0 ;
-(void)addDiffableDataSource;
-(void)beginTimeScaleTrackingForPinchGesture:(id)arg0 ;
-(void)changeTimeScaleForNewScale:(CGFloat)arg0 ;
-(void)changeTimeScaleForPinchGesture:(id)arg0 ;
-(void)expandToMaximumZoom;
-(void)playbackEngine:(id)arg0 didRemoveEvents:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdateEvents:(id)arg1 ;
-(void)reloadEvents:(id)arg0 ;
-(void)shrinkToMinimumZoom;
-(void)toggleSelectionStateForItemAtIndexPath:(id)arg0 ;
-(void)updateClipCollectionView;
-(void)updateEvents:(id)arg0 ;
-(void)updateMostRecentClipIndex;
-(void)updateSelectionViewIfNeeded;
-(void)updateSnapshot;
-(void)updateSnapshotForEditing;
-(void)updateToClipAtIndexPath:(id)arg0 ;


@end


#endif