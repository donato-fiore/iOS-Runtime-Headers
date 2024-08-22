// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAMERAEVENTRECORDINGCELL_H
#define HUCAMERAEVENTRECORDINGCELL_H

@class UICollectionViewCell, CALayer, UIView, HMCameraClip;
@protocol HFCameraImageObserver;


#import "HURecordingEventCellFamiliarFacesView.h"
#import "HUClipScrubberTimeController.h"

@interface HUCameraEventRecordingCell : UICollectionViewCell <HFCameraImageObserver>



@property (retain, nonatomic) CALayer *badgeLayer; // ivar: _badgeLayer
@property (retain, nonatomic) UIView *dayBoundaryView; // ivar: _dayBoundaryView
@property (nonatomic) NSUInteger displayMode; // ivar: _displayMode
@property (retain, nonatomic) HURecordingEventCellFamiliarFacesView *familiarFacesView; // ivar: _familiarFacesView
@property (nonatomic) BOOL hasFamiliarFaces; // ivar: _hasFamiliarFaces
@property (nonatomic) BOOL portraitMode; // ivar: _portraitMode
@property (retain, nonatomic) UIView *posterFramesContainerView; // ivar: _posterFramesContainerView
@property (weak, nonatomic) HMCameraClip *recordingEvent; // ivar: _recordingEvent
@property (weak, nonatomic) HUClipScrubberTimeController *timeController; // ivar: _timeController


+(id)backgroundColor;
-(NSUInteger)numberOfFramesNeeded;
-(id)_badgeImageForSignificantEventReasons:(id)arg0 ;
-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateBadgeLayerWithImage:(id)arg0 inRect:(struct CGRect )arg1 ;
-(void)addDayBoundaryIfNeeded;
-(void)addPosterFrameViews;
-(void)displayReachabilityErrorUI;
-(void)drawEventMarkers;
-(void)hideFamiliarFaces;
-(void)prepareForReuse;
-(void)preparePosterFrameViewsForReuse;
-(void)showFamiliarFacesWithMaxWidth:(CGFloat)arg0 ;
-(void)updateBadgeLayerWithEvents:(id)arg0 inRect:(struct CGRect )arg1 ;
-(void)updateFamiliarFaces;
-(void)updateWithCameraClipEvent:(id)arg0 mode:(NSUInteger)arg1 portraitMode:(BOOL)arg2 timeController:(id)arg3 ;


@end


#endif